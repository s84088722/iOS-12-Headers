//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/SFCompanionAdvertiserDelegate-Protocol.h>

@class CSSearchableItemAttributeSet, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL, NSUUID, NSUserActivity, SFCompanionAdvertiser, UAUserActivityManager;
@protocol OS_dispatch_group, OS_dispatch_queue, UAUserActivityDelegate;

@interface UAUserActivity : NSObject <SFCompanionAdvertiserDelegate>
{
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    NSURL *_referrerURL;
    SFCompanionAdvertiser *_advertiser;
    NSObject<OS_dispatch_group> *_advertiserCompletedGroup;
    SFCompanionAdvertiser *_resumerAdvertiser;
    NSMutableSet *_dirtyPayloadIdentifiers;
    double _lastSaveTime;
    _Bool _saveScheduled;
    _Bool _createsNewUUIDIfSaved;
    NSError *_decodeUserInfoError;
    _Bool _needsSave;
    _Bool _needsSaveValueAtEndOfWillSaveCallback;
    _Bool _dirty;
    _Bool _sendToServerPending;
    _Bool _activityHasBeenSentToServer;
    _Bool _supportsContinuationStreams;
    _Bool _forceImmediateSendToServer;
    _Bool _encodedContainsUnsynchronizedCloudDocument;
    _Bool _encodedFileProviderURL;
    _Bool _userActivityWasCreatedSent;
    _Bool _indexInProcess;
    long long _inWillSaveCallback;
    NSDate *_expirationDate;
    NSString *_contentUserAction;
    NSString *_teamIdentifier;
    unsigned long long _os_state_handler;
    int _forwardToCoreSpotlightIndexerCount;
    _Bool _eligibleForHandoff;
    _Bool _eligibleForSearch;
    _Bool _eligibleForReminders;
    _Bool _eligibleForPublicIndexing;
    _Bool _eligibleForPrediction;
    NSString *_persistentIdentifier;
    id <UAUserActivityDelegate> _delegate;
    unsigned int _userInfoChangeCount;
    NSDictionary *_savedUserInfo;
    _Bool _invalidated;
    _Bool _userInfoContainsFileURLs;
    _Bool _canCreateStreams;
    NSData *_cachedEncodedUserInfo;
    NSSet *_keywords;
    NSSet *_requiredUserInfoKeys;
    NSDictionary *_userInfo;
    UAUserActivityManager *_manager;
    NSString *_typeIdentifier;
    NSString *_dynamicIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _suggestedActionType;
    NSDictionary *_options;
    NSUUID *_originalUniqueIdentifier;
    NSMutableDictionary *_payloadObjects;
    NSMutableDictionary *_payloadUpdateBlocks;
    NSMutableDictionary *_payloadDataCache;
    NSObject<OS_dispatch_queue> *_willCallSaveSerializationQueue;
}

+ (void)removeUserActivityObserver:(id)arg1;
+ (void)addUserActivityObserver:(id)arg1;
+ (id)observers;
+ (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (id)fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)userActivityFromUUID:(id)arg1 withError:(id *)arg2;
+ (id)userActivityFromUUID:(id)arg1 timeout:(double)arg2 withError:(id *)arg3;
+ (_Bool)userActivityContinuationSupported;
+ (void)setIndexPending:(_Bool)arg1 forUUID:(id)arg2;
+ (_Bool)isIndexPendingForUUID:(id)arg1;
+ (_Bool)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(_Bool)arg3;
+ (id)allowedWebpageURLSchemes;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)currentUserActivityUUID;
+ (_Bool)supportsUserActivityAppLinks;
+ (id)_decodeFromEntireString:(id)arg1;
+ (id)_decodeFromString:(id)arg1;
+ (id)_decodeFromScanner:(id)arg1;
+ (id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2;
+ (id)_encodeToString:(id)arg1;
+ (_Bool)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)deleteAllSavedUserActivitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)mainBundleIdentifier;
@property(readonly, retain) NSObject<OS_dispatch_queue> *willCallSaveSerializationQueue; // @synthesize willCallSaveSerializationQueue=_willCallSaveSerializationQueue;
@property(retain) NSMutableSet *dirtyPayloadIdentifiers; // @synthesize dirtyPayloadIdentifiers=_dirtyPayloadIdentifiers;
@property(retain) NSMutableDictionary *payloadDataCache; // @synthesize payloadDataCache=_payloadDataCache;
@property(retain) NSMutableDictionary *payloadUpdateBlocks; // @synthesize payloadUpdateBlocks=_payloadUpdateBlocks;
@property(retain) NSMutableDictionary *payloadObjects; // @synthesize payloadObjects=_payloadObjects;
@property(readonly, copy) NSUUID *originalUniqueIdentifier; // @synthesize originalUniqueIdentifier=_originalUniqueIdentifier;
@property _Bool canCreateStreams; // @synthesize canCreateStreams=_canCreateStreams;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly) unsigned long long suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property(copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly) __weak UAUserActivityManager *manager; // @synthesize manager=_manager;
@property(copy) NSSet *requiredUserInfoKeys; // @synthesize requiredUserInfoKeys=_requiredUserInfoKeys;
@property(copy) NSSet *keywords; // @synthesize keywords=_keywords;
@property _Bool userInfoContainsFileURLs; // @synthesize userInfoContainsFileURLs=_userInfoContainsFileURLs;
@property(readonly) unsigned long long os_state_handler; // @synthesize os_state_handler=_os_state_handler;
@property(copy) NSData *cachedEncodedUserInfo; // @synthesize cachedEncodedUserInfo=_cachedEncodedUserInfo;
@property(readonly) _Bool activityHasBeenSentToServer; // @synthesize activityHasBeenSentToServer=_activityHasBeenSentToServer;
@property _Bool encodedContainsUnsynchronizedCloudDocument; // @synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument;
@property _Bool encodedFileProviderURL; // @synthesize encodedFileProviderURL=_encodedFileProviderURL;
@property(retain) NSError *decodeUserInfoError; // @synthesize decodeUserInfoError=_decodeUserInfoError;
@property _Bool createsNewUUIDIfSaved; // @synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved;
@property _Bool forceImmediateSendToServer; // @synthesize forceImmediateSendToServer=_forceImmediateSendToServer;
@property _Bool sendToServerPending; // @synthesize sendToServerPending=_sendToServerPending;
@property(copy) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
- (void).cxx_destruct;
- (id)stateString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (void)pinUserActivityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)decodeUserInfo:(id)arg1;
- (id)encodeUserInfo:(id)arg1;
- (id)encodeUserInfo:(id)arg1 error:(id *)arg2;
- (_Bool)encodeUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)unarchiveURL:(id)arg1 error:(id *)arg2;
- (_Bool)archiveURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
@property(readonly, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)resignCurrent;
- (void)_resignCurrent;
- (void)becomeCurrent;
- (void)getContinuationStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property id <UAUserActivityDelegate> delegate; // @dynamic delegate;
@property _Bool supportsContinuationStreams; // @dynamic supportsContinuationStreams;
@property(copy) NSData *streamsData;
@property __weak NSUserActivity *parentUserActivity;
- (id)teamID;
@property _Bool needsSave; // @dynamic needsSave;
@property _Bool dirty; // @dynamic dirty;
@property(copy) NSURL *referrerURL; // @dynamic referrerURL;
@property(copy) NSURL *webpageURL; // @dynamic webpageURL;
- (void)_setWebpageURL:(id)arg1 throwOnFailure:(_Bool)arg2;
- (_Bool)finishUserInfoUpdate;
- (unsigned long long)beginUserInfoUpdate:(id)arg1;
@property(readonly) unsigned long long userInfoChangeCount;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *title; // @dynamic title;
- (void)dealloc;
- (id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)init;
- (void)removeContentAttribute:(id)arg1;
- (void)addContentAttribute:(id)arg1 forKey:(id)arg2;
- (void)setContentAttributes:(id)arg1;
- (id)contentAttributes;
- (void)setContentType:(id)arg1;
- (id)contentType;
@property(copy) NSString *subtitle; // @dynamic subtitle;
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)displayInDtrace;
- (long long)priority;
- (void)sendUserActivityInfoToLSUserActivityd:(_Bool)arg1 onAsyncQueue:(_Bool)arg2;
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(_Bool)arg1 clearDirty:(_Bool)arg2;
- (id)userActivityInfoForSelfWithPayload:(_Bool)arg1;
- (id)userActivityInfoForSelf;
- (void)scheduleSendUserActivityInfoToLSUserActivityd;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeUserActivity;
- (void)willSynchronizeUserActivityWithHandler:(CDUnknownBlockType)arg1;
- (void)tellDaemonAboutNewLSUserActivity;
- (id)copyWithNewUUID:(_Bool)arg1;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;
@property(getter=isEligibleForPublicIndexing) _Bool eligibleForPublicIndexing; // @dynamic eligibleForPublicIndexing;
@property(getter=isEligibleForReminders) _Bool eligibleForReminders; // @dynamic eligibleForReminders;
@property(getter=isEligibleForSearch) _Bool eligibleForSearch; // @dynamic eligibleForSearch;
@property(getter=isEligibleForHandoff) _Bool eligibleForHandoff; // @dynamic eligibleForHandoff;
- (void)addKeywordsFromArray:(id)arg1;
@property(copy) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy) NSString *contentIdentifier; // @dynamic contentIdentifier;
@property(copy) NSString *contentUserAction; // @dynamic contentUserAction;
- (_Bool)createUserActivityDataWithSaving:(_Bool)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_encodeIntoUserActivityDataWithSave:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)createUserActivityStringsWithSaving:(_Bool)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_encodeIntoUserActivityStringWithSave:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserActivityData:(id)arg1 options:(id)arg2;
- (id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4;
- (void)indexActivity:(double)arg1 forceIndexing:(_Bool)arg2;
- (void)sendToCoreSpotlightIndexer;
- (void)updateForwardToCoreSpotlightIndexer:(BOOL)arg1;
@property(readonly) _Bool forwardToCoreSpotlightIndexer;
@property(copy) CSSearchableItemAttributeSet *contentAttributeSet; // @dynamic contentAttributeSet;
@property(copy) NSString *persistentIdentifier;
@property(getter=isEligibleForPrediction) _Bool eligibleForPrediction; // @dynamic eligibleForPrediction;
- (void)setDirty:(_Bool)arg1 identifier:(id)arg2;
- (_Bool)isPayloadDirty:(id)arg1;
- (CDUnknownBlockType)payloadUpdateBlockForIdentifier:(id)arg1;
- (void)setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;
- (void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (id)payloadForIdentifier:(id)arg1;
- (id)objectForIdentifier:(id)arg1;
- (id)payloadIdentifiers;

// Remaining properties
@property(readonly) Class superclass;

@end

