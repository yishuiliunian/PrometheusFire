//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FABIcon, NSDictionary;

@interface FABAppIconUtility : NSObject
{
    FABIcon *_applicationIcon;
}

@property(retain, nonatomic) FABIcon *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
- (void).cxx_destruct;
- (id)fetchApplicationIcon;
- (id)mainAppIcon;
@property(readonly, nonatomic) NSDictionary *appInfoDictionary;

@end
