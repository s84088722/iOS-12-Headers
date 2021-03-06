//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XPCClient.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface JobManagerClient : XPCClient
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_persistenceIdentifier;
    NSMutableOrderedSet *_queuedChangedJobs;
    NSMutableOrderedSet *_queuedCompletedJobs;
    NSMutableDictionary *_queuedCompletedJobsPhases;
    NSMutableDictionary *_queuedProgressUpdates;
    NSMutableDictionary *_queuedStateUpdates;
    _Bool _shouldFilterExternalJobs;
    _Bool _shouldReportDownloadProgress;
    _Bool _shouldFilterExternalDownloads;
}

@property _Bool shouldFilterExternalDownloads; // @synthesize shouldFilterExternalDownloads=_shouldFilterExternalDownloads;
- (void).cxx_destruct;
- (void)_sendJobProgressUpdated:(id)arg1;
- (void)_sendJobStatesUpdated:(id)arg1;
- (void)_sendJobsCompleted:(id)arg1 finalPhases:(id)arg2;
- (void)_sendJobsChanged:(id)arg1;
- (void)_dequeuePendingStateUpdates;
- (void)_dequeuePendingProgressUpdates;
- (void)_dequeuePendingJobsCompleted;
- (void)_dequeuePendingJobChanges;
- (_Bool)shouldFilterExternalJobs;
- (void)setShouldFilterExternalJobs:(_Bool)arg1;
@property(copy) NSString *persistenceIdentifier;
- (void)setOptions:(id)arg1;
- (void)sendJobProgressUpdated:(id)arg1;
- (void)sendJobStatesUpdated:(id)arg1;
- (void)sendJobsCompleted:(id)arg1 finalPhases:(id)arg2;
- (void)sendJobsChanged:(id)arg1;
- (_Bool)reloadPersistenceStateInDatabase:(id)arg1;
- (id)persistentJobManagerInDatabase:(id)arg1;
- (id)jobsQueryInDatabase:(id)arg1;
- (_Bool)canAccessJob:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

