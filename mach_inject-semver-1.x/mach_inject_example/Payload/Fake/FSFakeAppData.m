//
//  FSFakeAppData.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSFakeAppData.h"

@implementation FSFakeAppData
+ (instancetype) shareInstance
{
    Class cla = NSClassFromString(@"FLAppData");
    return [cla shareInstance];
}
@end
