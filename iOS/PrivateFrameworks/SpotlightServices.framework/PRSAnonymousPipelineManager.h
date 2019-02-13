//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source, SFFeedbackListener;

@interface PRSAnonymousPipelineManager : NSObject
{
    _Bool _debugEnabled;
    _Bool _isInternalDevice;
    _Bool _submissionEnabled;
    NSUserDefaults *_userDefaults;
    NSString *_lastTopHitQueryString;
    NSArray *_lastTopHitQueryItems;
    NSObject<OS_dispatch_source> *_topHitDataCollectionTimer;
    NSObject<OS_dispatch_queue> *_queue;
    id <SFFeedbackListener> _delegate;
}

+ (id)submitttedSpotlightReportsError:(id *)arg1;
+ (id)engagementCountKeyForBundle:(id)arg1;
+ (_Bool)_dataCollectionAllowedForBundle:(id)arg1;
+ (id)whitelistedBundles;
+ (id)dateFromFileURL:(id)arg1;
+ (id)dateFormatter;
+ (id)candidateLogsURLForBundle:(id)arg1;
+ (id)candidateLogsBasePath;
+ (id)submittedLogsURL;
+ (id)submittedLogsURLForUser:(id)arg1;
+ (id)logURLForCurrentTimeAndBundle:(id)arg1;
+ (id)relativePositionKey;
+ (id)sharedManager;
@property(retain, nonatomic) id <SFFeedbackListener> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool submissionEnabled; // @synthesize submissionEnabled=_submissionEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *topHitDataCollectionTimer; // @synthesize topHitDataCollectionTimer=_topHitDataCollectionTimer;
@property(retain, nonatomic) NSArray *lastTopHitQueryItems; // @synthesize lastTopHitQueryItems=_lastTopHitQueryItems;
@property(retain, nonatomic) NSString *lastTopHitQueryString; // @synthesize lastTopHitQueryString=_lastTopHitQueryString;
@property _Bool isInternalDevice; // @synthesize isInternalDevice=_isInternalDevice;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property _Bool debugEnabled; // @synthesize debugEnabled=_debugEnabled;
- (void).cxx_destruct;
- (void)setFeedbackDelegate:(id)arg1;
- (void)userEngagedItemWithIdentifier:(id)arg1 forBundle:(id)arg2 forQuery:(id)arg3;
- (void)queryWillFinishWithItems:(id)arg1 forClient:(id)arg2 forQuery:(id)arg3 anonymousDataCollectionAllowed:(_Bool)arg4;
- (void)cleanUp;
- (id)retrieveFeedbackURLToSendInDirectory:(id)arg1;
- (void)deleteExpiredSubmittedLogs;
- (void)deleteCandidateLogs;
- (_Bool)dateIsExpired:(id)arg1;
- (void)_extractTrainingSamplesForQuery:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2 withItems:(id)arg3 withCEPData:(id)arg4 forClientBundle:(id)arg5 keyboardPrimaryLanguage:(id)arg6;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(_Bool)arg4 queryID:(id)arg5 withCEPData:(id)arg6 forClientBundle:(id)arg7 keyboardPrimaryLanguage:(id)arg8;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(_Bool)arg4 forClientBundle:(id)arg5 keyboardPrimaryLanguage:(id)arg6;
- (_Bool)_shouldDataCollectWithEngagedBundle:(id)arg1 withQueryId:(id)arg2 forClientBundle:(id)arg3;
- (void)_updateUserDefaultsWithEngagedBundle:(id)arg1 andQueryID:(id)arg2 forClientBundle:(id)arg3;
- (void)_increaseUserDefaultsEngagementCountForBundle:(id)arg1;
- (void)_addQueryInfoToJSONWriter:(struct json_writer *)arg1 withQuery:(id)arg2 cepData:(id)arg3 forClient:(id)arg4 keyboardPrimaryLanguage:(id)arg5;
- (void)_addRelativePositionToFeatureDict:(id)arg1 relativePosition:(id)arg2 forItem:(id)arg3;
- (id)_relativePositionForItem:(id)arg1 inItems:(id)arg2 withIndexOfEngagedItem:(long long)arg3;
- (id)_abandonedItemsFromItems:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2;
- (void)registerXPCActivity;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendMLFeedbackActivity:(id)arg1;
- (id)init;

@end

