//
//  FSFakeUserQuoteData.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/29.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSFakeUserQuoteData : NSObject
@property(nonatomic) double tryHighLevelQuoteExpiredTime; // @synthesize tryHighLevelQuoteExpiredTime=_tryHighLevelQuoteExpiredTime;
@property(nonatomic) unsigned long long tryHighLevelQuoteState; // @synthesize tryHighLevelQuoteState=_tryHighLevelQuoteState;
@property(nonatomic) unsigned long long quotePermissionStateDiffReason; // @synthesize quotePermissionStateDiffReason=_quotePermissionStateDiffReason;
@property(nonatomic) unsigned long long oldState; // @synthesize oldState=_oldState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long marketType; // @synthesize marketType=_marketType;
- (id)description;
- (BOOL)isDelay;
- (BOOL)isBMP;
- (long long)permission;
@end
