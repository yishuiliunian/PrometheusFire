//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FLTransferBankAccount : NSObject
{
    NSString *_bankCode;
    NSString *_bankName;
    long long _currencyType;
    NSString *_bankId;
}

@property(copy, nonatomic) NSString *bankId; // @synthesize bankId=_bankId;
@property(nonatomic) long long currencyType; // @synthesize currencyType=_currencyType;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
- (void).cxx_destruct;
- (void)decodeWithTransferWithBankTransAcc:(void *)arg1;

@end
