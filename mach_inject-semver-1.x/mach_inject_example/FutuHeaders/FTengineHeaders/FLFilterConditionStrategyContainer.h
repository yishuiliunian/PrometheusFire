//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class NSArray, NSMutableArray, NSRecursiveLock;
@protocol FLFilterConditionStrategyContainerDelegate;

@interface FLFilterConditionStrategyContainer : FTCodingModel
{
    id <FLFilterConditionStrategyContainerDelegate> _delegate;
    NSRecursiveLock *_globalLock;
    NSMutableArray *_filterStrategies;
}

@property(retain, nonatomic) NSMutableArray *filterStrategies; // @synthesize filterStrategies=_filterStrategies;
@property(retain, nonatomic) NSRecursiveLock *globalLock; // @synthesize globalLock=_globalLock;
@property(nonatomic) __weak id <FLFilterConditionStrategyContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *allStrategies;
@property(readonly, copy, nonatomic) NSArray *warrantFilterStrategies;
@property(readonly, copy, nonatomic) NSArray *stockFilterStrategies;
- (id)strategiesForClass:(Class)arg1;
- (BOOL)isExistedStrategy:(id)arg1 index:(long long *)arg2;
- (BOOL)isExistedStrategy:(id)arg1;
- (void)delegateWithAction:(unsigned long long)arg1 strategy:(id)arg2;
- (void)postNotificationWithAction:(unsigned long long)arg1 strategy:(id)arg2;
- (void)removeAllStrategies;
- (BOOL)cover:(id)arg1;
- (BOOL)contain:(id)arg1;
- (id)query:(id)arg1;
- (BOOL)update:(id)arg1;
- (BOOL)remove:(id)arg1;
- (BOOL)add:(id)arg1;
- (id)init;

@end

