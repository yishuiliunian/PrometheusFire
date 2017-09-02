//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTEngine/FLStockAdapterCoding-Protocol.h>

@class FLUserData, FLWatchGroup, NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface FLWatchStockContainer : NSObject <FLStockAdapterCoding>
{
    BOOL _pushWatchGroupNotifications;
    BOOL _pushWatchStockNotifications;
    FLUserData *_user;
    unsigned long long _groupSequence;
    NSRecursiveLock *_globalLock;
    NSMutableArray *_reservedWatchGroups;
    FLWatchGroup *_reservedPositionGroup;
    NSMutableArray *_customWatchGroups;
    NSMutableArray *_watchGroupIDs;
}

+ (id)containerWithOldVersionDataSource:(id)arg1;
@property(retain, nonatomic) NSMutableArray *watchGroupIDs; // @synthesize watchGroupIDs=_watchGroupIDs;
@property(retain, nonatomic) NSMutableArray *customWatchGroups; // @synthesize customWatchGroups=_customWatchGroups;
@property(retain, nonatomic) FLWatchGroup *reservedPositionGroup; // @synthesize reservedPositionGroup=_reservedPositionGroup;
@property(retain, nonatomic) NSMutableArray *reservedWatchGroups; // @synthesize reservedWatchGroups=_reservedWatchGroups;
@property(retain, nonatomic) NSRecursiveLock *globalLock; // @synthesize globalLock=_globalLock;
@property(nonatomic) BOOL pushWatchStockNotifications; // @synthesize pushWatchStockNotifications=_pushWatchStockNotifications;
@property(nonatomic) BOOL pushWatchGroupNotifications; // @synthesize pushWatchGroupNotifications=_pushWatchGroupNotifications;
@property(nonatomic) unsigned long long groupSequence; // @synthesize groupSequence=_groupSequence;
@property(nonatomic) __weak FLUserData *user; // @synthesize user=_user;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL syncEnabled;
@property(readonly, nonatomic) FLWatchGroup *reservedDefaultGroup;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)postNotificationWithStocks:(id)arg1 group:(id)arg2 action:(unsigned long long)arg3;
- (void)postNotificationWithGroups:(id)arg1 action:(unsigned long long)arg2;
- (id)customWatchGroupWithID:(unsigned int)arg1;
- (id)reservedWatchGroupWithID:(unsigned int)arg1;
- (id)watchGroupWithID:(unsigned int)arg1;
- (id)watchGroupForChangedStocksWithGroup:(id)arg1;
- (id)convertKeyToAdapterKey:(id)arg1;
- (BOOL)decodeWithDictionary:(id)arg1;
- (id)encode;
- (BOOL)coverStocks:(id)arg1 forGroup:(id)arg2;
- (BOOL)coverGroups:(id)arg1;
- (BOOL)rename:(id)arg1 forGroup:(id)arg2;
- (id)sortStocksWithOrderedStocks:(id)arg1 forGroup:(id)arg2;
- (id)sortGroupsWithOrderedGroups:(id)arg1;
- (id)removeStocks:(id)arg1;
- (id)removeStocks:(id)arg1 forGroup:(id)arg2;
- (BOOL)removeGroup:(id)arg1;
- (id)addStocks:(id)arg1;
- (id)addStocks:(id)arg1 forGroup:(id)arg2 append:(BOOL)arg3;
- (id)addStocks:(id)arg1 forGroup:(id)arg2;
- (BOOL)addGroup:(id)arg1;
- (BOOL)addGroupID:(unsigned int)arg1;
- (BOOL)containStocks:(id)arg1;
- (BOOL)contain:(id)arg1;
- (long long)indexOfWatchStock:(id)arg1;
@property(readonly, copy, nonatomic) FLWatchGroup *positionGroup;
@property(readonly, copy, nonatomic) FLWatchGroup *defaultGroup;
@property(readonly, copy, nonatomic) NSArray *pubWatchGroupIDs;
@property(readonly, copy, nonatomic) NSArray *watchStocks;
@property(readonly, copy, nonatomic) NSArray *reservedGroups;
@property(readonly, copy, nonatomic) NSArray *customGroups;
@property(readonly, copy, nonatomic) FLWatchGroup *usOptionGroup;
@property(readonly, copy, nonatomic) NSArray *marketGroups;
- (id)groupsContainStock:(id)arg1;
- (id)groupForID:(unsigned int)arg1;
- (id)groupForMarketType:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
