//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSString;

@interface FLCompanyInfoModel : FTCodingModel
{
    NSString *_companyNameCN;
    NSString *_chairman;
    NSString *_companyNameEN;
    NSString *_country;
    NSString *_listDate;
    NSString *_issuePrice;
    NSString *_issueShares;
    NSString *_region;
    NSString *_business;
}

@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *issueShares; // @synthesize issueShares=_issueShares;
@property(copy, nonatomic) NSString *issuePrice; // @synthesize issuePrice=_issuePrice;
@property(copy, nonatomic) NSString *listDate; // @synthesize listDate=_listDate;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *companyNameEN; // @synthesize companyNameEN=_companyNameEN;
@property(copy, nonatomic) NSString *chairman; // @synthesize chairman=_chairman;
@property(copy, nonatomic) NSString *companyNameCN; // @synthesize companyNameCN=_companyNameCN;
- (void).cxx_destruct;

@end

