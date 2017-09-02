//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FABIcon : NSObject
{
    BOOL _prerendered;
    NSData *_data;
    NSString *_dataHash;
    struct CGSize _size;
}

@property(nonatomic) BOOL prerendered; // @synthesize prerendered=_prerendered;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *dataHash; // @synthesize dataHash=_dataHash;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)largerThanSize:(struct CGSize)arg1;
@property(readonly, nonatomic) BOOL isWithinMaxSurfaceArea;
@property(readonly, nonatomic) double surfaceArea;
- (id)initWithImage:(id)arg1;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2 prerendered:(BOOL)arg3;
- (id)initWithData:(id)arg1 dataHash:(id)arg2 size:(struct CGSize)arg3 prerendered:(BOOL)arg4;

@end

