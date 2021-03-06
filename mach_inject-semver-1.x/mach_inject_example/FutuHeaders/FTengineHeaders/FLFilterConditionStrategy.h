//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

#import <FTEngine/NSCopying-Protocol.h>

@class FLBaseStockFilterRequest, FLStockConditionFilterRequest, FLWarrantQuery, NSString;

@interface FLFilterConditionStrategy : FTCodingModel <NSCopying>
{
    NSString *_name;
    unsigned long long _createTime;
    unsigned long long _modifyTime;
    FLBaseStockFilterRequest *_filterRequest;
    FLStockConditionFilterRequest *_stockFilterRequestModel;
    FLWarrantQuery *_warrantFilterRequestModel;
}

+ (id)strategyWithStrategy:(id)arg1;
+ (id)strategyWithProtoBuffer:(struct UsrStrateItem *)arg1;
@property(copy, nonatomic) FLWarrantQuery *warrantFilterRequestModel; // @synthesize warrantFilterRequestModel=_warrantFilterRequestModel;
@property(copy, nonatomic) FLStockConditionFilterRequest *stockFilterRequestModel; // @synthesize stockFilterRequestModel=_stockFilterRequestModel;
@property(copy, nonatomic) FLBaseStockFilterRequest *filterRequest; // @synthesize filterRequest=_filterRequest;
@property(nonatomic) unsigned long long modifyTime; // @synthesize modifyTime=_modifyTime;
@property(readonly, nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToStrategy:(id)arg1;
- (id)description;
- (id)initWithCreateTime:(unsigned long long)arg1 modifyTime:(unsigned long long)arg2 name:(id)arg3;

@end

