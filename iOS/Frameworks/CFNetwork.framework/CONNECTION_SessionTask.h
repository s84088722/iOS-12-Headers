//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableURLRequest, NSString, NSURLRequest, __NSCFURLSession;

__attribute__((visibility("hidden")))
@interface CONNECTION_SessionTask : NSObject
{
    struct _CFURLRequest *_originalRequest;
    struct _CFURLRequest *_currentRequest;
    struct __CFDictionary *_connectionProperties;
    struct __CFDictionary *_socketProperties;
    NSMutableURLRequest *_nsCurrentRequest;
    NSURLRequest *_nsOriginalRequest;
    __NSCFURLSession *_session;
    NSString *_uniqueIdentifier;
    _Bool _is_cellular;
    Class _my_protocolForTask;
    struct __PerformanceTiming *__performanceTiming;
    _Bool __shouldSkipPreferredClientCertificateLookup;
    struct __CFDictionary *__atsContext;
    NSMutableArray *_transactionMetrics;
    struct os_unfair_lock_s _unfair_lock;
}

- (_Bool)_isTopLevelNavigation;
- (id)_siteForCookies;
- (id)_nw_activity;
- (id)_APSRelayTopic;
- (id)_incompleteTaskMetrics;
- (void)set_incompleteTaskMetrics:(id)arg1;
- (_Bool)_preconnect;
- (void)set_preconnect:(_Bool)arg1;
- (void)_consumePendingBytesReceivedEncoded;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (long long)_discretionaryOverrride;
- (void)set_discretionaryOverride:(long long)arg1;
- (_Bool)_allowsQUIC;
- (void)set_allowsQUIC:(_Bool)arg1;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;
- (void)set_TCPConnectionMetadata:(id)arg1;
- (id)_transactionMetrics;
- (void)_prepareNewTimingDataContainer;
- (id)_storagePartitionIdentifier;
- (void)set_trailers:(id)arg1;
- (id)_trailers;
- (unsigned short)_TLSNegotiatedCipherSuite;
- (const struct __CFData **)_TCPConnectionMetadata;
- (const struct __CFDictionary **)_DuetActivityProperties;
- (struct __CFDictionary *)_dependencyInfo;
- (struct __CFDictionary *)_copyATSState;
- (struct __CFSet *)_getAuthenticatorStatusCodes;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setAppleIDContext:(id)arg1;
- (_Bool)_requiresSecureHTTPSProxyConnection;
- (_Bool)_preventsSystemHTTPProxyAuthentication;
- (_Bool)_cacheOnly;
- (_Bool)_shouldSkipPreferredClientCertificateLookup;
- (id)_protocolForTask;
- (void)set_protocolForTask:(id)arg1;
- (void)_setConnectionIsCellular:(_Bool)arg1;
- (float)priority;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (double)_timeoutInterval;
- (long long)_bytesPerSecondLimit;
- (long long)_suspensionThreshhold;
- (unsigned char)_strictContentLength;
- (struct __CFDictionary *)_sslSettings;
- (unsigned char)_shouldUsePipelineHeuristics;
- (unsigned char)_shouldSkipPipelineProbe;
- (unsigned char)_shouldPipelineHTTP;
- (long long)_requestPriority;
- (struct __CFDictionary *)_proxySettings;
- (unsigned char)_preventsIdleSystemSleep;
- (int)_cachePolicy;
- (unsigned long long)_allowedProtocolTypes;
- (id)_timeWindowDuration;
- (id)_timeWindowDelay;
- (id)_expectedWorkload;
- (id)_disallowCellular;
- (id)_boundInterfaceIdentifier;
- (id)_prohibitAuthUI;
- (id)_networkServiceType;
- (id)_allowsCellular;
- (id)_contentDispositionFallbackArray;
- (id)_shouldHandleCookies;
- (id)_cfCookies;
- (id)_cfCreds;
- (id)_cfCache;
- (id)_cfHSTS;
- (id)_backgroundTaskTimingData;
- (int)_cookieAcceptPolicy;
- (_Bool)hasExtractor;
- (id)_connectionPropertyDuet;
- (struct __PerformanceTiming *)_performanceTiming;
- (id)_priorityValue;
- (id)startTime;
- (id)error;
- (id)state;
- (id)countOfBytesExpectedToReceive;
- (id)countOfBytesExpectedToSend;
- (id)countOfBytesSent;
- (id)_countOfBytesReceivedEncoded;
- (id)_countOfPendingBytesReceivedEncoded;
- (id)countOfBytesReceived;
- (id)taskIdentifier;
- (struct __CFURL *)currentRequest_mainDocumentURL;
- (struct __CFURL *)currentRequest_URL;
- (id)originalRequest;
- (id)currentRequest;
- (struct _CFURLRequest *)_currentCFURLRequest;
- (id)workQueue;
- (id)session;
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XCookieStorage *)_createXCookieStorage;
- (void)_withXURLCache:(CDUnknownBlockType)arg1;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_processConnectionProperties;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_loggableDescription;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (void)updateCurrentRequest:(id)arg1;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (void)dealloc;
- (id)initWithRequest:(struct _CFURLRequest *)arg1 mutableCurrent:(struct _CFURLRequest *)arg2 connProps:(struct __CFDictionary *)arg3 sockProps:(struct __CFDictionary *)arg4 session:(id)arg5;

@end
