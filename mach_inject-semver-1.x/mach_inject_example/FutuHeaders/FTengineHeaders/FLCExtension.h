//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FLCExtension : NSObject
{
    NSString *_handlerName;
    NSString *_extensionPoint;
    NSString *_extensionID;
    NSString *_desc;
    long long _sequence;
    NSDictionary *_parameters;
}

@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property(retain, nonatomic) NSString *extensionPoint; // @synthesize extensionPoint=_extensionPoint;
@property(retain, nonatomic) NSString *handlerName; // @synthesize handlerName=_handlerName;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class handlerClass;

@end

