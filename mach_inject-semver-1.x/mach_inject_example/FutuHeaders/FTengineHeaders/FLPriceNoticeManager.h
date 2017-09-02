//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseManager.h>

@class NSMutableDictionary;

@interface FLPriceNoticeManager : FLBaseManager
{
    NSMutableDictionary *_tempStockNotices;
    BOOL _priceNoticePushEnabled;
    NSMutableDictionary *_stockNotices;
}

@property(retain, nonatomic) NSMutableDictionary *stockNotices; // @synthesize stockNotices=_stockNotices;
@property(nonatomic) BOOL priceNoticePushEnabled; // @synthesize priceNoticePushEnabled=_priceNoticePushEnabled;
- (void).cxx_destruct;
- (void)positionNoticePushDecode:(struct util_byteios_net *)arg1;
- (void)setPositionNoticeSetting:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)getPositionNoticeSettingwithResultBlock:(CDUnknownBlockType)arg1;
- (void)priceNoticePushDecode:(struct util_byteios_net *)arg1;
- (void)priceNoticeChangedDecode:(struct util_byteios_net *)arg1;
- (void)setPriceNotice:(id)arg1 forStock:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)decodePriceNotices:(struct util_byteios_net *)arg1;
- (void)fetchPriceNoticesDecode:(struct util_byteios_net *)arg1;
- (void)fetchPriceNotices:(unsigned int)arg1 zipMode:(unsigned char)arg2;
- (void)fetchPriceNotices;
- (void)onQuoteServerDidLogin:(id)arg1;
- (void)dealloc;
- (id)init;

@end
