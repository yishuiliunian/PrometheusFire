//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

#import <FTEngine/NSCopying-Protocol.h>

@class FLNNCFeedElemPicture, NSString;

@interface FLNNCFeedElemRichText : FTCodingModel <NSCopying>
{
    int _type;
    unsigned int _emotionId;
    unsigned int _marketId;
    NSString *_text;
    unsigned long long _userId;
    NSString *_nickName;
    NSString *_avatorUrl;
    NSString *_stockCode;
    NSString *_stockName;
    FLNNCFeedElemPicture *_pictureInfo;
}

@property(retain, nonatomic) FLNNCFeedElemPicture *pictureInfo; // @synthesize pictureInfo=_pictureInfo;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(nonatomic) unsigned int marketId; // @synthesize marketId=_marketId;
@property(retain, nonatomic) NSString *avatorUrl; // @synthesize avatorUrl=_avatorUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned int emotionId; // @synthesize emotionId=_emotionId;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

