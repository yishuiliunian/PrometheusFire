//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSString;

@interface FLUSFinanceIncomeModel : FTCodingModel
{
    NSString *_currency;
    NSString *_typeAndDate;
    NSString *_operatingIncome;
    NSString *_netIncomeIncludingNoncontrollingInterests;
    NSString *_netIncomeCommonStockholders;
    NSString *_basicEPS;
    NSString *_dividendPerShare;
}

@property(copy, nonatomic) NSString *dividendPerShare; // @synthesize dividendPerShare=_dividendPerShare;
@property(copy, nonatomic) NSString *basicEPS; // @synthesize basicEPS=_basicEPS;
@property(copy, nonatomic) NSString *netIncomeCommonStockholders; // @synthesize netIncomeCommonStockholders=_netIncomeCommonStockholders;
@property(copy, nonatomic) NSString *netIncomeIncludingNoncontrollingInterests; // @synthesize netIncomeIncludingNoncontrollingInterests=_netIncomeIncludingNoncontrollingInterests;
@property(copy, nonatomic) NSString *operatingIncome; // @synthesize operatingIncome=_operatingIncome;
@property(copy, nonatomic) NSString *typeAndDate; // @synthesize typeAndDate=_typeAndDate;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
- (void).cxx_destruct;

@end

