//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

#import <FTEngine/FLSendTaskProtocol-Protocol.h>
#import <FTEngine/NSCopying-Protocol.h>

@class NSString;

@interface FLNNCSendTaskModel : FTCodingModel <FLSendTaskProtocol, NSCopying>
{
    int _sendStatus;
    double _lastTryTime;
    double _nextTryInterval;
}

@property(nonatomic) double nextTryInterval; // @synthesize nextTryInterval=_nextTryInterval;
@property(nonatomic) double lastTryTime; // @synthesize lastTryTime=_lastTryTime;
@property(nonatomic) int sendStatus; // @synthesize sendStatus=_sendStatus;
- (int)getTaskStatus;
- (void)setTaskStatus:(int)arg1;
- (BOOL)shouldStart;
- (void)startSend;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

