//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

#import <FTEngine/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface FLNNCFeedElemOriginal : FTCodingModel <NSCopying>
{
    NSArray *_orgRichTextList;
    NSArray *_orgPictureList;
    NSString *_orgUrl;
}

@property(retain, nonatomic) NSString *orgUrl; // @synthesize orgUrl=_orgUrl;
@property(retain, nonatomic) NSArray *orgPictureList; // @synthesize orgPictureList=_orgPictureList;
@property(retain, nonatomic) NSArray *orgRichTextList; // @synthesize orgRichTextList=_orgRichTextList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
