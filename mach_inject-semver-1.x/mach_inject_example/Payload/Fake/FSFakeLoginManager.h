//
//  FSFakeLoginManager.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSFakeBaseHandler.h"
@interface FSFakeLoginManager : NSObject
+ (instancetype) defaultManager;
- (id) currentLoginingAccount;
- (FSFakeBaseHandler*) orderHandler;
@end
