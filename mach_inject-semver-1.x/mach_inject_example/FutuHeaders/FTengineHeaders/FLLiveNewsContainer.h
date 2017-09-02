//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class FLLiveNewsModel, NSMutableArray;

@interface FLLiveNewsContainer : FTCodingModel
{
    NSMutableArray *_array;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)localHistoryPushNewsArray;
- (BOOL)savePushNews:(id)arg1;
- (id)localHistoryNewsArray;
- (BOOL)saveLiveNews:(id)arg1;
- (id)array;
@property(readonly, nonatomic) FLLiveNewsModel *newestNews;
@property(readonly, nonatomic) FLLiveNewsModel *oldestNews;
@property(readonly, nonatomic) unsigned long long unitsCount;
@property(readonly, nonatomic) unsigned long long newsCount;
- (void)cleanAllLiveNews;
- (id)liveNewsModelWithIndex:(unsigned long long)arg1 viewType:(unsigned long long *)arg2;
- (void)addLiveNewsArray:(id)arg1;
- (void)addLiveNews:(id)arg1;
- (id)init;

@end
