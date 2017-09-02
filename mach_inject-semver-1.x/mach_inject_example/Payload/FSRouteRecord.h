//
//  FSRouteRecord.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSRequest.h"
#import "FSRemoteResponse.h"
typedef void(^FSRemoteResponseContinue) (FSRemoteResponse* response);
typedef void(^FSRouteHandlerAction)( FSRequest*request ,FSRemoteResponseContinue contnueBlock);
@class PTSConnection;
@interface FSRouteRecord : NSObject
@property (nonatomic, strong, readonly) NSString* method;
- (instancetype) initWithMethod:(NSString*)method;
- (void) handleRemoteRequest:(FSRequest*)request responseHandler:(void(^)(FSRemoteResponse* response))handler;
@end


@interface FSRouteBlockRecord : FSRouteRecord
@property (nonatomic, strong) void(^action)( FSRequest*request ,FSRemoteResponseContinue contnueBlock) ;
@end


