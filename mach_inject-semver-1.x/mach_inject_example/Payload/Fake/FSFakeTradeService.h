//
//  FSFakeTradeService.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSFakeTradeManager.h"
#import "FSFakeUserTradeData.h"
#import "FSFakeTradeManager.h"
#import "FSFakeBaseTradeManager.h"
#import "FSFakeAMarketTradeManager.h"
@interface FSFakeTradeService : NSObject
+ (instancetype) shareInstance;
@property(readonly, nonatomic) FSFakeUserTradeData *userTradeData; // @synthesize userTradeData=_userTradeData;
//@property(readonly, nonatomic) FLUserManager *userManager; // @synthesize userManager=_userManager;
@property (strong,readonly, nonatomic) FSFakeAMarketTradeManager * cnMarketTradeManager; // @synthesize cnMarketTradeManager=_cnMarketTradeManager;
//@property(readonly, nonatomic) FLSTradeManager *hkSimulationMananger; // @synthesize hkSimulationMananger=_hkSimulationMananger;
//@property(readonly, nonatomic) FLHTradeManager *hkTradeManager; // @synthesize hkTradeManager=_hkTradeManager;
//@property(readonly, nonatomic) FLUTradeManager *usTradeManager; // @synthesize usTradeManager=_usTradeManager;

@end
