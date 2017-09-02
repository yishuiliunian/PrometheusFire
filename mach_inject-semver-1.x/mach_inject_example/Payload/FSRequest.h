//
//  FSRequest.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "trader.h"
@interface FSRequest : NSObject
@property (nonatomic, strong, readonly) PTMessage* message;
+ (instancetype) new NS_UNAVAILABLE;
- (instancetype) init NS_UNAVAILABLE;
- (instancetype) initWithData:(NSData*)data;

- (BOOL) checkVaild:(NSError* __autoreleasing*)error;
@end
