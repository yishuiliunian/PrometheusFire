//
//  Promethus.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/24.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Promethus : NSObject
+ (instancetype) shareInstance;
- (void) trade:(NSDictionary*)query response:(void(^)(NSError *error, NSDictionary* response))response;
@end
