//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLStockSimple.h>

@class NSDate, NSString;

@interface FLWarrantSimple : FLStockSimple
{
    int _type;
    int _status;
    int _delta;
    unsigned int _impliedVolatility;
    unsigned int _priceStrike;
    unsigned int _conversionRatio;
    unsigned int _conversionPrice;
    unsigned int _priceRecovery;
    int _priceRecoveryRatio;
    float _streetRatio;
    int _premium;
    int _realGearing;
    unsigned int _strikeCost;
    int _priceRelated;
    int _gearing;
    int _warrantScore;
    unsigned int _stockOwnerPrice;
    unsigned long long _referStockID;
    NSString *_englishName;
    NSString *_simplifiedName;
    NSString *_traditionalName;
    NSDate *_maturityDate;
    NSDate *_settleDate;
    NSString *_issuerName;
    unsigned long long _issueSize;
}

@property(nonatomic) unsigned int stockOwnerPrice; // @synthesize stockOwnerPrice=_stockOwnerPrice;
@property(nonatomic) unsigned long long issueSize; // @synthesize issueSize=_issueSize;
@property(copy, nonatomic) NSString *issuerName; // @synthesize issuerName=_issuerName;
@property(nonatomic) int warrantScore; // @synthesize warrantScore=_warrantScore;
@property(nonatomic) int gearing; // @synthesize gearing=_gearing;
@property(nonatomic) int priceRelated; // @synthesize priceRelated=_priceRelated;
@property(nonatomic) unsigned int strikeCost; // @synthesize strikeCost=_strikeCost;
@property(nonatomic) int realGearing; // @synthesize realGearing=_realGearing;
@property(nonatomic) int premium; // @synthesize premium=_premium;
@property(nonatomic) float streetRatio; // @synthesize streetRatio=_streetRatio;
@property(nonatomic) int priceRecoveryRatio; // @synthesize priceRecoveryRatio=_priceRecoveryRatio;
@property(nonatomic) unsigned int priceRecovery; // @synthesize priceRecovery=_priceRecovery;
@property(nonatomic) unsigned int conversionPrice; // @synthesize conversionPrice=_conversionPrice;
@property(nonatomic) unsigned int conversionRatio; // @synthesize conversionRatio=_conversionRatio;
@property(copy, nonatomic) NSDate *settleDate; // @synthesize settleDate=_settleDate;
@property(copy) NSDate *maturityDate; // @synthesize maturityDate=_maturityDate;
@property(nonatomic) unsigned int priceStrike; // @synthesize priceStrike=_priceStrike;
@property(nonatomic) unsigned int impliedVolatility; // @synthesize impliedVolatility=_impliedVolatility;
@property(nonatomic) int delta; // @synthesize delta=_delta;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *traditionalName; // @synthesize traditionalName=_traditionalName;
@property(copy, nonatomic) NSString *simplifiedName; // @synthesize simplifiedName=_simplifiedName;
@property(copy, nonatomic) NSString *englishName; // @synthesize englishName=_englishName;
@property(nonatomic) unsigned long long referStockID; // @synthesize referStockID=_referStockID;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long priceRecoveryPercent;
@property(readonly, nonatomic) long long priceChangeValue;
- (void)calculateValues:(id)arg1 includeDelta:(BOOL)arg2;

@end

