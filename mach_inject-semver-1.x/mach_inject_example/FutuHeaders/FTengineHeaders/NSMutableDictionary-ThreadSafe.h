//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSArray;

@interface NSMutableDictionary (ThreadSafe)
@property(readonly, nonatomic) NSArray *safeAllValues;
- (void)safeRemoveAllObjects;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (id)safeObjectForKey:(id)arg1;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)setSafeOperationQueue:(id)arg1;
- (id)safeOperationQueue;
@end

