//
//  FSRouteRecord.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSRouteRecord.h"

@implementation FSRouteRecord
- (instancetype) initWithMethod:(NSString *)method
{
    self = [super init];
    if (!self) {
        return self;
    }
    _method = method;
    return self;
}
@end


@implementation FSRouteBlockRecord

- (void) handleRemoteRequest:(FSRequest *)request responseHandler:(void (^)(FSRemoteResponse *))handler
{
    if (self.action) {
        self.action(request, handler);
    }
}

@end
