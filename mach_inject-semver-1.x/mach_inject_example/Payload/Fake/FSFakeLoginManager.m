//
//  FSFakeLoginManager.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSFakeLoginManager.h"

@implementation FSFakeLoginManager
+ (instancetype) defaultManager
{
    Class cla = NSClassFromString(@"FLLoginManager");
    return [cla defaultManager];
}
@end
