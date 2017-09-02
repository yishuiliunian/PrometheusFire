//
//  FSFakeSubAccount.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/29.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSFakeSubAccount : NSObject
@property long long updateMaxTradeQuantitySequence; // @synthesize updateMaxTradeQuantitySequence=_updateMaxTradeQuantitySequence;
@property(nonatomic) BOOL hasTimeoutOrders; // @synthesize hasTimeoutOrders=_hasTimeoutOrders;
@property(nonatomic) long long updateSequence; // @synthesize updateSequence=_updateSequence;
@property(retain, nonatomic) NSArray *positions; // @synthesize positions=_positions;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSArray *orders; // @synthesize orders=_orders;
@property(retain, nonatomic) NSArray *trades; // @synthesize trades=_trades;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double profitRate; // @synthesize profitRate=_profitRate;
@property(nonatomic) unsigned long long tradesCount; // @synthesize tradesCount=_tradesCount;
@property(nonatomic) BOOL statisticsDataReceived; // @synthesize statisticsDataReceived=_statisticsDataReceived;
@property(nonatomic) long long profit; // @synthesize profit=_profit;
@property(nonatomic) long long turnover; // @synthesize turnover=_turnover;
@property(nonatomic) long long openMarketVal; // @synthesize openMarketVal=_openMarketVal;
@property(nonatomic) long long openCash; // @synthesize openCash=_openCash;
@property(nonatomic) BOOL dataReceived; // @synthesize dataReceived=_dataReceived;
@property(nonatomic) long long loanMax; // @synthesize loanMax=_loanMax;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) long long positionValue; // @synthesize positionValue=_positionValue;
@property(nonatomic) long long withdrawCash; // @synthesize withdrawCash=_withdrawCash;
@property(nonatomic) long long recoverCash; // @synthesize recoverCash=_recoverCash;
@property(nonatomic) long long freezeCash; // @synthesize freezeCash=_freezeCash;
@property(nonatomic) long long puchasingPower; // @synthesize puchasingPower=_puchasingPower;
@property(nonatomic) long long cash; // @synthesize cash=_cash;
@property(nonatomic) BOOL cleared; // @synthesize cleared=_cleared;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic) BOOL simulation; // @synthesize simulation=_simulation;
@property(nonatomic) int accountState; // @synthesize accountState=_accountState;
@property(nonatomic) BOOL loanSelfDisabled; // @synthesize loanSelfDisabled=_loanSelfDisabled;
@property(nonatomic) BOOL loanSystemDisabled; // @synthesize loanSystemDisabled=_loanSystemDisabled;
@property(nonatomic) BOOL tradeSelfDisabled; // @synthesize tradeSelfDisabled=_tradeSelfDisabled;
@property(nonatomic) BOOL tradeSystemDisabled; // @synthesize tradeSystemDisabled=_tradeSystemDisabled;
@property(nonatomic) unsigned long long intraUserID; // @synthesize intraUserID=_intraUserID;
@property(nonatomic) unsigned int intraAccountID; // @synthesize intraAccountID=_intraAccountID;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(nonatomic) unsigned long long marketType; // @synthesize marketType=_marketType;
@property(copy, nonatomic) NSString *accountTypeString; // @synthesize accountTypeString=_accountTypeString;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
//@property(retain, nonatomic) FLSubAccountBroker *broker; // @synthesize broker=_broker;
@property(readonly, nonatomic) NSString *tradeCipherBase64; // @synthesize tradeCipherBase64=_tradeCipherBase64;
@property BOOL orderUnLocked; // @synthesize orderUnLocked=_orderUnLocked;
@property(retain, nonatomic) NSData *lastOrgCipher; // @synthesize lastOrgCipher=_lastOrgCipher;
@property(retain, nonatomic) NSData *tradeCipher; // @synthesize tradeCipher=_tradeCipher;
@property(copy) NSString *orderPassword; // @synthesize orderPassword=_orderPassword;
@property(nonatomic) BOOL hasOrderSixDigitPassword; // @synthesize hasOrderSixDigitPassword=_hasOrderSixDigitPassword;
@property(nonatomic) BOOL hasOrderPassword; // @synthesize hasOrderPassword=_hasOrderPassword;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createRespectiveOrder;
- (id)createOrderWithStock:(id)arg1 code:(id)arg2 stockManager:(id)arg3;
- (unsigned long long)maxSellForOrder:(id)arg1;
- (unsigned long long)maxBuyForOrder:(id)arg1;
- (BOOL)isEqualToSubAccount:(id)arg1;
- (void)changeUpdateMaxTradeQuantitySequence;
- (void)changeUpdateSequence;
- (id)containedPositionOfStockCode:(id)arg1 withPositionType:(int)arg2;
- (BOOL)containsPositionOfStockCode:(id)arg1 withPositionType:(int)arg2;
- (id)descStringMarket:(BOOL)arg1 type:(BOOL)arg2 card:(BOOL)arg3;
@property(readonly, nonatomic) NSString *accountMarketString;
@property(readonly, nonatomic) NSString *schemaUrlString;
@property(readonly, nonatomic) BOOL opened;
@property(readonly, nonatomic) BOOL opening;
@property(readonly, nonatomic) NSString *accountStateString;
@property(readonly, nonatomic) NSCalendar *calendar;
- (id)init;
@property(readonly, nonatomic) NSString *webAcckeyString;
@property(readonly, nonatomic) NSString *logDescription;
- (id)description;
@end
