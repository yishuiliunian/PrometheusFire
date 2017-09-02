//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol SimplePingDelegate;

@interface SimplePing : NSObject
{
    BOOL _nextSequenceNumberHasWrapped;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    NSString *_hostName;
    id <SimplePingDelegate> _delegate;
    long long _addressStyle;
    NSData *_hostAddress;
    struct __CFHost *_host;
    struct __CFSocket *_socket;
}

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg1;
@property(retain, nonatomic) struct __CFSocket *socket; // @synthesize socket=_socket;
@property(retain, nonatomic) struct __CFHost *host; // @synthesize host=_host;
@property(nonatomic) BOOL nextSequenceNumberHasWrapped; // @synthesize nextSequenceNumberHasWrapped=_nextSequenceNumberHasWrapped;
@property(nonatomic) unsigned short nextSequenceNumber; // @synthesize nextSequenceNumber=_nextSequenceNumber;
@property(readonly, nonatomic) unsigned short identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(nonatomic) long long addressStyle; // @synthesize addressStyle=_addressStyle;
@property(nonatomic) __weak id <SimplePingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (void)stop;
- (void)stopSocket;
- (void)stopHostResolution;
- (void)start;
- (void)hostResolutionDone;
- (void)startWithHostAddress;
- (void)readData;
- (BOOL)validatePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2;
- (BOOL)validatePing6ResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2;
- (BOOL)validatePing4ResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2;
- (BOOL)validateSequenceNumber:(unsigned short)arg1;
- (void)sendPingWithData:(id)arg1;
- (id)pingPacketWithType:(unsigned char)arg1 payload:(id)arg2 requiresChecksum:(BOOL)arg3;
- (void)didFailWithHostStreamError:(CDStruct_87dc826d)arg1;
- (void)didFailWithError:(id)arg1;
@property(readonly, nonatomic) unsigned char hostAddressFamily;
- (void)dealloc;
- (id)initWithHostName:(id)arg1;

@end

