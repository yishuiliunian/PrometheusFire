//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLSNSBaseMgr.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol FLNNCFeedListNewMgrDelegate, FLNNCircleIMServiceProtocol, FLNNCircleLayoutProtocol;

@interface FLNNCFeedListNewMgr : FLSNSBaseMgr
{
    id <FLNNCFeedListNewMgrDelegate> _delegate;
    id <FLNNCircleLayoutProtocol> _layoutManager;
    id <FLNNCircleIMServiceProtocol> _imservice;
    NSMutableArray *_waitingFeedsList;
    NSMutableArray *_waitingCommentsList;
    NSMutableArray *_waitingLikeList;
    NSMutableArray *_waitingEditFeedsList;
    NSMutableArray *_failedFeedsList;
    unsigned long long _currentUserId;
    NSArray *_feedTypes;
    NSMutableDictionary *_feedTypeListDic;
    NSMutableDictionary *_plateVisitTimeDic;
}

@property(retain, nonatomic) NSMutableDictionary *plateVisitTimeDic; // @synthesize plateVisitTimeDic=_plateVisitTimeDic;
@property(retain, nonatomic) NSMutableDictionary *feedTypeListDic; // @synthesize feedTypeListDic=_feedTypeListDic;
@property(retain, nonatomic) NSArray *feedTypes; // @synthesize feedTypes=_feedTypes;
@property(nonatomic) unsigned long long currentUserId; // @synthesize currentUserId=_currentUserId;
@property(retain, nonatomic) NSMutableArray *failedFeedsList; // @synthesize failedFeedsList=_failedFeedsList;
@property(retain, nonatomic) NSMutableArray *waitingEditFeedsList; // @synthesize waitingEditFeedsList=_waitingEditFeedsList;
@property(retain, nonatomic) NSMutableArray *waitingLikeList; // @synthesize waitingLikeList=_waitingLikeList;
@property(retain, nonatomic) NSMutableArray *waitingCommentsList; // @synthesize waitingCommentsList=_waitingCommentsList;
@property(retain, nonatomic) NSMutableArray *waitingFeedsList; // @synthesize waitingFeedsList=_waitingFeedsList;
@property(nonatomic) __weak id <FLNNCircleIMServiceProtocol> imservice; // @synthesize imservice=_imservice;
@property(retain, nonatomic) id <FLNNCircleLayoutProtocol> layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) __weak id <FLNNCFeedListNewMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getSendFailedStockFeedsByStockId:(unsigned long long)arg1;
- (id)getSendFailedFeedsList;
- (unsigned long long)getSubID:(int)arg1 fromPlateID:(unsigned int)arg2 stockID:(unsigned long long)arg3 ownerID:(unsigned long long)arg4;
- (void)setListSequence:(id)arg1 relationType:(int)arg2 andPlateId:(unsigned int)arg3;
- (id)listSequeceFrom:(int)arg1 plateId:(unsigned int)arg2;
- (id)feedCacheModelKey:(int)arg1;
- (id)plateVisitTimeKey:(int)arg1 plateID:(unsigned int)arg2;
- (void)layoutDetailFeed:(id)arg1;
- (void)layoutListFeed:(id)arg1;
- (void)layoutListFeeds:(id)arg1;
- (void)updateFeedModel:(id)arg1 userId:(unsigned long long)arg2 disPlayName:(id)arg3;
- (void)updateComment:(id)arg1 userId:(unsigned long long)arg2 disPlayName:(id)arg3;
- (void)handleDisplayNameUpdate:(id)arg1;
- (void)languageChanged:(id)arg1;
- (void)handleDynamicFontChanged:(id)arg1;
- (int)fetchSerRedPointDataByRedPointType:(unsigned long long)arg1 context:(id)arg2;
- (void)nncPushRedPointDecodeMsgPush:(struct util_byteios_net *)arg1;
- (void)updateFeedListRedPointSequence:(unsigned long long)arg1 relationType:(int)arg2 stock:(id)arg3;
- (void)resetPlateVisitTime;
- (void)updateFeedListVisitTimeToNowByFeedType:(int)arg1 plateID:(unsigned int)arg2;
- (void)setFeedListType:(int)arg1 plateID:(unsigned int)arg2 visitTime:(double)arg3;
- (void)setFeedListVisitTime:(double)arg1 relationType:(int)arg2;
- (BOOL)shouldAutoRefresh:(int)arg1 plateID:(unsigned int)arg2;
- (BOOL)clearLocalFeedCacheWithUserId:(unsigned long long)arg1;
- (void)checkAndUpdateDraftLikeWithFeedModel:(id)arg1;
- (void)checkAndUpdateDraftCommentWithFeedModel:(id)arg1;
- (void)checkAndUpdateDraftFeedsWithFeedModel:(id)arg1;
- (void)loadLoginUser:(unsigned long long)arg1 localCacheModelType:(int)arg2 andFeedsOwnerID:(unsigned long long)arg3;
- (void)updateLocalCacheModelWithStock:(id)arg1 plateID:(unsigned int)arg2 feedList:(id)arg3 response:(struct NNCFeedsListRsp *)arg4 isAppending:(BOOL)arg5 relationType:(int)arg6;
- (void)updateCacheWithFeed:(id)arg1;
- (void)syncCacheWithPushedFeedsList:(id)arg1;
- (void)updateDraftCommentWithPostResult:(id)arg1;
- (void)updateDraftFeeds:(id)arg1 withPostResult:(id)arg2;
- (void)updateFeedStatusFrom:(id)arg1 withFeedModel:(id)arg2;
- (void)doUpdateFeedStatus:(id)arg1 withOtherFeed:(id)arg2;
- (void)removeLikeTask:(id)arg1;
- (void)likeLocalFeedWithTask:(id)arg1;
- (void)operateLocalComment:(id)arg1 feedModel:(id)arg2 isAdd:(BOOL)arg3;
- (void)addLocalComment:(id)arg1 toFeedModel:(id)arg2;
- (void)deleteLocalComment:(id)arg1 fromFeedModel:(id)arg2;
- (void)replaceLocalFeed:(id)arg1;
- (void)addLocalFeed:(id)arg1;
- (void)deleteLocalFeed:(id)arg1;
- (int)fetchFeedDetailWithFeedModel:(id)arg1 context:(id)arg2;
- (int)fetchFeedListWithContactID:(unsigned long long)arg1 relationType:(int)arg2 plateID:(unsigned int)arg3 refreshType:(int)arg4 feedsOwnerID:(unsigned long long)arg5 stock:(id)arg6 limitCount:(unsigned int)arg7;
- (id)getLocalFeedModelWithFeedId:(unsigned long long)arg1;
- (id)getLocalCacheModel:(int)arg1 subID:(unsigned long long)arg2;
- (void)reloadDataForLoginUser:(unsigned long long)arg1;
- (id)init;

@end
