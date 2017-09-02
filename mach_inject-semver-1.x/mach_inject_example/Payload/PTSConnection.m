//
//  PTSConnection.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/25.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "PTSConnection.h"
#import "SRWebSocket.h"
#import "SRSecurityPolicy.h"
#import "FSLogger.h"
#import "FSRouter.h"
#import "Promethus.h"

@interface PTSConnection () <SRWebSocketDelegate>
{
    SRWebSocket* _socket;
    NSTimer* _pingTimer;
    FSRouter* _router;
}
@property (nonatomic, strong) NSURL* url;
@end

@implementation PTSConnection

+ (instancetype) shareConnection
{
    static PTSConnection * share = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        share = [[PTSConnection alloc] initWithURL:[NSURL URLWithString:@"ws://localhost:8181"]];
    });
    return share;
}

- (instancetype) initWithURL:(NSURL*)url
{
    self = [super init];
    if (!self) {
        return self;
    }
    _url = url;
    _router = [FSRouter new];
    [self constructRouter];
    return self;
}

- (void) constructRouter
{
    FSRouteBlockRecord* trade = [[FSRouteBlockRecord alloc] initWithMethod:@"trade"];
    [trade setAction:^( FSRequest*request ,FSRemoteResponseContinue contnueBlock) {
        FSLogDebug(@"trade %lld",request.message.seq);
        NSMutableDictionary* query = [NSMutableDictionary new];
        query[@"stock"] = @"002230";
        query[@"price"] = @(200);
        query[@"quantity"] = @(2000);
        query[@"side"] = @(1);
        
        [[Promethus shareInstance] trade:query response:^(NSError *error, NSDictionary *response) {
            int code = [response[@"ErrCode"] intValue];
            FSRemoteResponse* rsp = nil;
            if (code) {
                rsp = [FSRemoteResponse fatalRespone:code  message:response[@"ErrDesc"]];
            } else {
                rsp = [FSRemoteResponse successResponse:nil];
            }
            contnueBlock(rsp);
        }];
    }];
    [_router addRecord:trade error:nil];
}

- (void) ensureConnect
{
    FSLogDebug(@"socket connecting");
    if (_socket && ( _socket.readyState == SR_OPEN || _socket.readyState == SR_CONNECTING)) {
        FSLogDebug(@"_socket %d", _socket.readyState);
        return;
    }
    _socket.delegate = nil;
    [_socket close];
    _socket = [[SRWebSocket alloc] initWithURL:_url ];
    _socket.delegate = self;
    [_socket open];
    FSLogDebug(@"socket connecting");
    [self startPint];
}


- (void) webSocketDidOpen:(SRWebSocket *)webSocket
{
    FSLogDebug(@"🚀SOCKET opened!!");
}

- (void) startPint
{
    _pingTimer = nil;
    _pingTimer = [NSTimer scheduledTimerWithTimeInterval:2 target:self selector:@selector(ping) userInfo:nil repeats:YES];
}

- (void) ping
{
    NSData* data = [@"xx" dataUsingEncoding:NSUTF8StringEncoding];
    [_socket sendPing:data error:nil];
}

- (void) webSocket:(SRWebSocket *)webSocket didReceiveMessageWithString:(NSString *)string
{
    FSLogDebug(@"🚀SOCKET message %@", string);
}

- (void) webSocket:(SRWebSocket *)webSocket didReceivePong:(NSData *)pongData
{
    FSLogDebug(@"pong %@", [[NSString alloc] initWithData:pongData encoding:NSUTF8StringEncoding]);
}

- (void) webSocket:(SRWebSocket *)webSocket didFailWithError:(NSError *)error
{
    FSLogDebug(@"🚀SOCKET error %@", error);
}

- (void) webSocket:(SRWebSocket *)webSocket didReceiveMessageWithData:(NSData *)data
{
    FSLogDebug(@"SOCKET revice message %@", [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding]);
    [_router handleRemoteData:data withConnection:self];
}
- (BOOL) writeData:(NSData *)data error:(NSError* __autoreleasing*)error
{
    if (_socket.readyState != SR_OPEN) {
        if (NULL != error) {
            *error = [NSError errorWithDomain:@"zz" code:-11 userInfo:nil];
        }
        return NO;
    }
    return [_socket sendData:data error:error];
}
@end
