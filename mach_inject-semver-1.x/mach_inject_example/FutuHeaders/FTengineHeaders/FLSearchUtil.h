//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLSearchUtil : NSObject
{
}

+ (BOOL)isHanzi:(id)arg1;
+ (struct _NSRange)rangeHitOfPinYin:(id)arg1 inText:(id)arg2;
+ (id)separateDigitalWithInsertBlankCharacter:(id)arg1;
+ (BOOL)isDigital:(unsigned short)arg1;
+ (id)pinYinFromHanZi:(id)arg1;
+ (id)search:(id)arg1 withKeyWord:(id)arg2 resultIncludeAllInputData:(BOOL)arg3;

@end

