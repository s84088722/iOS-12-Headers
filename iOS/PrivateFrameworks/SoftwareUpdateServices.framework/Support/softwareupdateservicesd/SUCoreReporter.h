//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionConfiguration, SUCoreEvent, SUCoreReporterDelegate;
@protocol OS_dispatch_queue, OS_os_log;

@interface SUCoreReporter : NSObject
{
    _Bool _splunkAccessCreated;
    NSObject<OS_os_log> *_logger;
    NSMutableArray *_awaitingRetry;
    NSURL *_splunkURL;
    NSObject<OS_dispatch_queue> *_splunkStateQueue;
    NSURLSessionConfiguration *_inProcessConfig;
    NSOperationQueue *_inProcessOperationQueue;
    NSURLSession *_inProcessSession;
    SUCoreReporterDelegate *_reporterDelegate;
    NSString *_domain;
    NSString *_storeToPath;
    SUCoreEvent *_lastErrorEvent;
}

+ (id)_errorDomainAbbreviation:(id)arg1;
+ (id)buildSplunkServerURLFromBase:(id)arg1;
+ (void)augmentEvent:(id)arg1 withError:(id)arg2;
@property(nonatomic) _Bool splunkAccessCreated; // @synthesize splunkAccessCreated=_splunkAccessCreated;
@property(retain, nonatomic) SUCoreEvent *lastErrorEvent; // @synthesize lastErrorEvent=_lastErrorEvent;
@property(retain, nonatomic) NSString *storeToPath; // @synthesize storeToPath=_storeToPath;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) SUCoreReporterDelegate *reporterDelegate; // @synthesize reporterDelegate=_reporterDelegate;
@property(retain, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(retain, nonatomic) NSOperationQueue *inProcessOperationQueue; // @synthesize inProcessOperationQueue=_inProcessOperationQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *inProcessConfig; // @synthesize inProcessConfig=_inProcessConfig;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *splunkStateQueue; // @synthesize splunkStateQueue=_splunkStateQueue;
@property(retain, nonatomic) NSURL *splunkURL; // @synthesize splunkURL=_splunkURL;
@property(retain, nonatomic) NSMutableArray *awaitingRetry; // @synthesize awaitingRetry=_awaitingRetry;
@property(retain, nonatomic) NSObject<OS_os_log> *logger; // @synthesize logger=_logger;
- (void)handleSendFinishedInvalidFileUUID:(id)arg1 sendSucceeded:(_Bool)arg2 withStatusCode:(long long)arg3;
- (void)handleSendFinishedWithFileUUID:(id)arg1 sendSucceeded:(_Bool)arg2 withStatusCode:(long long)arg3;
- (void)_removeFileUUID:(id)arg1 loggingError:(_Bool)arg2;
- (id)_storeJSONData:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3;
- (id)_getJSONDataFromPayload:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3;
- (id)_copyEscapeStringsForEventData:(id)arg1;
- (id)_newScrubbedEvents:(id)arg1;
- (id)_getSplunkRequestForURL:(id)arg1;
- (id)_getSplunkServerURL:(id)arg1;
- (id)_newExistingFileUUIDs;
- (void)_awaitRetryingFileUUID:(id)arg1;
- (void)_sendAllAwaitingRetry;
- (void)_sendInterruptedFromStorage;
- (void)_uploadFromFile:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 toServerURL:(id)arg4;
- (void)_sendSplunkEvents:(id)arg1 forEventUUID:(id)arg2 toServerURL:(id)arg3;
- (void)_sendEvents:(id)arg1 secondEvent:(id)arg2;
- (void)_adoptLastErrorEvent:(id)arg1;
- (void)_splunkAccessSetup;
- (void)flushEvent;
- (_Bool)sendEvent:(id)arg1 toServerURL:(id)arg2;
- (_Bool)sendEvent:(id)arg1;
- (void)dealloc;
- (id)initWithDomain:(char *)arg1 storingToPath:(id)arg2;

@end

