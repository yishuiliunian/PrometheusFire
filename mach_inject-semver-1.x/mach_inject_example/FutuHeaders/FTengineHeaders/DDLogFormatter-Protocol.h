//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/NSObject-Protocol.h>

@class DDLogMessage, NSObject, NSString;
@protocol DDLogger, OS_dispatch_queue;

@protocol DDLogFormatter <NSObject>
- (NSString *)formatLogMessage:(DDLogMessage *)arg1;

@optional
- (void)willRemoveFromLogger:(id <DDLogger>)arg1;
- (void)didAddToLogger:(id <DDLogger>)arg1 inQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)didAddToLogger:(id <DDLogger>)arg1;
@end
