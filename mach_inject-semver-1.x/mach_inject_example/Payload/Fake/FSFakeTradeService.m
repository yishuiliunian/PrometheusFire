//
//  FSFakeTradeService.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSFakeTradeService.h"

@implementation FSFakeTradeService
+ (instancetype) shareInstance
{
    Class cla = NSClassFromString( @"FLTradeService");
    return (FSFakeTradeService*)[cla shareInstance];
}
@end
