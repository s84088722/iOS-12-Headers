//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDWorkerProtocol-Protocol.h>

@class DEDConfiguration, DEDController, DEDDiagnosticCollector, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface DEDDaemon : NSObject <DEDWorkerProtocol>
{
    _Bool _embeddedInApp;
    NSObject<OS_os_log> *_log;
    DEDConfiguration *_config;
    NSOperationQueue *_backgroundOpQueue;
    NSOperationQueue *_userInitiatedOpQueue;
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    DEDDiagnosticCollector *__diagnosticCollector;
    DEDController *_controller;
}

+ (id)sharedInstance;
@property(retain) DEDController *controller; // @synthesize controller=_controller;
@property(retain) DEDDiagnosticCollector *_diagnosticCollector; // @synthesize _diagnosticCollector=__diagnosticCollector;
@property(retain) NSObject<OS_dispatch_queue> *diskAccessQueue; // @synthesize diskAccessQueue=_diskAccessQueue;
@property _Bool embeddedInApp; // @synthesize embeddedInApp=_embeddedInApp;
@property(retain) NSOperationQueue *userInitiatedOpQueue; // @synthesize userInitiatedOpQueue=_userInitiatedOpQueue;
@property(retain) NSOperationQueue *backgroundOpQueue; // @synthesize backgroundOpQueue=_backgroundOpQueue;
@property(retain) DEDConfiguration *config; // @synthesize config=_config;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void).cxx_destruct;
- (id)_blockOnFakeSysidagnoseWithIdentifer:(id)arg1 withBugSession:(id)arg2;
- (void)_logOperations;
- (void)_streamOperationStatus;
- (_Bool)observesOperations;
- (id)_controller;
- (id)attachmentHandler;
- (id)diagnosticCollector;
- (void)_getSessionStatusWithSession:(id)arg1;
- (void)_syncSessionStatusWithSession:(id)arg1 withIdentifiers:(_Bool)arg2;
- (void)cancelNotificationForSession:(id)arg1;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)pingSession:(id)arg1;
- (long long)transportType;
- (void)start;
- (void)configureForEmbedded:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

