//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FLMarketStateModel : NSObject
{
    unsigned int _marketId;
    int _marketState;
    NSString *_marketStateStringSC;
    NSString *_marketStateStringTC;
}

@property(retain, nonatomic) NSString *marketStateStringTC; // @synthesize marketStateStringTC=_marketStateStringTC;
@property(retain, nonatomic) NSString *marketStateStringSC; // @synthesize marketStateStringSC=_marketStateStringSC;
@property(nonatomic) int marketState; // @synthesize marketState=_marketState;
@property(nonatomic) unsigned int marketId; // @synthesize marketId=_marketId;
- (void).cxx_destruct;
- (id)description;

@end

