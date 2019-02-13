//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPTopicReadOnlyServerProtocol-Protocol.h>

@class NSString, PPBundleIdResolver, PPXPCServerPipelinedBatchQueryManager;
@protocol PPTopicClientProtocol;

@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol>
{
    id <PPTopicClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    PPBundleIdResolver *_bundleIdResolver;
}

@property(retain, nonatomic) PPBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void).cxx_destruct;
- (void)feedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2;
- (void)feedbackTopicsOverallEngagement:(id)arg1;
- (void)feedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackEngagedTopics:(id)arg1;
- (void)feedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackUsedTopics:(id)arg1;
- (void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
- (void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end

