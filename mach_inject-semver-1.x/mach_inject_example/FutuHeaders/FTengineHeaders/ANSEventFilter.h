//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANSEventFilter : NSObject
{
}

+ (int)javaHashCodeForString:(id)arg1;
- (BOOL)shouldDiscardEventWithInstallationID:(id)arg1 forSamplingFactor:(long long)arg2;
- (BOOL)samplingEnabledForEventType:(id)arg1;
- (BOOL)shouldDiscardEvent:(id)arg1 betaToken:(id)arg2 installationID:(id)arg3 withFactor:(long long)arg4;

@end
