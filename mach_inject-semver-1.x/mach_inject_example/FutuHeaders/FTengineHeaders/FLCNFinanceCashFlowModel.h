//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSString;

@interface FLCNFinanceCashFlowModel : FTCodingModel
{
    NSString *_infoSource;
    NSString *_netOperateCashFlow;
    NSString *_netInvestCashFlow;
    NSString *_netFinanceCashFlow;
}

@property(copy, nonatomic) NSString *netFinanceCashFlow; // @synthesize netFinanceCashFlow=_netFinanceCashFlow;
@property(copy, nonatomic) NSString *netInvestCashFlow; // @synthesize netInvestCashFlow=_netInvestCashFlow;
@property(copy, nonatomic) NSString *netOperateCashFlow; // @synthesize netOperateCashFlow=_netOperateCashFlow;
@property(copy, nonatomic) NSString *infoSource; // @synthesize infoSource=_infoSource;
- (void).cxx_destruct;

@end

