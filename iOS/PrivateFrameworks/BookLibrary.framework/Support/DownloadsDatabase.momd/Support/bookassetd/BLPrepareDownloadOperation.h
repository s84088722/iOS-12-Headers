//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISURLOperationDelegate-Protocol.h"

@class BLDownload, NSNumber, NSString, SSDownloadPolicy;

__attribute__((visibility("hidden")))
@interface BLPrepareDownloadOperation : ISOperation <ISURLOperationDelegate>
{
    CDUnknownBlockType _outputBlock;
    SSDownloadPolicy *_policy;
    BLDownload *_download;
}

+ (long long)_URLSessionTaskPriorityForDownloadPriority:(long long)arg1;
+ (long long)_URLSessionTaskPriorityForDownload:(id)arg1;
+ (id)_newDownloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
+ (_Bool)_isDTServiceHubIssuedRequest:(id)arg1;
+ (void)enumerateOperationsWithDownloads:(id)arg1 downloadPolicyManager:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) BLDownload *download; // @synthesize download=_download;
@property(retain, nonatomic) SSDownloadPolicy *policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (_Bool)_usesStreamingZipDataConsumerForAsset:(id)arg1;
- (double)_transferProgressFractionWithAsset:(id)arg1;
- (_Bool)_shouldFailForDiskSpaceWithAsset:(id)arg1 dataConsumer:(id)arg2;
- (_Bool)_shouldCancelDownload;
- (_Bool)_sendsStoreHeadersForAsset;
- (_Bool)_requiresPoweredPluggedIn;
- (id)_newURLRequestWithAsset:(id)arg1;
- (id)_newDataConsumerWithAsset:(id)arg1 destinationPath:(id)arg2;
- (long long)_loadSizeIfNecessaryForAsset:(id)arg1;
- (id)_downloadKeyCookieWithAsset:(id)arg1;
- (id)_clientIdentifier;
- (void)dq_action_requestCachedURL;
- (long long)_assetSizeFromURLResponse:(id)arg1;
- (_Bool)_assetNeedsDecryption:(id)arg1;
- (_Bool)_allowsCellularAccessForAsset:(id)arg1;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (long long)operation:(id)arg1 dispositionForAuthenticationChallenge:(id)arg2;
- (void)run;
@property(copy) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(readonly, nonatomic) NSString *downloadIdentifier;
- (id)_initWithDownload:(id)arg1 policy:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

