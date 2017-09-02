//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/ANSEvent.h>

@class NSDate;

@interface ANSCrashEvent : ANSEvent
{
    NSDate *_crashTimestamp;
    unsigned long long _crashState;
}

@property(nonatomic) unsigned long long crashState; // @synthesize crashState=_crashState;
@property(retain, nonatomic) NSDate *crashTimestamp; // @synthesize crashTimestamp=_crashTimestamp;
- (void).cxx_destruct;
- (id)payloadStringForCrashState:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)timestamp;
- (id)name;
- (id)initWithTimestamp:(id)arg1 crashState:(unsigned long long)arg2;

@end

