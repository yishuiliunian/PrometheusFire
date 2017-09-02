//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLStockObject.h>

@class NSString;

@interface FLLinkageStockItem : FLStockObject
{
    unsigned char _marketID;
    BOOL _supportMargin;
    BOOL _supportShortSell;
    unsigned int _lastClosePrice;
    unsigned int _price;
    int _change;
    float _percent;
    unsigned int _marginRatio;
    unsigned int _shortSellRatio;
    NSString *_name;
    NSString *_code;
    NSString *_percentString;
    unsigned long long _stockMarketType;
}

@property(nonatomic) unsigned long long stockMarketType; // @synthesize stockMarketType=_stockMarketType;
@property(nonatomic) unsigned int shortSellRatio; // @synthesize shortSellRatio=_shortSellRatio;
@property(nonatomic) BOOL supportShortSell; // @synthesize supportShortSell=_supportShortSell;
@property(nonatomic) unsigned int marginRatio; // @synthesize marginRatio=_marginRatio;
@property(nonatomic) BOOL supportMargin; // @synthesize supportMargin=_supportMargin;
@property(nonatomic) unsigned char marketID; // @synthesize marketID=_marketID;
@property(retain, nonatomic) NSString *percentString; // @synthesize percentString=_percentString;
@property(nonatomic) float percent; // @synthesize percent=_percent;
@property(nonatomic) int change; // @synthesize change=_change;
@property(nonatomic) unsigned int price; // @synthesize price=_price;
@property(nonatomic) unsigned int lastClosePrice; // @synthesize lastClosePrice=_lastClosePrice;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

