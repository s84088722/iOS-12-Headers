//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProtocolBuffer/NSURLSessionDataDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionTask, PBDataReader;
@protocol PBSessionRequesterDelegate;

@interface PBSessionRequester : NSObject <NSURLSessionDataDelegate>
{
    NSURL *_URL;
    id <PBSessionRequesterDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSURLSession *_session;
    NSURLSessionTask *_currentTask;
    NSOperationQueue *_sessionDelegateQ;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned long long _lastGoodDataOffset;
    unsigned long long _uploadPayloadSize;
    unsigned long long _downloadPayloadSize;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    long long _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSMutableDictionary *_httpRequestHeaders;
    double _timeoutSeconds;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    _Bool _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    _Bool _shouldHandleCookies;
    CDStruct_dca542ad _flags;
}

+ (_Bool)usesEncodedMessages;
@property(nonatomic) _Bool shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(readonly, nonatomic) unsigned long long downloadPayloadSize; // @synthesize downloadPayloadSize=_downloadPayloadSize;
@property(readonly, nonatomic) unsigned long long uploadPayloadSize; // @synthesize uploadPayloadSize=_uploadPayloadSize;
@property(retain, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;
@property(retain, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain, nonatomic) NSDictionary *httpResponseHeaders; // @synthesize httpResponseHeaders=_httpResponseHeaders;
@property(retain, nonatomic) NSURLSessionTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)startWithConnectionProperties:(id)arg1;
- (id)newSessionTaskOnSession:(id)arg1 withURLRequest:(id)arg2;
- (id)_newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)newMutableURLRequestWithURL:(id)arg1;
- (id)decodeResponseData:(id)arg1;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long requestResponseTime;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_tryParseData;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (_Bool)readResponsePreamble:(id)arg1;
- (void)cancelWithErrorCode:(long long)arg1;
- (void)cancelWithErrorCode:(long long)arg1 description:(id)arg2;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_failWithError:(id)arg1;
- (void)resume;
- (_Bool)isPaused;
- (void)pause;
- (void)cancel;
- (void)_performOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)_cancelNoNotify;
- (void)_start;
- (void)start;
- (void)_serializePayload:(CDUnknownBlockType)arg1;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (_Bool)_sendPayload:(id)arg1 error:(id *)arg2;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (id)requestPreamble;
- (id)_osVersion;
- (id)_applicationID;
- (id)_languageLocale;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)responseForInternalRequest:(id)arg1;
- (void)addInternalRequest:(id)arg1;
- (id)internalRequests;
- (id)responseForRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
@property(readonly, nonatomic) NSArray *requests;
- (void)setNeedsCancel;
@property _Bool needsCancel;
- (void)_didSetDelegate:(id)arg1;
@property(nonatomic) _Bool ignoresResponse;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)setDelegate:(id)arg1;
@property(readonly) __weak id <PBSessionRequesterDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

