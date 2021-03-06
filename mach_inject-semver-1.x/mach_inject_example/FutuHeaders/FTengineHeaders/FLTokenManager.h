//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseManager.h>

@class FLBaseAPIClient;

@interface FLTokenManager : FLBaseManager
{
    FLBaseAPIClient *_httpClient;
}

@property(retain, nonatomic) FLBaseAPIClient *httpClient; // @synthesize httpClient=_httpClient;
- (void).cxx_destruct;
- (void)verifyTokenCode:(id)arg1 authSig:(id)arg2 toEnableToken:(BOOL)arg3 resutlBlock:(CDUnknownBlockType)arg4;
- (void)verifyOrderPassword:(id)arg1 toEnableToken:(BOOL)arg2 resutlBlock:(CDUnknownBlockType)arg3;
- (void)unbindTradeTokenWithResultBlock:(CDUnknownBlockType)arg1;
- (void)saveQrcodeSig:(id)arg1 forUser:(unsigned long long)arg2;
- (void)fetchQrcodeSigWithResultBlock:(CDUnknownBlockType)arg1;
- (id)encodediOSVendorId;
- (id)receiveErrorResponseMessage:(id)arg1;
- (id)defaultParameters;
- (void)setupHttpClient;
- (id)init;

@end

