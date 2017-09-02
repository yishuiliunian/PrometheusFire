//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FLPositionNotice : NSObject
{
    int _type;
    unsigned long long _ID;
    unsigned long long _userID;
    unsigned long long _stockID;
    unsigned long long _marketType;
    NSString *_symbol;
    NSDate *_date;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(nonatomic) unsigned long long marketType; // @synthesize marketType=_marketType;
@property(nonatomic) unsigned long long stockID; // @synthesize stockID=_stockID;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end
