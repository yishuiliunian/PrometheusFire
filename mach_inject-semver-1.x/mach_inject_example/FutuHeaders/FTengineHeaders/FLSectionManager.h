//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLSectionManager : NSObject
{
}

+ (id)defaultManager;
- (id)infoSectionWithPbModel:(struct SectionGet_Rsp_SectionInfo *)arg1;
- (BOOL)requestSectionWithUserId:(unsigned long long)arg1 version:(unsigned long long)arg2 response:(CDUnknownBlockType)arg3;

@end

