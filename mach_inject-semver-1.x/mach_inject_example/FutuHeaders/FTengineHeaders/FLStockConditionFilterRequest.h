//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseStockFilterRequest.h>

@class FLFilterPairField;

@interface FLStockConditionFilterRequest : FLBaseStockFilterRequest
{
    BOOL _supportMargin;
    BOOL _supportShortSell;
    int _sortType;
    unsigned int _marketType;
    unsigned long long _plateId;
    FLFilterPairField *_turnoverRate;
    FLFilterPairField *_amplitude;
    FLFilterPairField *_quantityRelativeRatio;
    FLFilterPairField *_commissionRatio;
    FLFilterPairField *_stockPrice;
    FLFilterPairField *_stockUnitPrice;
    FLFilterPairField *_marketValue;
    FLFilterPairField *_priceEarningsRatio;
    FLFilterPairField *_priceChangeRatio;
    FLFilterPairField *_turnover;
    FLFilterPairField *_volume;
    FLFilterPairField *_marginRatio;
    FLFilterPairField *_shortSellFeeRatio;
}

+ (id)request;
+ (id)requestWithProtoBuffer:(struct StockCondition_Req *)arg1;
@property(readonly, nonatomic) FLFilterPairField *shortSellFeeRatio; // @synthesize shortSellFeeRatio=_shortSellFeeRatio;
@property(nonatomic) BOOL supportShortSell; // @synthesize supportShortSell=_supportShortSell;
@property(readonly, nonatomic) FLFilterPairField *marginRatio; // @synthesize marginRatio=_marginRatio;
@property(nonatomic) BOOL supportMargin; // @synthesize supportMargin=_supportMargin;
@property(readonly, nonatomic) FLFilterPairField *volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) FLFilterPairField *turnover; // @synthesize turnover=_turnover;
@property(readonly, nonatomic) FLFilterPairField *priceChangeRatio; // @synthesize priceChangeRatio=_priceChangeRatio;
@property(readonly, nonatomic) FLFilterPairField *priceEarningsRatio; // @synthesize priceEarningsRatio=_priceEarningsRatio;
@property(readonly, nonatomic) FLFilterPairField *marketValue; // @synthesize marketValue=_marketValue;
@property(readonly, nonatomic) FLFilterPairField *stockUnitPrice; // @synthesize stockUnitPrice=_stockUnitPrice;
@property(readonly, nonatomic) FLFilterPairField *stockPrice; // @synthesize stockPrice=_stockPrice;
@property(readonly, nonatomic) FLFilterPairField *commissionRatio; // @synthesize commissionRatio=_commissionRatio;
@property(readonly, nonatomic) FLFilterPairField *quantityRelativeRatio; // @synthesize quantityRelativeRatio=_quantityRelativeRatio;
@property(readonly, nonatomic) FLFilterPairField *amplitude; // @synthesize amplitude=_amplitude;
@property(readonly, nonatomic) FLFilterPairField *turnoverRate; // @synthesize turnoverRate=_turnoverRate;
@property(nonatomic) unsigned long long plateId; // @synthesize plateId=_plateId;
@property(nonatomic) unsigned int marketType; // @synthesize marketType=_marketType;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)filterMarketType;
- (BOOL)supportBMP;
- (id)description;
- (id)init;
- (id)initWithMarketType:(unsigned int)arg1 sortType:(int)arg2;
- (void)resetDataFields;
@property(readonly, nonatomic) unsigned char reqMarketType;

@end

