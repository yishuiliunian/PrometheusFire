//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

#import <FTEngine/NSCopying-Protocol.h>

@class NSArray;

@interface FLNNCMsgContentModel : FTCodingModel <NSCopying>
{
    int _msgType;
    NSArray *_richTextList;
}

@property(retain, nonatomic) NSArray *richTextList; // @synthesize richTextList=_richTextList;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
