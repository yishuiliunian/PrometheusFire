//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <FTEngine/SimplePingDelegate-Protocol.h>

@class NSDate, NSString, NSTimer, SimplePing;
@protocol FLPingOperationDelegate;

@interface FLPingOperation : NSOperation <SimplePingDelegate>
{
    int _pingCount;
    id _contextData;
    id <FLPingOperationDelegate> _pingDelegate;
    SimplePing *_pinger;
    NSDate *_beginDate;
    double _totalDuration;
    NSTimer *_pingTimer;
}

@property(retain, nonatomic) NSTimer *pingTimer; // @synthesize pingTimer=_pingTimer;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) int pingCount; // @synthesize pingCount=_pingCount;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) SimplePing *pinger; // @synthesize pinger=_pinger;
@property(nonatomic) __weak id <FLPingOperationDelegate> pingDelegate; // @synthesize pingDelegate=_pingDelegate;
@property(nonatomic) __weak id contextData; // @synthesize contextData=_contextData;
- (void).cxx_destruct;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (id)generateDataWithLength:(unsigned long long)arg1;
@property(readonly, nonatomic) double averageDuration;
- (void)pingOver;
- (void)stopTimer;
- (void)startTimer;
- (void)stopPing;
- (void)main;
- (void)reset;
- (id)initWithHostName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

