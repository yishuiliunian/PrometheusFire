//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseManager.h>

#import <FTEngine/FLStockAdapterDataSource-Protocol.h>
#import <FTEngine/FLStockListDownloadTaskDelegate-Protocol.h>

@class FLConfigFileDownloadTask, FLSpreadsDownloadTask, FLStockListDownloadTask, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface FLStockManager : FLBaseManager <FLStockListDownloadTaskDelegate, FLStockAdapterDataSource>
{
    NSMutableDictionary *_codeStocks;
    NSMutableDictionary *_idStocks;
    NSMutableArray *_watchStocks;
    unsigned long long _stocklistSequence;
    FLSpreadsDownloadTask *_spreadsDownloadTask;
    FLConfigFileDownloadTask *_configFileDownloadTask;
    FLStockListDownloadTask *_stockListDownloadTask;
    NSOperationQueue *_stockSearchQueue;
    BOOL _fetchingStockHotList;
}

- (void).cxx_destruct;
- (void)handleStockDBWriteError:(id)arg1 scenes:(int)arg2;
- (void)initWarrantStockList;
- (long long)relevantWarrantsCountForStock:(id)arg1 warrantType:(int)arg2;
- (void)fetchStockHotList;
- (id)createStockWithID:(id)arg1 advisoryCode:(id)arg2 cache:(BOOL)arg3;
- (id)reverseTransformedValue:(id)arg1 forKey:(id)arg2 adapter:(id)arg3;
- (id)transformedValue:(id)arg1 forKey:(id)arg2 adapter:(id)arg3;
- (void)cleanCachedUSOptionStock;
- (void)saveUSOptionToDB:(id)arg1;
- (void)updateUSOption:(id)arg1 withResultSet:(id)arg2;
- (void)updateUSOption:(id)arg1 withOptionInfo:(id)arg2;
- (void)saveStockToDB:(id)arg1;
- (void)onNetworkStatusChanged:(id)arg1;
- (void)onShouldCheckToUpdateStockList:(id)arg1;
- (void)stockListDownloadTaskDidFinish;
- (void)stockListDownloadTask:(id)arg1 shouldUpdateStocks:(id)arg2 deleteStockIDs:(id)arg3;
- (id)stockListDownloadTask:(id)arg1 stockForID:(unsigned long long)arg2;
- (void)shortConnectionTaskDidFinish:(id)arg1;
- (void)downloadStockList;
- (void)watchGroupsLoad;
- (void)watchGroupsDownload;
- (void)insertVisitedStock:(id)arg1;
- (void)insertCNHistoryStock:(id)arg1;
- (void)insertUSHistoryStock:(id)arg1;
- (void)insertHKHistoryStock:(id)arg1;
- (void)searchStockQuery:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)getStockWithFMResultSet:(id)arg1;
- (id)sortByWarrant:(id)arg1;
- (id)sortSearchResultsWithHotArray:(id)arg1 notHotList:(id)arg2 upperCasePatter:(id)arg3;
- (id)sortWithArray:(id)arg1 upperPatther:(id)arg2 forTotalMatch:(BOOL)arg3;
- (void)doSearchStock:(id)arg1;
- (id)matchedStockWithQuery:(id)arg1;
- (void)updateStock:(id)arg1 withResultSet:(id)arg2;
- (id)stockByType:(int)arg1 marketType:(unsigned long long)arg2;
- (id)stockByCode:(id)arg1 marketID:(int)arg2;
- (id)stocksByCodeList:(id)arg1;
- (id)stocksByCode:(id)arg1;
- (id)stockByCode:(id)arg1;
- (id)queryStockByCode:(id)arg1 marketSuffix:(id)arg2;
- (id)stockByID:(id)arg1;
- (id)stockByID:(id)arg1 cache:(BOOL)arg2;
- (id)cachedStockByID:(id)arg1;
- (void)cleanCachedStock;
- (void)cacheStock:(id)arg1;
- (id)createStockWithID:(unsigned long long)arg1 code:(id)arg2 cache:(BOOL)arg3;
- (void)onQuoteServerDidLogin:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)creatShortTermSpiritMarkStock;
- (void)setupForWatchStockPush;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

