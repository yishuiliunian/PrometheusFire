//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLNNCFeedCacheMgr, FLNNCFeedListNewMgr, FLNNCFeedOperateMgr, FLNNCFeedsListMgr, FLNNCMsgCacheMgr, FLNNCMsgListMgr;
@protocol FLNNCircleLayoutProtocol;

@interface FLNNCircleService : NSObject
{
    BOOL _enabled;
    FLNNCFeedsListMgr *_feedsListMgr;
    FLNNCFeedListNewMgr *_feedsListNewMgr;
    FLNNCFeedOperateMgr *_feedOperateMgr;
    FLNNCFeedCacheMgr *_feedCacheMgr;
    FLNNCMsgListMgr *_msgListMgr;
    FLNNCMsgCacheMgr *_msgCacheMgr;
    id <FLNNCircleLayoutProtocol> _layoutManager;
}

+ (id)sharedInstance;
+ (id)initWithLayoutManager:(id)arg1;
@property(retain, nonatomic) id <FLNNCircleLayoutProtocol> layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) FLNNCMsgCacheMgr *msgCacheMgr; // @synthesize msgCacheMgr=_msgCacheMgr;
@property(retain, nonatomic) FLNNCMsgListMgr *msgListMgr; // @synthesize msgListMgr=_msgListMgr;
@property(retain, nonatomic) FLNNCFeedCacheMgr *feedCacheMgr; // @synthesize feedCacheMgr=_feedCacheMgr;
@property(retain, nonatomic) FLNNCFeedOperateMgr *feedOperateMgr; // @synthesize feedOperateMgr=_feedOperateMgr;
@property(retain, nonatomic) FLNNCFeedListNewMgr *feedsListNewMgr; // @synthesize feedsListNewMgr=_feedsListNewMgr;
@property(retain, nonatomic) FLNNCFeedsListMgr *feedsListMgr; // @synthesize feedsListMgr=_feedsListMgr;
- (void).cxx_destruct;
- (void)shareContent:(id)arg1 pictureUrl:(id)arg2 actionUrl:(id)arg3 bigImg:(id)arg4 from:(id)arg5 context:(id)arg6;
- (void)syncNNCiricleRights;
- (void)onSessionDidLogin:(id)arg1;
- (id)init;
- (void)dealloc;

@end

