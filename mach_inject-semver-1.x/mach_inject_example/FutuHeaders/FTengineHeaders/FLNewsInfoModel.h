//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSString;

@interface FLNewsInfoModel : FTCodingModel
{
    BOOL _hasMore;
    int _sectionType;
    NSString *_nnNewsId;
    NSString *_title;
    NSString *_imageUrl;
    NSString *_time;
    long long _timeStamp;
    NSString *_urlStr;
    NSString *_abstract;
    NSString *_marketId;
    NSString *_stockCode;
    NSString *_stockName;
    unsigned long long _tagClass;
    NSString *_tagText;
    NSString *_bannerUrl;
}

@property(copy, nonatomic) NSString *bannerUrl; // @synthesize bannerUrl=_bannerUrl;
@property(nonatomic) BOOL hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(nonatomic) unsigned long long tagClass; // @synthesize tagClass=_tagClass;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(retain, nonatomic) NSString *marketId; // @synthesize marketId=_marketId;
@property(retain, nonatomic) NSString *abstract; // @synthesize abstract=_abstract;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *nnNewsId; // @synthesize nnNewsId=_nnNewsId;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
- (void).cxx_destruct;
- (id)description;

@end

