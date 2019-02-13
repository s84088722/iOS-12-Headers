//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HDActivitySummaryQueryHelper, HDSQLitePredicate;

@interface HDActivitySummaryQueryServer : HDQueryServer
{
    _Bool _deliversUpdates;
    long long _lastProcessedAnchor;
    HDSQLitePredicate *_filterPredicate;
    HDActivitySummaryQueryHelper *_queryHelper;
    _Bool _shouldIncludeActivitySummaryPrivateProperties;
    _Bool _shouldIncludeActivitySummaryStatistics;
    _Bool _hasSentInitialResults;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
- (void).cxx_destruct;
- (void)_setUpInitialQueryHelper;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 error:(id)arg2;
- (void)_queue_stop;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end

