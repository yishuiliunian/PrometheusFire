//
//  FSFakeTradeManager.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSFakeAccount.h"
@interface FSFakeTradeManager : NSObject
- (id) subAccount;
- (NSArray<FSFakeAccount*>*) subAccounts;
@end
