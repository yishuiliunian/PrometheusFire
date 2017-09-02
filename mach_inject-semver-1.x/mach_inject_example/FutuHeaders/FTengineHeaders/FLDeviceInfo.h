//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FLDeviceInfo : NSObject
{
    NSDictionary *_toDictionary;
    int _memory;
    NSString *_model;
    NSString *_mac;
    NSString *_originalMAC;
    NSString *_version;
    NSArray *_screenSideLengths;
    NSString *_IDFAString;
}

@property(retain) NSString *IDFAString; // @synthesize IDFAString=_IDFAString;
@property(retain) NSArray *screenSideLengths; // @synthesize screenSideLengths=_screenSideLengths;
@property int memory; // @synthesize memory=_memory;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *originalMAC; // @synthesize originalMAC=_originalMAC;
@property(retain) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly) NSString *iOSVendorId;
@property(readonly, nonatomic) NSDictionary *toDictionary;

@end

