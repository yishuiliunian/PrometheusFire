//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLPlateSummaryModel : NSObject
{
    unsigned int _riseCount;
    unsigned int _flatCount;
    unsigned int _dropCount;
    unsigned long long _plateID;
}

@property(nonatomic) unsigned int dropCount; // @synthesize dropCount=_dropCount;
@property(nonatomic) unsigned int flatCount; // @synthesize flatCount=_flatCount;
@property(nonatomic) unsigned int riseCount; // @synthesize riseCount=_riseCount;
@property(readonly, nonatomic) unsigned long long plateID; // @synthesize plateID=_plateID;
- (id)description;
- (id)initWithPlateID:(unsigned long long)arg1 riseCount:(unsigned int)arg2 flatCount:(unsigned int)arg3 dropCount:(unsigned int)arg4;

@end

