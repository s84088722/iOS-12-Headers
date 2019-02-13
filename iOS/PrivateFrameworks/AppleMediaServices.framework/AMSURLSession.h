//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSURLSessionDataDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionTaskDelegate-Protocol.h>

@class AMSURLSecurityPolicy, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol AMSRequestEncoding, AMSResponseDecoding, AMSURLHandling, NSURLSessionDelegate><AMSURLProtocolDelegate;

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    id <AMSURLHandling> _protocolHandler;
    NSURLSessionConfiguration *_configuration;
    id <NSURLSessionDelegate><AMSURLProtocolDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    id <AMSRequestEncoding> _requestEncoder;
    id <AMSResponseDecoding> _responseDecoder;
    AMSURLSecurityPolicy *_securityPolicy;
    NSURLSession *_session;
}

+ (id)sharedAuthKitSession;
+ (id)defaultSession;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AMSURLSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) id <AMSResponseDecoding> responseDecoder; // @synthesize responseDecoder=_responseDecoder;
@property(retain, nonatomic) id <AMSRequestEncoding> requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(readonly, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <NSURLSessionDelegate><AMSURLProtocolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)_prepareTaskWithRequest:(id)arg1 properties:(id)arg2;
- (void)_retryTask:(id)arg1 action:(id)arg2 error:(id *)arg3;
- (void)_handleURLAction:(id)arg1 task:(id)arg2 error:(id *)arg3;
- (id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3;
- (id)dataTaskPromiseWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithRequest:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
@property(retain, nonatomic) id <AMSURLHandling> protocolHandler;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

