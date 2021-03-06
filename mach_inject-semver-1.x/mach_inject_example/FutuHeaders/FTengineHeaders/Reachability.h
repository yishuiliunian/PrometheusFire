//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface Reachability : NSObject
{
    BOOL _reachableOnWWAN;
    CDUnknownBlockType _reachableBlock;
    CDUnknownBlockType _unreachableBlock;
    struct __SCNetworkReachability *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilitySerialQueue;
    id _reachabilityObject;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(void *)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject=_reachabilityObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue=_reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(nonatomic) BOOL reachableOnWWAN; // @synthesize reachableOnWWAN=_reachableOnWWAN;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock=_unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock=_reachableBlock;
- (void).cxx_destruct;
- (id)description;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)currentReachabilityFlags;
- (id)currentReachabilityString;
- (unsigned int)reachabilityFlags;
- (long long)currentReachabilityStatus;
- (BOOL)isInterventionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)connectionRequired;
- (BOOL)isConnectionRequired;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachable;
- (BOOL)isReachableWithFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (BOOL)startNotifier;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end

