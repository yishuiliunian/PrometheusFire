//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTEngine/FTMessageNotifyItem-Protocol.h>

@class NSString;

@interface FTPriceNoticeMsgModel : NSObject <FTMessageNotifyItem>
{
    unsigned int _price;
    unsigned long long _stockId;
    unsigned long long _msgTime;
    unsigned long long _msgId;
    long long _priceChangeRatio;
    NSString *_msgContent;
    unsigned long long _msgSequence;
}

@property(nonatomic) unsigned long long msgSequence; // @synthesize msgSequence=_msgSequence;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(nonatomic) long long priceChangeRatio; // @synthesize priceChangeRatio=_priceChangeRatio;
@property(nonatomic) unsigned int price; // @synthesize price=_price;
@property(nonatomic) unsigned long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(nonatomic) unsigned long long stockId; // @synthesize stockId=_stockId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

