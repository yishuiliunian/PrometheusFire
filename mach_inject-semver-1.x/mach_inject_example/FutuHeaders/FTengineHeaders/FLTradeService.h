//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLAMarketTradeManager, FLHTradeManager, FLSTradeManager, FLUTradeManager, FLUserManager, FLUserTradeData;

@interface FLTradeService : NSObject
{
    FLUTradeManager *_usTradeManager;
    FLHTradeManager *_hkTradeManager;
    FLSTradeManager *_hkSimulationMananger;
    FLAMarketTradeManager *_cnMarketTradeManager;
    FLUserManager *_userManager;
    FLUserTradeData *_userTradeData;
}

+ (id)shareInstance;
@property(readonly, nonatomic) FLUserTradeData *userTradeData; // @synthesize userTradeData=_userTradeData;
@property(readonly, nonatomic) FLUserManager *userManager; // @synthesize userManager=_userManager;
@property(readonly, nonatomic) FLAMarketTradeManager *cnMarketTradeManager; // @synthesize cnMarketTradeManager=_cnMarketTradeManager;
@property(readonly, nonatomic) FLSTradeManager *hkSimulationMananger; // @synthesize hkSimulationMananger=_hkSimulationMananger;
@property(readonly, nonatomic) FLHTradeManager *hkTradeManager; // @synthesize hkTradeManager=_hkTradeManager;
@property(readonly, nonatomic) FLUTradeManager *usTradeManager; // @synthesize usTradeManager=_usTradeManager;
- (void).cxx_destruct;
- (id)tradeManagerForSubAccount:(id)arg1;
- (id)init;

@end

