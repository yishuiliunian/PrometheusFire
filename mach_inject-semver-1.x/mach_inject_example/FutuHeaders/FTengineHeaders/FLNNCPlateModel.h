//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

#import <FTEngine/NSCopying-Protocol.h>

@class NSString;

@interface FLNNCPlateModel : FTCodingModel <NSCopying>
{
    unsigned int _plateId;
    NSString *_nameSC;
    NSString *_nameTC;
}

@property(retain, nonatomic) NSString *nameTC; // @synthesize nameTC=_nameTC;
@property(retain, nonatomic) NSString *nameSC; // @synthesize nameSC=_nameSC;
@property(nonatomic) unsigned int plateId; // @synthesize plateId=_plateId;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

