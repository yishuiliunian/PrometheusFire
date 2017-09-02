//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CLSBetaUpdate : NSObject
{
    NSURL *_url;
    NSString *_version;
}

+ (id)betaUpdateWithDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *installLabel;
@property(readonly, copy, nonatomic) NSString *cancelLabel;
@property(readonly, copy, nonatomic) NSString *promptMessage;
@property(readonly, copy, nonatomic) NSString *promptTitle;
- (id)initWithDictionary:(id)arg1;

@end

