//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseManager.h>

@class FLUserAddressCheckingModel;

@interface FLUserAddressCheckingManager : FLBaseManager
{
    FLUserAddressCheckingModel *_privateAddressCheckingModel;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FLUserAddressCheckingModel *privateAddressCheckingModel; // @synthesize privateAddressCheckingModel=_privateAddressCheckingModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) FLUserAddressCheckingModel *addressCheckingModel;
- (void)privateClearAddressCheckingData;
- (int)getIntegerValueWithHHMMTimeString:(id)arg1;
- (void)handleRequestResponse:(id)arg1;
- (void)publicSlearUserAddressCheckingData;
- (BOOL)shouldShowUserAddressCheckingPage;
- (void)requestUserAddressCheckingData;
- (id)init;

@end

