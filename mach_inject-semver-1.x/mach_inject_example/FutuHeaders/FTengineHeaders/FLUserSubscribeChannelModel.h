//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSString;

@interface FLUserSubscribeChannelModel : FTCodingModel
{
    int _channelId;
    NSString *_channelName;
}

@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(nonatomic) int channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;

@end
