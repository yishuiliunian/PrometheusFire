//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLPosition.h>

@class NSString;

@interface FLUPosition : FLPosition
{
    NSString *_positionID;
    long long _positionType;
}

@property(nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(copy, nonatomic) NSString *positionID; // @synthesize positionID=_positionID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)decodeWithDictionary:(id)arg1;

@end

