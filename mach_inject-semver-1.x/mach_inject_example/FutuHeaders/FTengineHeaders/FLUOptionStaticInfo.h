//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FLUOptionStaticInfo : NSObject
{
    unsigned int _delistingFlag;
    unsigned int _strikeTime;
    int _optionType;
    unsigned long long _strikePrice;
    NSString *_publishMarket;
    unsigned long long _sequence;
}

@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSString *publishMarket; // @synthesize publishMarket=_publishMarket;
@property(nonatomic) int optionType; // @synthesize optionType=_optionType;
@property(nonatomic) unsigned long long strikePrice; // @synthesize strikePrice=_strikePrice;
@property(nonatomic) unsigned int strikeTime; // @synthesize strikeTime=_strikeTime;
@property(nonatomic) unsigned int delistingFlag; // @synthesize delistingFlag=_delistingFlag;
- (void).cxx_destruct;

@end

