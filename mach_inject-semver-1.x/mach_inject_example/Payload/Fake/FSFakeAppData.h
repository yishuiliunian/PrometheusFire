//
//  FSFakeAppData.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSFakeUserData.h"
@interface FSFakeAppData : NSObject
+ (instancetype) shareInstance;
- (FSFakeUserData*) user;
@end
