//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLBaseManager : NSObject
{
}

- (void)innerBlockSelector:(id)arg1;
- (void)performBlockInMainThreadAsSoonAsPossible:(CDUnknownBlockType)arg1;
- (void)performBlockInMainThread:(CDUnknownBlockType)arg1;
- (void)postNotificationNameInGCDMainQueue:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationNameInOperationMainQueue:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

@end

