//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLMarginTradingInfo : NSObject
{
    BOOL _marginable;
    BOOL _shortSellable;
    unsigned int _mortgageRate;
    unsigned int _shortSellRefRatio;
    unsigned int _availableCount;
}

@property(nonatomic) unsigned int availableCount; // @synthesize availableCount=_availableCount;
@property(nonatomic) unsigned int shortSellRefRatio; // @synthesize shortSellRefRatio=_shortSellRefRatio;
@property(nonatomic) BOOL shortSellable; // @synthesize shortSellable=_shortSellable;
@property(nonatomic) unsigned int mortgageRate; // @synthesize mortgageRate=_mortgageRate;
@property(nonatomic) BOOL marginable; // @synthesize marginable=_marginable;

@end

