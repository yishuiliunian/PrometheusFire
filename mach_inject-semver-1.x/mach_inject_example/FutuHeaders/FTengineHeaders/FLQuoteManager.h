//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseManager.h>

@class NSMutableDictionary, NSMutableSet, NSTimer;

@interface FLQuoteManager : FLBaseManager
{
    double _cacheBeginTime;
    NSMutableSet *_pendingSubscribedItems;
    long long _pendingSubscribedItemsCount;
    int _lastPushTime;
    BOOL _quoteUnstable;
    BOOL _appInBackground;
    CDUnknownBlockType _minuteDataBlock;
    CDUnknownBlockType _klineDataBlock;
    NSTimer *_timer;
    NSMutableDictionary *_allSubscribedItems;
}

+ (BOOL)useBMPQuote:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *allSubscribedItems; // @synthesize allSubscribedItems=_allSubscribedItems;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType klineDataBlock; // @synthesize klineDataBlock=_klineDataBlock;
@property(copy, nonatomic) CDUnknownBlockType minuteDataBlock; // @synthesize minuteDataBlock=_minuteDataBlock;
@property(nonatomic) BOOL appInBackground; // @synthesize appInBackground=_appInBackground;
- (void).cxx_destruct;
- (void)quoteAuthStatePushDecode:(struct util_byteios_net *)arg1;
- (void)requestHighLevelQuoteWithMarketType:(unsigned long long)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)fetchHighLevelQuoteStateWithResultBlock:(CDUnknownBlockType)arg1;
- (void)reconnectQuoteServer;
- (void)quoteServerSwitch:(int)arg1;
- (void)userAgreeToUseFreeQuote;
- (void)cleanAllPosition;
- (void)logSubscribeItemsWithSubscribeType:(unsigned long long)arg1;
- (void)logKLineSubscribeTypes;
- (long long)checkKLineSubscribeTypes;
- (void)getClickPriceOfStockIDDecode:(struct util_byteios_net *)arg1;
- (void)getClickPriceOfStockID:(unsigned long long)arg1;
- (void)getClickPriceInfo;
- (void)addTickerArray:(id)arg1 toStock:(id)arg2 isPush:(BOOL)arg3;
- (void)getTickersForStock:(id)arg1;
- (void)getTickersForStock:(id)arg1 tickerCount:(long long)arg2;
- (BOOL)intervalGetStockQuote:(id)arg1 isPlate:(BOOL)arg2 realtime:(BOOL)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (BOOL)getStockQuote:(id)arg1 isPlate:(BOOL)arg2 realtime:(BOOL)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (BOOL)getPlateStockQuote:(id)arg1 realtime:(BOOL)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (BOOL)getStockQuote:(id)arg1 realtime:(BOOL)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)getHKCNLinkageLimitDataWithMask:(unsigned int)arg1 ResultBlock:(CDUnknownBlockType)arg2;
- (void)getFollowerInfoForStock:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)getCapitalFlowTrendForStock:(id)arg1 sequence:(int)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)getCapitalFlowForStock:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)decodeTicker:(struct util_byteios_net *)arg1 push:(BOOL)arg2;
- (void)decodeOptionSimple:(struct util_byteios_net *)arg1 forStock:(id)arg2;
- (void)decodeWarrantsSimple:(struct util_byteios_net *)arg1 forStock:(id)arg2;
- (void)decodePlate:(struct util_byteios_net *)arg1 stock:(id)arg2;
- (id)decodeSecurityExtremum:(struct util_byteios_net *)arg1 stock:(id)arg2;
- (void)decodeSecurity:(struct util_byteios_net *)arg1 stock:(id)arg2 type:(unsigned int)arg3;
- (void)subscribePushDecodeIndexSimplePhone:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodePlateSimple:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeBroker:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeOrderQueue:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeShortTermTicker:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeTicker:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeWarrantsSettleDate:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeOptionSimple:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeWarrantsSimple:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeExtremum:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeCommonSimple:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeOptionSummary:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecodeIndexSummary:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3 usePB:(BOOL)arg4;
- (void)subscribePushDecodeCommonSummary:(struct util_byteios_net *)arg1 stock:(id)arg2 notifyInfo:(id)arg3;
- (void)subscribePushDecode:(struct util_byteios_net *)arg1;
- (void)logSubscribeOperationWithStockID:(unsigned long long)arg1 subscribeType:(unsigned long long)arg2 operationType:(unsigned char)arg3 entryType:(int)arg4 marketType:(unsigned char)arg5 dataType:(unsigned char)arg6;
- (void)subscribeDecode:(struct util_byteios_net *)arg1;
- (void)subscribeItems:(id)arg1 marketType:(unsigned char)arg2 dataType:(unsigned char)arg3;
- (void)subscribeItemArray:(id)arg1;
- (void)flushSubscribeItem;
- (void)flushSubscribeItemIfNeeded;
- (void)onTimerFire:(id)arg1;
- (void)addSubscribedItem:(id)arg1;
- (void)unsubscribeStocks:(id)arg1 type:(unsigned long long)arg2 observer:(id)arg3;
- (void)subscribeStocks:(id)arg1 type:(unsigned long long)arg2 observer:(id)arg3;
- (void)checkSubscribeStocks;
- (void)resubscribeStocks;
- (void)resetInstantQuoteDataForMarketType:(unsigned long long)arg1;
- (void)checkToGetHKClickRefreshPrice;
- (void)onUserQuoteStateOrPermissionDidChanged:(id)arg1;
- (void)onQuoteServerDidLogin:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)updateStockFilterModel:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (void)updateWarrantStockItem:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (void)updateStockItem:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (void)updatePlateStockItem:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (void)updateLinkageStockItem:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (void)updateLinkageItem:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (BOOL)updateStock:(id)arg1 withMarginTrading:(const struct MarginTrading *)arg2;
- (BOOL)updateStock:(id)arg1 withCASReferencePrice:(const struct CAS_Reference_Price *)arg2;
- (BOOL)updateStock:(id)arg1 withVCMTrigger:(const struct VCM_Trigger *)arg2;
- (BOOL)updateIndexSimple:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (BOOL)updateWarrantSimple:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (BOOL)updateCommonSimple:(id)arg1 withNewData:(const struct OneStockSimple *)arg2;
- (void)stockObjectUnpack:(struct StockDetailData_Res *)arg1 stockObjectArray:(id)arg2;
- (BOOL)updateStock:(id)arg1 withTrust:(const struct TrustData *)arg2;
- (BOOL)updateStock:(id)arg1 withPlate:(const struct PlateData *)arg2;
- (BOOL)updateStock:(id)arg1 withIndex:(const struct IndexData *)arg2;
- (BOOL)updateStock:(id)arg1 withWarrant:(const struct WarrantsData *)arg2;
- (BOOL)updateStock:(id)arg1 withEquity:(const struct EquitiesData *)arg2;
- (void)stockUnpack:(struct StockDetailData_Res *)arg1 stockArray:(id)arg2;
- (id)getStockIDs:(id)arg1 withProtocolMarketType:(unsigned char)arg2;
- (id)filterStockIDs:(id)arg1 withOption:(unsigned long long)arg2;
- (BOOL)isPlateType:(unsigned long long)arg1;
- (BOOL)isFirstObjectPlateType:(id)arg1;
- (BOOL)getStockBMPQuote:(id)arg1 originalStocks:(id)arg2 marketType:(unsigned char)arg3 isPlateType:(BOOL)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (BOOL)getPlateStockBMPQuote:(id)arg1 marketType:(unsigned char)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (BOOL)getStockBMPQuote:(id)arg1 marketType:(unsigned char)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (BOOL)getStockSimpleQuote:(id)arg1 shouldCheckBMPState:(BOOL)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (BOOL)getStockBMPQuote:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (BOOL)getStockSimpleQuote:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

