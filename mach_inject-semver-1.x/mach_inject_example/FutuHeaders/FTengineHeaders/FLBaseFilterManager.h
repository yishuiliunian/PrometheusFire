//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTEngine/FLManagerProtocol-Protocol.h>

@class NSString;

@interface FLBaseFilterManager : NSObject <FLManagerProtocol>
{
}

+ (void)releaseManager;
+ (id)defaultManager;
- (id)subClassManagerForFilterRequest:(id)arg1;
- (BOOL)fetchFilterModelsWithRequest:(id)arg1 response:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

