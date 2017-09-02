//
//  FSRouter.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSRouter.h"
#import "trader.h"
#import "FSLogger.h"
#import "FSRequest.h"
#import "PTSConnection.h"

@interface FSRouter()
{
    NSMutableDictionary* _routerMap;
}
@end

@implementation FSRouter

- (instancetype) init
{
    self = [super init];
    if (!self) {
        return self;
    }
    _routerMap = [NSMutableDictionary new];
    return self;
}

- (BOOL) addRecord:(FSRouteBlockRecord *)record error:(NSError *__autoreleasing *)error
{
    NSString* key = record.method;
    NSParameterAssert(key);
    if (_routerMap[key]) {
        if (error != NULL) {
            *error = [NSError errorWithDomain:@"com.premotheus" code:-11 userInfo:@{}];
        }
        return NO;
    }
    _routerMap[key] = record;
    return YES;
}

- (void) handleRemoteData:(NSData*)data withConnection:(PTSConnection*)connection
{
    FSRequest* request = [[FSRequest alloc] initWithData:data];
    FSLogDebug(@"build request %@",request);
    if (request.message.oneway_p) {
        return;
    }
    NSError* error;
    int64_t seq = request.message.seq;
    NSString* servant = request.message.servant;
    NSString* method = request.message.method;
    FSRemoteResponseContinue action = ^(FSRemoteResponse* response) {
        FSLogDebug(@"response %d %@", response.code, response.message);
        PTMessage* message = [PTMessage new];
        message.seq = seq;
        message.data_p = response.data;
        message.code = response.code;
        message.message = response.message;
        [message setOneway_p:YES];
        [message setVersion:111];
        [message setServant:servant];
        [message setMethod:method];
        
        [connection writeData:message.data error:nil];
    };
    
    if(![request checkVaild:&error])
    {
        action([FSRemoteResponse fatalRespone:-11 message:@"客户端无法解析请求"]);
        return;
    }

    FSRouteRecord* record = _routerMap[request.message.method];
    if (record) {
        FSLogDebug(@"Find recode ");
        [record handleRemoteRequest:request responseHandler:action];
    }
}
@end
