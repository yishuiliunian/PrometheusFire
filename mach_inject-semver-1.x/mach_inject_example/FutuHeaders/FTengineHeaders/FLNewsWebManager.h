//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLNewsBaseManager.h>

@class FLWebAPIClient;

@interface FLNewsWebManager : FLNewsBaseManager
{
    FLWebAPIClient *_webClient;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FLWebAPIClient *webClient; // @synthesize webClient=_webClient;
- (void).cxx_destruct;
- (void)clearNewsStorage;
- (id)newsModelWithDictionary:(id)arg1;
- (BOOL)fetchFinanceCalendarWithFetchModel:(id)arg1 withResponse:(CDUnknownBlockType)arg2;
- (BOOL)fetchFinanceCalendarTypesWithResponse:(CDUnknownBlockType)arg1;
- (BOOL)getUnreadPushNewsNumWith:(id)arg1 withTime:(long long)arg2 withResponse:(CDUnknownBlockType)arg3;
- (BOOL)fetchNewsListWithFetchModel:(id)arg1 withResponse:(CDUnknownBlockType)arg2;

@end

