//
//  FSRemoteResponse.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSRemoteResponse.h"

@implementation FSRemoteResponse
+ (instancetype) fatalRespone:(int32_t)code message:(NSString *)message
{
    FSRemoteResponse* rsp = [FSRemoteResponse new];
    rsp.code = code;
    rsp.message= message;
    return rsp;
}

+ (instancetype) successResponse:(NSData*)data
{
    FSRemoteResponse* rsp = [FSRemoteResponse new];
    rsp.code = 0;
    rsp.data = data;
    return rsp;
}
@end
