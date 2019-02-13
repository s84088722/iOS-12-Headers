//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSURLSessionTaskDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface PKWebService : NSObject <NSURLSessionTaskDelegate>
{
    ACAccountStore *_accountStore;
    unsigned long long _taskIDCounter;
    NSString *_webServiceSessionMarker;
    NSOperationQueue *_delegateOperationQueue;
    NSMutableDictionary *_webServiceTasks;
    NSMutableDictionary *_diagnosticReasonsByTaskID;
    NSMutableArray *_diagnosticReasons;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_diagnosticReasonsQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

+ (id)_sharedCookieStorage;
+ (id)account;
- (void).cxx_destruct;
- (void)logResponse:(id)arg1 withData:(id)arg2;
- (void)logRequest:(id)arg1;
- (id)logFacility;
- (id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg1 forTaskID:(unsigned long long)arg2;
- (void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)arg1;
- (void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)arg1;
- (void)removeDiagnosticReason:(id)arg1;
- (void)addDiagnosticReason:(id)arg1;
- (void)diagnosticSessionWithReason:(id)arg1 sessionHandler:(CDUnknownBlockType)arg2;
- (id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg1;
- (void)resetWebServiceSessionMarker;
@property(readonly, nonatomic) NSString *webServiceSessionMarker;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_trustPassesExtendedValidation:(struct __SecTrust *)arg1;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (id)_accountStore;
- (void)setUrlSession:(id)arg1;
- (id)urlSession;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)webServiceTaskIdentifierForTaskIdentifier:(long long)arg1;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)nextTaskID;
- (void)refreshSessionWithConfiguration:(id)arg1;
@property(readonly) NSURLSessionConfiguration *sessionConfiguration;
- (void)invalidate;
@property(readonly) ACAccount *primaryAppleAccount;
@property(readonly) ACAccount *account;
- (void)handleAuthenticationFailureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (_Bool)canBypassTrustExtendedValidation;
- (void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

