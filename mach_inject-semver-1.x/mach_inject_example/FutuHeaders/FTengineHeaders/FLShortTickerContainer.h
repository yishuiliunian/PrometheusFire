//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FLShortTickerContainer : NSObject
{
    NSArray *_tickers;
    unsigned long long _nextKey;
    unsigned long long _fetchingKey;
}

@property(nonatomic) unsigned long long fetchingKey; // @synthesize fetchingKey=_fetchingKey;
@property(nonatomic) unsigned long long nextKey; // @synthesize nextKey=_nextKey;
@property(retain) NSArray *tickers; // @synthesize tickers=_tickers;
- (void).cxx_destruct;
- (id)init;

@end

