//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

#import <FTEngine/NSCopying-Protocol.h>

@interface FLRecommendFilterStrategyQuote : FTCodingModel <NSCopying>
{
    int _averagePriceChangeRatio;
}

+ (id)modelWithProtoBufferModel:(struct PickingStrategyQuote *)arg1;
@property(nonatomic) int averagePriceChangeRatio; // @synthesize averagePriceChangeRatio=_averagePriceChangeRatio;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

