//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLCASReferencePrice : NSObject
{
    unsigned int _referencePrice;
    unsigned int _lowerPrice;
    unsigned int _upperPrice;
    int _randomlyCloseStartTime;
    int _randomlyCloseEndTime;
    unsigned long long _status;
}

+ (id)descriptionWithFTCmd6202CASReferencePrice:(const struct CAS_Reference_Price *)arg1;
+ (id)decodeWithFTCmd6202CASReferencePrice:(const struct CAS_Reference_Price *)arg1 oldCASReferencePrice:(id)arg2;
@property(nonatomic) int randomlyCloseEndTime; // @synthesize randomlyCloseEndTime=_randomlyCloseEndTime;
@property(nonatomic) int randomlyCloseStartTime; // @synthesize randomlyCloseStartTime=_randomlyCloseStartTime;
@property(nonatomic) unsigned int upperPrice; // @synthesize upperPrice=_upperPrice;
@property(nonatomic) unsigned int lowerPrice; // @synthesize lowerPrice=_lowerPrice;
@property(nonatomic) unsigned int referencePrice; // @synthesize referencePrice=_referencePrice;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (unsigned long long)displayPhaseForTradeTime:(unsigned int)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL isRunning;

@end

