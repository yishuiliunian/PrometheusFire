//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLOrder.h>

@interface FLHOrder : FLOrder
{
    BOOL _enabled;
    BOOL _loanUsed;
    unsigned int _makeSerialNumber;
    unsigned int _cancelSerialNumber;
    int _status;
    int _type;
}

+ (int)defaultStockUnit;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL loanUsed; // @synthesize loanUsed=_loanUsed;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned int cancelSerialNumber; // @synthesize cancelSerialNumber=_cancelSerialNumber;
@property(nonatomic) unsigned int makeSerialNumber; // @synthesize makeSerialNumber=_makeSerialNumber;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (BOOL)isPriceTooFar;
- (BOOL)isTriggerPriceTooFar;
- (BOOL)isPriceInSpreads;
- (id)priceString;
- (int)priceStep;
- (void)setTriggerOrder:(BOOL)arg1;
- (long long)compareStatus:(id)arg1;
- (id)description;
- (id)triggerDesc;
- (id)typeText;
- (id)displayErrorMessage;
- (BOOL)isRequirePrice;
- (BOOL)priceAdjustable;
- (BOOL)cancelable;
- (BOOL)editable;
- (BOOL)removable;
- (BOOL)isPending;
- (BOOL)isSuccess;
- (BOOL)isFailed;
- (id)statusText;
- (id)updateStatus;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

