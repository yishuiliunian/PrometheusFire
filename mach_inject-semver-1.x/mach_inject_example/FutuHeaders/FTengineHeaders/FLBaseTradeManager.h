//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseManager.h>

@class NSArray, NSMutableArray;

@interface FLBaseTradeManager : FLBaseManager
{
    NSArray *_subAccounts;
    NSMutableArray *_historyPositionStockArray;
}

@property(retain, nonatomic) NSMutableArray *historyPositionStockArray; // @synthesize historyPositionStockArray=_historyPositionStockArray;
@property(retain, nonatomic) NSArray *subAccounts; // @synthesize subAccounts=_subAccounts;
- (void).cxx_destruct;
- (void)requestTradesOfOrder:(id)arg1 page:(int)arg2 pageCount:(unsigned int)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)requestHistoryOrdersOfStock:(id)arg1 page:(int)arg2 pageCount:(unsigned int)arg3 subAccount:(id)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (void)getMaxTradeQuantityForOrder:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)getMaxTradeQuantityForStock:(id)arg1 forSubAccount:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)requestTriggerOrdersForSubAccount:(id)arg1;
- (void)requestOrdersForSubAccount:(id)arg1;
- (void)requestTradesForSubAccount:(id)arg1;
- (void)requestStatisticsForSubAccount:(id)arg1;
- (void)requestAccountInfoForSubAccount:(id)arg1;
- (void)switchUser:(id)arg1;
- (void)requestDataForSubAccount:(id)arg1;
- (void)requestDataForSubAccounts;
- (void)setupManager;
@property(readonly, nonatomic) BOOL simulation;
@property(readonly, nonatomic) unsigned long long marketType;
- (void)dealloc;
- (void)onSubAccountsDidFetched:(id)arg1;
- (void)onSessionServerDidLogin:(id)arg1;
- (void)updateStockPositionProperty;
- (void)onStockListUpdated:(id)arg1;
- (id)init;

@end

