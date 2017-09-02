//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLPosition.h>

#import <FTEngine/FLATradeModel-Protocol.h>

@class NSString;

@interface FLAPosition : FLPosition <FLATradeModel>
{
    BOOL _disableTradeFlag;
    int _tradeMarketType;
    NSString *_shareholderId;
    NSString *_positionID;
}

@property(copy, nonatomic) NSString *positionID; // @synthesize positionID=_positionID;
@property(nonatomic) BOOL disableTradeFlag; // @synthesize disableTradeFlag=_disableTradeFlag;
@property(copy, nonatomic) NSString *shareholderId; // @synthesize shareholderId=_shareholderId;
@property(nonatomic) int tradeMarketType; // @synthesize tradeMarketType=_tradeMarketType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)decodeWithAccPosition:(void *)arg1;
- (void)decodeWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

