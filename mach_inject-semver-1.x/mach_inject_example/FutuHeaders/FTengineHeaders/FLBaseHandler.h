//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLAccount, GCDAsyncSocket, NSData, NSError, NSMutableDictionary, NSString;
@protocol FLHandlerStatusDelegate, FLNetIPStrategy, OS_dispatch_queue, OS_dispatch_source;

@interface FLBaseHandler : NSObject
{
    unsigned int _nextKeyTime;
    unsigned int _nextAliveTime;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _keepAliveReceived;
    BOOL _keyUpdateReceived;
    BOOL _shouldLogConnectionStatus;
    unsigned short _port;
    unsigned short _aliveInterval;
    unsigned short _keyInterval;
    unsigned short _redirectedPort;
    unsigned short _loginCommand;
    unsigned int _handlerId;
    unsigned int _loginTime;
    unsigned int _didLoginTime;
    unsigned int _securityToken;
    unsigned int _serialNumber;
    int _connectionStatus;
    unsigned int _connCount;
    unsigned int _connectionSerialNum;
    FLAccount *_currentAccount;
    GCDAsyncSocket *_socket;
    NSString *_name;
    NSString *_server;
    NSData *_remainData;
    NSMutableDictionary *_commands;
    NSMutableDictionary *_pushBlocks;
    double _connectTimeoutInterval;
    double _loginTimeoutInterval;
    NSString *_redirectedServer;
    id <FLHandlerStatusDelegate> _statusDelegate;
    double _keepAliveTimeOutCheckValue;
    id <FLNetIPStrategy> _ipSource;
    double _connBeginTime;
    double _connEndTime;
    NSError *_connError;
    double _firstConnBeginTime;
    NSObject<OS_dispatch_source> *_keepAliveAndKeyUpdateTimer;
}

+ (id)jsonDicionaryFromPacker:(struct util_byteios_net *)arg1;
@property(nonatomic) unsigned int connectionSerialNum; // @synthesize connectionSerialNum=_connectionSerialNum;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *keepAliveAndKeyUpdateTimer; // @synthesize keepAliveAndKeyUpdateTimer=_keepAliveAndKeyUpdateTimer;
@property(nonatomic) double firstConnBeginTime; // @synthesize firstConnBeginTime=_firstConnBeginTime;
@property(nonatomic) unsigned int connCount; // @synthesize connCount=_connCount;
@property(retain, nonatomic) NSError *connError; // @synthesize connError=_connError;
@property(nonatomic) double connEndTime; // @synthesize connEndTime=_connEndTime;
@property(nonatomic) double connBeginTime; // @synthesize connBeginTime=_connBeginTime;
@property(nonatomic) __weak id <FLNetIPStrategy> ipSource; // @synthesize ipSource=_ipSource;
@property(nonatomic) unsigned short loginCommand; // @synthesize loginCommand=_loginCommand;
@property(nonatomic) double keepAliveTimeOutCheckValue; // @synthesize keepAliveTimeOutCheckValue=_keepAliveTimeOutCheckValue;
@property(nonatomic) id <FLHandlerStatusDelegate> statusDelegate; // @synthesize statusDelegate=_statusDelegate;
@property(nonatomic) int connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(nonatomic) unsigned short redirectedPort; // @synthesize redirectedPort=_redirectedPort;
@property(retain, nonatomic) NSString *redirectedServer; // @synthesize redirectedServer=_redirectedServer;
@property(nonatomic) BOOL shouldLogConnectionStatus; // @synthesize shouldLogConnectionStatus=_shouldLogConnectionStatus;
@property(nonatomic) double loginTimeoutInterval; // @synthesize loginTimeoutInterval=_loginTimeoutInterval;
@property(nonatomic) double connectTimeoutInterval; // @synthesize connectTimeoutInterval=_connectTimeoutInterval;
@property(retain, nonatomic) NSMutableDictionary *pushBlocks; // @synthesize pushBlocks=_pushBlocks;
@property(retain, nonatomic) NSMutableDictionary *commands; // @synthesize commands=_commands;
@property unsigned int serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned int securityToken; // @synthesize securityToken=_securityToken;
@property(nonatomic) unsigned int didLoginTime; // @synthesize didLoginTime=_didLoginTime;
@property(nonatomic) unsigned int loginTime; // @synthesize loginTime=_loginTime;
@property(nonatomic) BOOL keyUpdateReceived; // @synthesize keyUpdateReceived=_keyUpdateReceived;
@property(nonatomic) BOOL keepAliveReceived; // @synthesize keepAliveReceived=_keepAliveReceived;
@property(nonatomic) unsigned short keyInterval; // @synthesize keyInterval=_keyInterval;
@property(nonatomic) unsigned short aliveInterval; // @synthesize aliveInterval=_aliveInterval;
@property(retain, nonatomic) NSData *remainData; // @synthesize remainData=_remainData;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(retain, nonatomic) FLAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(nonatomic) unsigned int handlerId; // @synthesize handlerId=_handlerId;
- (void).cxx_destruct;
- (void)reportWithCmd:(unsigned int)arg1 result:(int)arg2 costTime:(double)arg3;
- (void)loginLoopReport;
- (void)checkAndReport;
- (void)clearReportValues;
- (void)connEndMarkWithError:(id)arg1;
- (void)connBeginMark;
- (void)analyzeWithReceivedCommand:(unsigned short)arg1 bodyLength:(unsigned int)arg2;
@property(readonly, nonatomic) NSString *errorDomain;
- (void)keyUpdate;
- (void)keepAliveWithTimeout:(unsigned int)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)keepAlive;
@property(readonly, nonatomic) BOOL isConnecting;
@property(readonly, nonatomic) BOOL isLoginSuccess;
- (void)logout;
- (void)startAuthenticiateClientSigAndClientKey;
- (void)login;
- (void)startLoginWithAccount:(id)arg1;
- (void)configFirstChoiceIP:(id)arg1;
- (void)disconnectWithoutStatusFeedback;
- (void)disconnect;
- (void)redirectConnect;
- (unsigned int)decodeSocketUserData:(id)arg1;
- (id)getSocketUserData;
- (void)connect;
- (void)_mainThreadSelectorWithInfo:(id)arg1;
- (void)performBlockInMainThread:(CDUnknownBlockType)arg1;
- (void)postNotificationNameInGCDMainQueue:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationNameInOperationMainQueue:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)notifyDisConnectedWithError:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)notifyDisconnectedToCommandResponseWithCommandsInfo:(id)arg1;
- (BOOL)checkConnectionWithLeeway:(double)arg1;
- (unsigned int)_decodePacker:(struct ft_packer *)arg1 data:(char *)arg2 len:(unsigned int)arg3;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)onRecvCurrentProxyContextInfoChangedNotification:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)writeDictionary:(id)arg1 command:(unsigned short)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)registerPushCmd:(unsigned short)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)writeCommand:(id)arg1 packerBlock:(CDUnknownBlockType)arg2;
- (void)writeCommand:(unsigned short)arg1 securityToken:(BOOL)arg2 packerBlock:(CDUnknownBlockType)arg3 responseBlock:(CDUnknownBlockType)arg4;
- (void)writeCommand:(unsigned short)arg1 securityToken:(BOOL)arg2 timeOutInterval:(unsigned int)arg3 packerBlock:(CDUnknownBlockType)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (void)writeCommand:(unsigned short)arg1 marketType:(unsigned char)arg2 dataType:(unsigned char)arg3 securityToken:(BOOL)arg4 timeOutInterval:(unsigned int)arg5 packerBlock:(CDUnknownBlockType)arg6 responseBlock:(CDUnknownBlockType)arg7;
- (void)writeCommand:(unsigned short)arg1 marketType:(unsigned char)arg2 dataType:(unsigned char)arg3 securityToken:(BOOL)arg4 packerBlock:(CDUnknownBlockType)arg5 responseBlock:(CDUnknownBlockType)arg6;
- (void)writePacker:(struct ft_packer *)arg1;
- (void)decodePacker:(struct ft_packer *)arg1;

@end

