//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseManager.h>

@class FLWebAPIClient;

@interface FLSharedInfoReportManager : FLBaseManager
{
    FLWebAPIClient *_webClient;
}

@property(retain, nonatomic) FLWebAPIClient *webClient; // @synthesize webClient=_webClient;
- (void).cxx_destruct;
- (BOOL)reportSharedInfo:(id)arg1;

@end
