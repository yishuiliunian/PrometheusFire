//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSString;

@interface FLCNFinanceKeyIndexModel : FTCodingModel
{
    NSString *_infoSource;
    NSString *_basicEPS;
    NSString *_netAssetPS;
    NSString *_accumulationFundPS;
    NSString *_undividedProfitPS;
    NSString *_cashFlowPS;
    NSString *_ROE;
    NSString *_ROA;
}

@property(copy, nonatomic) NSString *ROA; // @synthesize ROA=_ROA;
@property(copy, nonatomic) NSString *ROE; // @synthesize ROE=_ROE;
@property(copy, nonatomic) NSString *cashFlowPS; // @synthesize cashFlowPS=_cashFlowPS;
@property(copy, nonatomic) NSString *undividedProfitPS; // @synthesize undividedProfitPS=_undividedProfitPS;
@property(copy, nonatomic) NSString *accumulationFundPS; // @synthesize accumulationFundPS=_accumulationFundPS;
@property(copy, nonatomic) NSString *netAssetPS; // @synthesize netAssetPS=_netAssetPS;
@property(copy, nonatomic) NSString *basicEPS; // @synthesize basicEPS=_basicEPS;
@property(copy, nonatomic) NSString *infoSource; // @synthesize infoSource=_infoSource;
- (void).cxx_destruct;

@end

