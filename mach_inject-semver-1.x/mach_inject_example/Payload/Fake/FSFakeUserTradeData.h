//
//  FSFakeUserTradeData.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/29.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSFakeSubAccount.h"
@interface FSFakeUserTradeData : NSObject
@property(retain, nonatomic) NSMutableDictionary *accountDefaultDic; // @synthesize accountDefaultDic=_accountDefaultDic;
@property(retain, nonatomic) NSString *accountSettingFilePath; // @synthesize accountSettingFilePath=_accountSettingFilePath;
@property(nonatomic) BOOL tokenEnabled; // @synthesize tokenEnabled=_tokenEnabled;
@property(nonatomic) BOOL tokenBind; // @synthesize tokenBind=_tokenBind;
@property(nonatomic) BOOL isShowUpdatePasswordToSixDigit; // @synthesize isShowUpdatePasswordToSixDigit=_isShowUpdatePasswordToSixDigit;
@property(nonatomic) BOOL orderPasswordIsolated; // @synthesize orderPasswordIsolated=_orderPasswordIsolated;
@property(readonly, nonatomic) BOOL subAccountHasThirdParty; // @synthesize subAccountHasThirdParty=_subAccountHasThirdParty;
@property(nonatomic) int subAccountsFectchState; // @synthesize subAccountsFectchState=_subAccountsFectchState;
@property(readonly, nonatomic) FSFakeSubAccount *firstFutuAccount; // @synthesize firstFutuAccount=_firstFutuAccount;
@property(retain, nonatomic) NSArray *positionStocks; // @synthesize positionStocks=_positionStocks;
@property(retain, nonatomic) NSArray *subAccounts; // @synthesize subAccounts=_subAccounts;
- (void)updatePositionStocks;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)subAccountsOpenStateWithHasCashSubAccount:(BOOL)arg1 hasMarginSubAccount:(BOOL)arg2;
@property(readonly, nonatomic) BOOL hasOpenedSubAccounts;
@property(readonly, nonatomic) BOOL hasOpenedFutuAccounts;
@property(readonly, nonatomic) BOOL hasFutuAccounts;
- (id)usAccount;
- (id)cnAccount;
- (id)hkAccount;
- (void)clearUserData;
- (id)subAccountWithID:(unsigned long long)arg1;
- (void)setDefaultSubAccountWithAccount:(id)arg1;
- (id)defaultSubAccountWithStockMarketType:(unsigned long long)arg1 isSimulate:(BOOL)arg2;
- (id)subAccountsWithStockMarketType:(unsigned long long)arg1 isSimulate:(BOOL)arg2;
- (id)subAccountsWithStockMarketType:(unsigned long long)arg1;
- (void)initTradeSubAccount;
- (void)dealloc;
- (id)init;
@end
