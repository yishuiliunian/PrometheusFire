//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CocoaAsyncSocket/GCDAsyncSocket.h>

#import <FTEngine/FLAsyncSocketProxyProtocol-Protocol.h>
#import <FTEngine/GCDAsyncSocketDelegate-Protocol.h>

@class NSString;

@interface FLAsyncSocketProxyClient : GCDAsyncSocket <FLAsyncSocketProxyProtocol, GCDAsyncSocketDelegate>
{
    NSString *_proxyHost;
    unsigned short _proxyPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    GCDAsyncSocket *_proxySocket;
    NSString *_destinationHost;
    unsigned short _destinationPort;
}

+ (id)clientWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3 clientType:(unsigned long long)arg4;
@property(readonly, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(readonly, nonatomic) NSString *proxyUsername; // @synthesize proxyUsername=_proxyUsername;
@property(readonly, nonatomic) unsigned short proxyPort; // @synthesize proxyPort=_proxyPort;
@property(readonly, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
@property(retain, nonatomic) GCDAsyncSocket *proxySocket; // @synthesize proxySocket=_proxySocket;
@property(readonly, nonatomic) unsigned short destinationPort; // @synthesize destinationPort=_destinationPort;
@property(retain, nonatomic) NSString *destinationHost; // @synthesize destinationHost=_destinationHost;
- (void).cxx_destruct;
- (void)socketDidSecure:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socketDidCloseReadStream:(id)arg1;
- (void)socket:(id)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (int)socket6FD;
- (int)socket4FD;
- (int)socketFD;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)unmarkSocketQueueTargetQueue:(id)arg1;
- (void)markSocketQueueTargetQueue:(id)arg1;
- (void)setAutoDisconnectOnClosedReadStream:(BOOL)arg1;
- (BOOL)autoDisconnectOnClosedReadStream;
- (void)startTLS:(id)arg1;
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (BOOL)isSecure;
- (BOOL)isIPv6;
- (BOOL)isIPv4;
- (id)localAddress;
- (id)connectedAddress;
- (unsigned short)localPort;
- (id)localHost;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (BOOL)isConnected;
- (BOOL)isDisconnected;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReading;
- (void)disconnect;
- (BOOL)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (void)setUserData:(id)arg1;
- (id)userData;
- (BOOL)isIPv4PreferredOverIPv6;
- (void)setIPv6Enabled:(BOOL)arg1;
- (BOOL)isIPv6Enabled;
- (void)setIPv4Enabled:(BOOL)arg1;
- (BOOL)isIPv4Enabled;
- (void)setProxyUsername:(id)arg1 password:(id)arg2;
- (void)setProxyHost:(id)arg1 port:(unsigned short)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

