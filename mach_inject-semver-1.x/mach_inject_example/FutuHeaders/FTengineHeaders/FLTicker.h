//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTEngine/NSCopying-Protocol.h>

@class NSString;

@interface FLTicker : NSObject <NSCopying>
{
    unsigned char _type;
    BOOL _flag;
    unsigned int _time;
    unsigned int _price;
    unsigned int _volume;
    unsigned long long _key;
}

@property(nonatomic) BOOL flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(nonatomic) unsigned int volume; // @synthesize volume=_volume;
@property(nonatomic) unsigned int price; // @synthesize price=_price;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *typeString;
@property(readonly, nonatomic) NSString *timeString;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
