//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DownloadAgentObserver-Protocol.h"
#import "ODRStoreIntegrationProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface ODRMobileStoreServices : NSObject <DownloadAgentObserver, ODRStoreIntegrationProtocol>
{
    NSMutableSet *_activeDownloadPIDs;
    NSRecursiveLock *_activeDownloadPIDsLock;
    NSMutableDictionary *_downloadProgress;
    NSRecursiveLock *_downloadProgressLock;
    NSMutableDictionary *_downloadRequests;
    NSRecursiveLock *_downloadRequestsLock;
}

+ (_Bool)_isInternetHostReachability:(id)arg1;
+ (unsigned long long)_bandwithLimitForHost:(id)arg1;
+ (id)_validDownloadKinds;
+ (_Bool)_isURLContentValid:(id)arg1 error:(id *)arg2;
+ (_Bool)isRefreshRequiredForURL:(id)arg1;
- (void).cxx_destruct;
- (id)_metricsURL;
- (struct __CFString *)_copyDeviceGUID;
- (id)_baseMetricsURLForTopic:(id)arg1;
- (long long)_totalBytesDownloadedForPID:(long long)arg1;
- (_Bool)_shouldFinishDownloadForDownloadState:(id)arg1;
- (void)_removePIDFromDownloadProgress:(long long)arg1;
- (void)_removePIDFromActiveDownloadPIDs:(long long)arg1;
- (void)_handleOrphanDownloadForPID:(long long)arg1 withDownloadState:(id)arg2;
- (id)_formattedDownloadProgressStringForPID:(long long)arg1;
- (_Bool)_fetchManifestResponseIsAuthenticationError:(id)arg1;
- (long long)_downloadURL:(id)arg1 toDestination:(id)arg2 usingStreamingZip:(_Bool)arg3 forClientWithBundleID:(id)arg4 attributionID:(id)arg5 priority:(double)arg6 isDiscretionary:(_Bool)arg7 diskUsage:(long long)arg8 downloadSize:(long long)arg9 hashingData:(id)arg10 preflight:(_Bool)arg11 tryCachingServer:(_Bool)arg12 jobID:(long long)arg13 metadata:(id)arg14 withCompletionBlock:(CDUnknownBlockType)arg15;
- (double)_downloadProgressForPID:(long long)arg1;
- (id)_downloadEntityForPID:(long long)arg1;
- (_Bool)_doesRequestRequireRefresh:(id)arg1;
- (void)_cleanupDownloadWithPID:(long long)arg1;
- (void)_asynchronouslyEnforceDiskSpaceCushion;
- (void)_addPIDToActiveDownloadPIDs:(long long)arg1;
- (id)_activeDownloads;
- (id)_activeDownloadPIDs;
- (void)updatePriorityOfRequest:(id)arg1;
- (void)_updateDownloadProgressForPID:(long long)arg1 withProgress:(double)arg2;
- (void)scanAndCleanQueue;
- (void)resumeRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)reportOnTopic:(id)arg1 withData:(id)arg2;
- (void)removeRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)pauseRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)currentDownloadRequestsForApplicationBundleID:(id)arg1;
- (void)cancelRequestsForApplicationWithBundleID:(id)arg1;
- (long long)addRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)addIntegrityHashingFromAssetPack:(id)arg1 toRequest:(id)arg2;
- (void)PID:(long long)arg1 didProgress:(double)arg2;
- (void)PID:(long long)arg1 didEnterState:(id)arg2;
- (id)status;
- (void)_addStatusForDownloadIdentifier:(long long)arg1 downloadRequests:(id)arg2 status:(id)arg3;
- (void)_addStatusForASDDownload:(id)arg1 status:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

