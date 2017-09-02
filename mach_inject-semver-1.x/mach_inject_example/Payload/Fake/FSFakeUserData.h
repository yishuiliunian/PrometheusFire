//
//  FSFakeUserData.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/29.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSFakeCNUserQuoteData.h"
#import "FSFakeCNUserQuoteData.h"
@interface FSFakeUserData : NSObject
@property(nonatomic) unsigned int friendVerifyType; // @synthesize friendVerifyType=_friendVerifyType;
@property(retain, nonatomic) NSArray *visitedStocks; // @synthesize visitedStocks=_visitedStocks;
//@property(retain, nonatomic) FLWatchStockContainer *watchStockContainer; // @synthesize watchStockContainer=_watchStockContainer;
@property(nonatomic) BOOL isClient; // @synthesize isClient=_isClient;
@property(retain, nonatomic) NSArray *cnHistoryStocks; // @synthesize cnHistoryStocks=_cnHistoryStocks;
@property(retain, nonatomic) NSArray *usHistoryStocks; // @synthesize usHistoryStocks=_usHistoryStocks;
@property(retain, nonatomic) NSArray *hkHistoryStocks; // @synthesize hkHistoryStocks=_hkHistoryStocks;
@property(nonatomic) BOOL watchStocksLimitReached; // @synthesize watchStocksLimitReached=_watchStocksLimitReached;
@property(nonatomic) BOOL watchGroupsLimitReached; // @synthesize watchGroupsLimitReached=_watchGroupsLimitReached;
@property(retain, nonatomic) FSFakeCNUserQuoteData *cnQuoteData; // @synthesize cnQuoteData=_cnQuoteData;
//@property(retain, nonatomic) FLUSUserQuoteData *usQuoteData; // @synthesize usQuoteData=_usQuoteData;
//@property(retain, nonatomic) FLHKUserQuoteData *hkQuoteData; // @synthesize hkQuoteData=_hkQuoteData;
@property(nonatomic) long long HKSubAccountState; // @synthesize HKSubAccountState=_HKSubAccountState;
@property(nonatomic) long long USSubAccountsState; // @synthesize USSubAccountsState=_USSubAccountsState;
@property(nonatomic) BOOL hasUSMarginSubAccount; // @synthesize hasUSMarginSubAccount=_hasUSMarginSubAccount;
@property BOOL isGuest; // @synthesize isGuest=_isGuest;
@property(nonatomic) unsigned int serviceFlag; // @synthesize serviceFlag=_serviceFlag;
@property(nonatomic) unsigned int futureFlag; // @synthesize futureFlag=_futureFlag;
@property(nonatomic) unsigned int usOptionFlag; // @synthesize usOptionFlag=_usOptionFlag;
@property(retain, nonatomic) NSDate *lastLoginTime; // @synthesize lastLoginTime=_lastLoginTime;
@property(retain, nonatomic) NSString *lastLoginAddress; // @synthesize lastLoginAddress=_lastLoginAddress;
@property(retain, nonatomic) NSString *lastLoginIp; // @synthesize lastLoginIp=_lastLoginIp;
@property(retain, nonatomic) NSDate *freeExpiredTime; // @synthesize freeExpiredTime=_freeExpiredTime;
@property(copy, nonatomic) NSString *webSig; // @synthesize webSig=_webSig;
@property(copy, nonatomic) NSString *uploadSig; // @synthesize uploadSig=_uploadSig;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *login; // @synthesize
@end
