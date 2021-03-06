//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FLPlateStocksFetcher : NSObject
{
    NSMutableDictionary *_mtDicSubStockID;
}

+ (BOOL)isPlateSetWithStockID:(unsigned long long)arg1;
+ (void)releaseInstance;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *mtDicSubStockID; // @synthesize mtDicSubStockID=_mtDicSubStockID;
- (void).cxx_destruct;
- (BOOL)fetchOwerPlatesOfStocks:(unsigned long long)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (BOOL)fetchStockIDsForPlateID:(unsigned long long)arg1 sortType:(int)arg2 ascend:(BOOL)arg3 range:(struct _NSRange)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (BOOL)fetchStocksForPlateID:(unsigned long long)arg1 sortType:(int)arg2 ascend:(BOOL)arg3 range:(struct _NSRange)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (BOOL)fetchPlatesForPlateSetId:(unsigned long long)arg1 marketType:(unsigned long long)arg2 sortType:(int)arg3 ascend:(BOOL)arg4 range:(struct _NSRange)arg5 resultBlock:(CDUnknownBlockType)arg6;
- (BOOL)fetchLinkagePlateIDsWithPlateID:(unsigned long long)arg1 sortKeyPath:(id)arg2 ascend:(BOOL)arg3 range:(struct _NSRange)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (BOOL)fetchLinkagePlateIDsWithSortKeyPath:(id)arg1 ascend:(BOOL)arg2 range:(struct _NSRange)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (BOOL)fetchLinkagePlateWithStockID:(unsigned long long)arg1 SortKeyPath:(id)arg2 ascend:(BOOL)arg3 range:(struct _NSRange)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (void)decodeLinkageStockItem:(id)arg1 elemData:(struct Plate_Elem_Data)arg2;
- (void)fetchSubStockIDArrayForPlateID:(unsigned long long)arg1 forceUpdate:(BOOL)arg2;
- (id)subStockIDArrayForPlateID:(unsigned long long)arg1;
- (void)saveSubStockIDToFile;
- (void)loadSubStockIDFromFile;
- (id)subStockIDFilePathInBundle;
- (id)subStockIDFilePath;
- (id)init;
- (id)plateSummaryModelWithPBModel:(struct PlateSummary)arg1;
- (BOOL)fetchPlateSummaryWithPlateID:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

