//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTEngine/CLSNetworkClientDelegate-Protocol.h>
#import <FTEngine/CLSReportsControllerDelegate-Protocol.h>

@class CLSFileManager, CLSNetworkClient, CLSReportsController, CLSSettings, NSOperationQueue, NSString;
@protocol CLSCrashReportingControllerDelegate;

@interface CLSCrashReportingController : NSObject <CLSNetworkClientDelegate, CLSReportsControllerDelegate>
{
    CLSFileManager *_fileMananger;
    CLSNetworkClient *_networkClient;
    CLSReportsController *_reportsController;
    NSOperationQueue *_operationQueue;
    CLSSettings *_settings;
    long long _promptChoice;
    id <CLSCrashReportingControllerDelegate> _delegate;
    CLSFileManager *_fileManager;
}

@property(retain, nonatomic) CLSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) CLSNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <CLSCrashReportingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportsControllerDidCompleteAllSubmissions:(id)arg1;
- (void)reportsController:(id)arg1 didCompletePackageSubmission:(id)arg2 error:(id)arg3;
- (id)bundleIdentifierForReportsController:(id)arg1;
- (id)APIKeyForReportsController:(id)arg1;
- (id)settingsForReportsController:(id)arg1;
- (void)networkClient:(id)arg1 didFinishUploadWithPath:(id)arg2 error:(id)arg3;
- (BOOL)networkClientCanUseBackgroundSessions:(id)arg1;
- (void)didBecomeInactive:(id)arg1;
- (void)willBecomeActive:(id)arg1;
- (void)captureInitialNotificationStates;
- (void)setupStateNotifications;
- (BOOL)checkForAndCreateLaunchMarker;
- (BOOL)removeLaunchFailureMarker;
- (BOOL)launchFailureMarkerPresent;
- (BOOL)createLaunchFailureMarker;
- (id)launchFailureMarkerPath;
- (void)handlePromptCompleteForReport:(id)arg1 shouldSubmit:(BOOL)arg2 shouldMarkAlwaysSubmit:(BOOL)arg3;
- (void)setupAndDisplayAlertWithTitle:(id)arg1 message:(id)arg2 cancel:(id)arg3 send:(id)arg4 alwaysSend:(id)arg5 report:(id)arg6;
- (void)displayPermissionAlertForReport:(id)arg1;
- (void)retryUploadForReportAtPath:(id)arg1;
- (void)uploadPreexistingFiles:(id)arg1;
- (void)handleExistingFilesInPrepared;
- (void)handleExistingFilesInProcessing;
- (void)handleContentsInOtherReportingDirectories;
- (void)removeReport:(id)arg1;
- (void)handleDelegateCompletionForReport:(id)arg1 submit:(BOOL)arg2;
- (void)processExistingActiveReportPath:(id)arg1 asUrgent:(BOOL)arg2;
- (void)processExistingReportPaths:(id)arg1 asUrgent:(BOOL)arg2;
- (id)setupCurrentReport;
- (BOOL)installCrashReportingHandlers:(CDStruct_1e2a2a70 *)arg1;
- (BOOL)prepareForNewLaunch;
- (id)bundleIdentifier;
- (BOOL)needsToPrompt;
- (BOOL)canProcessUrgentReports;
- (BOOL)delegateNeedsToBeInformedOfReports;
- (BOOL)packagingEnabled;
- (void)checkForUserPromptSetting;
- (BOOL)potentiallySubmittableCrashOccurred;
- (BOOL)attemptCurrentReportSubmission;
- (void)deliverCrashDelegateCallback;
- (unsigned int)machExceptionMask;
- (id)settings;
- (id)APIKey;
- (id)installIdentifier;
- (BOOL)firstInstall;
@property(readonly, nonatomic) CLSReportsController *reportsController;
- (BOOL)checkPreconditions;
- (void)crashReportingSetupCompleted:(unsigned long long)arg1;
- (BOOL)startCrashReporterWithAPIKey:(id)arg1 betaToken:(id)arg2 profilingMark:(unsigned long long)arg3 report:(id)arg4;
- (BOOL)startWithProfilingMark:(unsigned long long)arg1 betaToken:(id)arg2;
- (id)clientWithOperationQueue:(id)arg1;
- (id)initWithFileManager:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

