//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLDeviceInfo, FLUserData, FMDatabaseQueue, NSArray, NSDate, NSDictionary, NSString;

@interface FLAppData : NSObject
{
    BOOL _appProductEnv;
    BOOL _manualSignout;
    BOOL _receivedSessionLogin;
    BOOL _isOverlayInstall;
    BOOL _checkQuoteStability;
    unsigned short _hkSimulationPort;
    int _marketState;
    int _cnMarketState;
    int _usMarketState;
    int _hkFutureMarketState;
    int _hkNewFutureMarketState;
    int _appLanguage;
    int _appLanguageForMiniNNQQ;
    unsigned int _yearInterest;
    NSDictionary *_errorCodes;
    NSDate *_serverTime;
    double _serverTimeStamp;
    NSDictionary *_marketStatesDic;
    FLUserData *_user;
    NSString *_webLinkPrefix;
    NSString *_appVersionString;
    NSString *_appLanguageKey;
    FMDatabaseQueue *_dbQueue;
    NSString *_hkSimulationServer;
    FLDeviceInfo *_deviceInfo;
}

+ (void)removeLocalStockListFilesLowerThanVersion:(int)arg1;
+ (void)removeLocalStockListFiles;
+ (id)shareInstance;
@property(retain, nonatomic) FLDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) unsigned short hkSimulationPort; // @synthesize hkSimulationPort=_hkSimulationPort;
@property(retain, nonatomic) NSString *hkSimulationServer; // @synthesize hkSimulationServer=_hkSimulationServer;
@property(nonatomic) BOOL checkQuoteStability; // @synthesize checkQuoteStability=_checkQuoteStability;
@property(nonatomic) unsigned int yearInterest; // @synthesize yearInterest=_yearInterest;
@property(nonatomic) BOOL isOverlayInstall; // @synthesize isOverlayInstall=_isOverlayInstall;
@property BOOL receivedSessionLogin; // @synthesize receivedSessionLogin=_receivedSessionLogin;
@property BOOL manualSignout; // @synthesize manualSignout=_manualSignout;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(nonatomic) BOOL appProductEnv; // @synthesize appProductEnv=_appProductEnv;
@property(nonatomic) int appLanguageForMiniNNQQ; // @synthesize appLanguageForMiniNNQQ=_appLanguageForMiniNNQQ;
@property(retain, nonatomic) NSString *appLanguageKey; // @synthesize appLanguageKey=_appLanguageKey;
@property(nonatomic) int appLanguage; // @synthesize appLanguage=_appLanguage;
@property(retain, nonatomic) NSString *appVersionString; // @synthesize appVersionString=_appVersionString;
@property(retain, nonatomic) NSString *webLinkPrefix; // @synthesize webLinkPrefix=_webLinkPrefix;
@property(retain, nonatomic) FLUserData *user; // @synthesize user=_user;
@property(nonatomic) int hkNewFutureMarketState; // @synthesize hkNewFutureMarketState=_hkNewFutureMarketState;
@property(nonatomic) int hkFutureMarketState; // @synthesize hkFutureMarketState=_hkFutureMarketState;
@property(nonatomic) int usMarketState; // @synthesize usMarketState=_usMarketState;
@property(nonatomic) int cnMarketState; // @synthesize cnMarketState=_cnMarketState;
@property(nonatomic) int marketState; // @synthesize marketState=_marketState;
@property(retain, nonatomic) NSDictionary *marketStatesDic; // @synthesize marketStatesDic=_marketStatesDic;
@property(nonatomic) double serverTimeStamp; // @synthesize serverTimeStamp=_serverTimeStamp;
@property(retain, nonatomic) NSDate *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSDictionary *errorCodes; // @synthesize errorCodes=_errorCodes;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *idIssuers;
@property(retain, nonatomic) NSArray *issuers;
@property(retain, nonatomic) NSDictionary *spreads;
- (unsigned int)quoteServerTimeForMarket:(unsigned long long)arg1;
- (id)quoteServerDateForMarket:(unsigned long long)arg1;
- (void)updateIsOverlayInstall;
@property(readonly, nonatomic) NSString *webSessionKey;
- (BOOL)isMarketOpen:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isHKNewFutureMarketOpen;
@property(readonly, nonatomic) BOOL isHKFutureMarketOpen;
@property(readonly, nonatomic) BOOL isCNMarketOpen;
@property(readonly, nonatomic) BOOL isHKMarketOpen;
@property(readonly, nonatomic) BOOL isUSMarketOpenIncludePrePost;
@property(readonly, nonatomic) BOOL isUSMarketOpen;
@property(readonly, nonatomic) NSString *hkNewFutureMarketStateString;
@property(readonly, nonatomic) NSString *hkFutureMarketStateString;
@property(readonly, nonatomic) NSString *cnMarketStateString;
@property(readonly, nonatomic) NSString *usMarketStateString;
- (id)hkMarketStateStringForStock:(id)arg1;
@property(readonly, nonatomic) NSString *marketStateString;
- (id)errorMessageForCode:(unsigned char)arg1;
- (void)closeDatabase;
- (void)dealloc;
- (void)serverTimeUpdateRoutine;
- (id)init;
- (void)initDatabase;
- (void)cleanupAllAppdataDB;

@end

