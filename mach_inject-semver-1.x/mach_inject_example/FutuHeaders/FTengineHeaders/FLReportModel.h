//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FTCodingModel.h>

@class FLBaseAPIClient, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FLReportModel : FTCodingModel
{
    double _lastReportTimeStamp;
    double _lastDailyReportTimeStamp;
    FLBaseAPIClient *_httpClient;
    NSString *_devName;
    NSString *_osType;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSMutableArray *_reportList;
}

@property(retain, nonatomic) NSMutableArray *reportList; // @synthesize reportList=_reportList;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *reportQueue; // @synthesize reportQueue=_reportQueue;
@property(retain, nonatomic) NSString *osType; // @synthesize osType=_osType;
@property(retain, nonatomic) NSString *devName; // @synthesize devName=_devName;
@property(retain, nonatomic) FLBaseAPIClient *httpClient; // @synthesize httpClient=_httpClient;
@property(nonatomic) double lastDailyReportTimeStamp; // @synthesize lastDailyReportTimeStamp=_lastDailyReportTimeStamp;
@property(nonatomic) double lastReportTimeStamp; // @synthesize lastReportTimeStamp=_lastReportTimeStamp;
- (void).cxx_destruct;
- (void)clearReportInfo;
- (void)addReportInfo:(id)arg1;
- (unsigned long long)reportRecordsCount;
- (void)reportWithBlock:(CDUnknownBlockType)arg1;

@end

