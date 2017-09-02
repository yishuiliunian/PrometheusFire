//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseStockFilterRequest.h>

@class FLFilterPairField, NSMutableSet;

@interface FLWarrantConditionFilterRequest : FLBaseStockFilterRequest
{
    unsigned long long _stockId;
    unsigned long long _issuer;
    NSMutableSet *_multipleIssuers;
    unsigned long long _filterType;
    FLFilterPairField *_currentPrice;
    FLFilterPairField *_street;
    FLFilterPairField *_volume;
    FLFilterPairField *_strikePrice;
    FLFilterPairField *_conversion;
    FLFilterPairField *_premium;
    FLFilterPairField *_recoveryPrice;
    FLFilterPairField *_implied;
    FLFilterPairField *_leverageRatio;
    FLFilterPairField *_priceRecoveryRatio;
    FLFilterPairField *_delta;
    unsigned long long _priceRelated;
    unsigned long long _maturity;
    unsigned long long _tradeStatus;
}

+ (id)request;
+ (id)tradeStatusEnumerator;
+ (id)priceRelatedEnumerator;
+ (id)maturityEnumerator;
+ (id)issuerEnumerator;
+ (id)warrantTypeEnumerator;
+ (unsigned long long)maturityTypeForCreateTime:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
+ (unsigned long long)priceRelatedForPopMin:(int)arg1 max:(int)arg2;
+ (id)requestWithProtoBuffer:(struct WarrantList_Req *)arg1;
+ (id)requestWithQuery:(id)arg1;
@property(nonatomic) unsigned long long tradeStatus; // @synthesize tradeStatus=_tradeStatus;
@property(nonatomic) unsigned long long maturity; // @synthesize maturity=_maturity;
@property(nonatomic) unsigned long long priceRelated; // @synthesize priceRelated=_priceRelated;
@property(readonly, nonatomic) FLFilterPairField *delta; // @synthesize delta=_delta;
@property(readonly, nonatomic) FLFilterPairField *priceRecoveryRatio; // @synthesize priceRecoveryRatio=_priceRecoveryRatio;
@property(readonly, nonatomic) FLFilterPairField *leverageRatio; // @synthesize leverageRatio=_leverageRatio;
@property(readonly, nonatomic) FLFilterPairField *implied; // @synthesize implied=_implied;
@property(readonly, nonatomic) FLFilterPairField *recoveryPrice; // @synthesize recoveryPrice=_recoveryPrice;
@property(readonly, nonatomic) FLFilterPairField *premium; // @synthesize premium=_premium;
@property(readonly, nonatomic) FLFilterPairField *conversion; // @synthesize conversion=_conversion;
@property(readonly, nonatomic) FLFilterPairField *strikePrice; // @synthesize strikePrice=_strikePrice;
@property(readonly, nonatomic) FLFilterPairField *volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) FLFilterPairField *street; // @synthesize street=_street;
@property(readonly, nonatomic) FLFilterPairField *currentPrice; // @synthesize currentPrice=_currentPrice;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSMutableSet *multipleIssuers; // @synthesize multipleIssuers=_multipleIssuers;
@property(nonatomic) unsigned long long issuer; // @synthesize issuer=_issuer;
@property(nonatomic) unsigned long long stockId; // @synthesize stockId=_stockId;
- (void).cxx_destruct;
- (unsigned int)filterMarketType;
- (BOOL)supportBMP;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithStockID:(unsigned long long)arg1 issuer:(unsigned long long)arg2 filterType:(unsigned long long)arg3;
- (unsigned int)maturityDateMax;
- (unsigned int)maturityDateMin;
- (int)popMax;
- (int)popMin;

@end
