//
//  FSFakeBaseTradeManager.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/29.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSFakeSubAccount.h"
@interface FSFakeBaseTradeManager : NSObject
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) double refreshTimeInterval; // @synthesize refreshTimeInterval=_refreshTimeInterval;
@property(retain, nonatomic) FSFakeSubAccount *subAccount; // @synthesize subAccount=_subAccount;
- (void)historyType:(int)arg1 fromDate:(id)arg2 toDate:(id)arg3 pageFlag:(id)arg4 context:(id)arg5 subAccount:(id)arg6;
- (void)orderSetting:(id)arg1 actionType:(int)arg2 subAccount:(id)arg3;
- (void)orderMake:(id)arg1;
- (void)showNeedRiskForPingAn:(id)arg1;
- (void)updateTradeList:(id)arg1;
- (void)updateOrderList:(id)arg1;
- (void)updateFund:(id)arg1;
- (void)updateAll:(id)arg1;
- (id)errMessageWithErrDescHash:(long long)arg1;
- (long long)transformToF3CPriceWithUIPrice:(long long)arg1;
- (unsigned char)quoteMarketIDForTradeMarketType:(int)arg1;
- (void)requestShareholdersForSubAccount:(id)arg1;
- (void)requestCashInfoForSubAccount:(id)arg1;
- (void)requestPositionsForSubAccount:(id)arg1;
- (void)updateShareholderListWithSubAccountID:(unsigned long long)arg1;
- (void)updatePositionListWithSubAccountID:(unsigned long long)arg1;
- (void)updateTradeListWithSubAccountID:(unsigned long long)arg1;
- (void)updateOrderListWithSubAccountID:(unsigned long long)arg1;
- (void)updateFundWithSubAccountID:(unsigned long long)arg1;
- (void)updateAllWithSubAccountID:(unsigned long long)arg1;
@property(nonatomic) BOOL pingAnEnv;
- (void)requestOrdersForSubAccount:(id)arg1;
- (void)requestTradesForSubAccount:(id)arg1;
- (void)requestAccountInfoForSubAccount:(id)arg1;
- (void)requestDataForSubAccount:(id)arg1;
- (unsigned long long)marketType;

@end
