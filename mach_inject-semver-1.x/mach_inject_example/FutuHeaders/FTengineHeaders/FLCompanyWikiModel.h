//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSString;

@interface FLCompanyWikiModel : FTCodingModel
{
    NSString *_companyName;
    NSString *_companyDesc;
    NSString *_companyLogoUrlStr;
    NSString *_wikiUrlStr;
}

@property(copy, nonatomic) NSString *wikiUrlStr; // @synthesize wikiUrlStr=_wikiUrlStr;
@property(copy, nonatomic) NSString *companyLogoUrlStr; // @synthesize companyLogoUrlStr=_companyLogoUrlStr;
@property(copy, nonatomic) NSString *companyDesc; // @synthesize companyDesc=_companyDesc;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
- (void).cxx_destruct;

@end

