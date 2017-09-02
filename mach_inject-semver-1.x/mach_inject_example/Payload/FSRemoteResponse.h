//
//  FSRemoteResponse.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSRemoteResponse : NSObject
@property (nonatomic, assign) int32_t code;
@property (nonatomic, strong) NSString* message;
@property (nonatomic, strong) NSData* data;
+ (instancetype) fatalRespone:(int32_t)code message:(NSString*)message;
+ (instancetype) successResponse:(NSData*)data;
@end
