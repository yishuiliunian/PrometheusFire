//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTEngine/FLTradeTimeManager-Protocol.h>

@class NSDictionary;

@interface FLQuoteBasicData : NSObject <FLTradeTimeManager>
{
    NSDictionary *_dicLatestTradeTime;
}

@property(retain, nonatomic) NSDictionary *dicLatestTradeTime; // @synthesize dicLatestTradeTime=_dicLatestTradeTime;
- (void).cxx_destruct;
- (void)logLatestTradeTime:(id)arg1 isPush:(BOOL)arg2;
- (void)setSimpleConfig:(id)arg1;
- (id)innerTimeSectionsWithStockMarketID:(unsigned char)arg1 forTradeDayTime:(unsigned int)arg2;
- (unsigned int)latestTradeTimeForStockMarketID:(unsigned char)arg1;
- (void)setTradeDayInnerSection:(id)arg1;
- (void)setLatestTradeTime:(id)arg1 isPush:(BOOL)arg2;

@end

