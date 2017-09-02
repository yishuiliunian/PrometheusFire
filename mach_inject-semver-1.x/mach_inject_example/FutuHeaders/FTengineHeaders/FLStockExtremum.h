//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLStockExtremum : NSObject
{
    int _historyHigh;
    int _historyLow;
    int _yearHigh;
    int _yearLow;
    unsigned int _ztPrice;
    unsigned int _dtPrice;
    unsigned int _pbRatio;
    unsigned long long _circulateCaptical;
}

@property(nonatomic) unsigned int pbRatio; // @synthesize pbRatio=_pbRatio;
@property(nonatomic) unsigned long long circulateCaptical; // @synthesize circulateCaptical=_circulateCaptical;
@property(nonatomic) unsigned int dtPrice; // @synthesize dtPrice=_dtPrice;
@property(nonatomic) unsigned int ztPrice; // @synthesize ztPrice=_ztPrice;
@property(nonatomic) int yearLow; // @synthesize yearLow=_yearLow;
@property(nonatomic) int yearHigh; // @synthesize yearHigh=_yearHigh;
@property(nonatomic) int historyLow; // @synthesize historyLow=_historyLow;
@property(nonatomic) int historyHigh; // @synthesize historyHigh=_historyHigh;

@end
