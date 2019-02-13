//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSRecursiveLock, NSString, VMCarrierStateRequestController, VMTranscriptionService, VVVerifier;
@protocol OS_dispatch_queue, VMTelephonySubscription;

@interface VVService : NSObject
{
    NSRecursiveLock *_lock;
    int _mailboxUsage;
    double _trashCompactionAge;
    unsigned int _unreadCount;
    unsigned int _trashedCount;
    NSError *_passwordError;
    NSError *_activationError;
    NSString *_password;
    NSString *_passwordMailboxName;
    NSArray *_retryIntervals;
    int _retryIntervalIndex;
    id _carrierParameters;
    Class _notificationInterpreter;
    struct {
        unsigned int offline:1;
        unsigned int subscribed:1;
        unsigned int initialSetupRequired:1;
        unsigned int fakeInitialSetup:1;
        unsigned int launchedWithFakeInitialSetup:1;
        unsigned int mwiState:1;
        unsigned int notificationFallbackEnabled:1;
        unsigned int capabilitiesLoaded:1;
    } _serviceFlags;
    struct os_unfair_lock_s _accessorLock;
    NSMutableDictionary *_stateRequestAttemptCount;
    NSNumber *_SMSReadyState;
    NSString *_serviceIdentifier;
    NSString *_serviceDestinationID;
    VMTranscriptionService *_transcriptionService;
    VVVerifier *_verifier;
    id <VMTelephonySubscription> _subscription;
    unsigned long long _numFailedAttemptsToSyncOverWifi;
    struct __CFString *_lastConnectionTypeUsed;
    NSDictionary *_accountDictionary;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    VMCarrierStateRequestController *_stateRequestController;
}

+ (id)accountDictionaryForURL:(id)arg1;
+ (void)releaseInsomniaAssertion;
+ (void)obtainInsomniaAssertion;
+ (void)_setInsomniaStateSupressed:(_Bool)arg1;
+ (void)_acquireAssertionsForInsomniaState:(_Bool)arg1;
+ (unsigned int)_voicemailPowerAssertion;
+ (struct __CTServerConnection *)CTServerConnection;
+ (_Bool)sharedServiceIsSubscribed;
+ (_Bool)_lockedSharedServiceIsSubscribed;
+ (id)serviceWithIdentifier:(id)arg1 subscription:(id)arg2 stateRequestController:(id)arg3;
+ (void)_subscriptionStateChanged;
+ (void)initialize;
@property(readonly, nonatomic) VMCarrierStateRequestController *stateRequestController; // @synthesize stateRequestController=_stateRequestController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(retain, nonatomic) NSDictionary *accountDictionary; // @synthesize accountDictionary=_accountDictionary;
@property(nonatomic) struct __CFString *lastConnectionTypeUsed; // @synthesize lastConnectionTypeUsed=_lastConnectionTypeUsed;
@property(nonatomic) unsigned long long numFailedAttemptsToSyncOverWifi; // @synthesize numFailedAttemptsToSyncOverWifi=_numFailedAttemptsToSyncOverWifi;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) id <VMTelephonySubscription> subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) VVVerifier *verifier; // @synthesize verifier=_verifier;
@property(retain, nonatomic) VMTranscriptionService *transcriptionService; // @synthesize transcriptionService=_transcriptionService;
@property(copy, nonatomic) NSString *serviceDestinationID; // @synthesize serviceDestinationID=_serviceDestinationID;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSMutableDictionary *stateRequestAttemptCount; // @synthesize stateRequestAttemptCount=_stateRequestAttemptCount;
- (void)removeAttemptCountForStateRequest:(id)arg1;
- (void)incrementAttemptCountForStateRequest:(id)arg1;
- (long long)attemptCountForStateRequest:(id)arg1;
- (void)handleVVServiceDataAvailableNotification:(id)arg1;
- (void)handleVoicemailInfoUpdate:(id)arg1;
- (struct __CFString *)dataConnectionServiceTypeOverride;
- (void)scheduleImmediateSynchronizeRetryOverCellular;
- (_Bool)lastUsedConnectionTypeWasCellular;
- (void)setLastUsedConnectionType:(struct __CFString *)arg1;
- (_Bool)shouldImmediatelyRetrySyncOverCellular;
- (void)reportSucessfulSync;
- (void)reportFailedToSyncOverWifi;
- (void)_attemptScheduledTrashCompaction:(id)arg1;
- (void)_cancelAutomatedTrashCompaction;
- (void)cancelAutomatedTrashCompaction;
- (void)_scheduleAutomatedTrashCompaction;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (id)retryIntervals;
- (void)_attemptDelayedSynchronize;
- (void)resetDelayedSynchronizationAttemptCount;
- (void)cancelDelayedSynchronize;
- (void)reportError:(id)arg1;
- (void)moveRecordsWithIdentifiersToInbox:(id)arg1;
- (void)moveRecordsWithIdentifiersToTrash:(id)arg1;
- (void)setGreetingType:(long long)arg1 data:(id)arg2 duration:(unsigned long long)arg3 forAccountUUID:(id)arg4;
- (_Bool)greetingAvailable;
- (void)retrieveGreetingForAccountUUID:(id)arg1;
- (void)setPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearRemoteUIDsForDetachedMessages;
- (void)retrieveDataForRecord:(void *)arg1;
- (void)synchronize:(_Bool)arg1;
- (_Bool)isSyncInProgress;
- (_Bool)greetingFetchExistsProgressiveLoadInProgress:(_Bool *)arg1;
- (_Bool)synchronizationPending;
- (_Bool)headerChangesPending;
- (_Bool)dataForRecordPending:(void *)arg1 progressiveLoadInProgress:(_Bool *)arg2;
- (void)progressiveDataLengthsForRecord:(void *)arg1 expected:(unsigned int *)arg2 current:(unsigned int *)arg3;
- (_Bool)taskOfTypeExists:(long long)arg1;
- (_Bool)shouldScheduleAutoTrashOnMailboxUsageChange;
- (_Bool)doesClientManageTrashCompaction;
- (id)carrierParameterValueForKey:(id)arg1;
- (long long)mailboxGreetingType;
- (_Bool)passwordChangeRequiresEnteringOldPassword;
- (int)maximumPasswordLength;
- (int)minimumPasswordLength;
- (int)maximumRecordedNameDuration;
- (void)cancelPasswordRequest;
- (void)displayPasswordRequestIfNecessary;
- (void)handlePasswordRequestCancellation;
- (id)provisionalPassword;
- (void)setProvisionalPassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)passwordIgnoringSubscription:(_Bool)arg1;
- (id)password;
- (_Bool)isPasswordReady;
- (void)_handleIndicatorNotification:(struct __CFDictionary *)arg1;
- (_Bool)respectsMWINotifications;
- (void)handleNotification:(id)arg1 isMWI:(_Bool)arg2;
- (Class)notificationInterpreterClass;
- (void)_cancelIndicatorAction;
- (void)_reactToIndicator;
- (void)setMessageWaiting:(_Bool)arg1;
- (_Bool)isMessageWaiting;
- (_Bool)isInSync;
- (void)_scheduleFallbackActivityIfNecessary;
- (void)_enterFallbackMode;
- (void)_deliverFallbackNotification;
- (void)cancelNotificationFallback;
- (void)_handleSMSCAvailable;
- (void)clearActivationError;
- (id)activationError;
- (void)_setActivationError:(id)arg1;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_updateOnlineStatus;
- (_Bool)isOfflineDueToRoaming;
- (_Bool)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary *)arg1;
- (struct __CFString *)connectionServiceType;
- (void)setOnline:(_Bool)arg1;
- (void)_setOnline:(_Bool)arg1 fallbackMode:(_Bool)arg2;
- (_Bool)isOnline;
@property(retain, nonatomic) NSNumber *SMSReadyState; // @synthesize SMSReadyState=_SMSReadyState;
- (void)updateLoggingSettings;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)resetCounts;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)setTrashedCount:(unsigned int)arg1;
- (unsigned int)trashedCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (unsigned int)unreadCount;
- (void)setMailboxUsage:(int)arg1;
- (int)mailboxUsage;
- (_Bool)sharedSubscriptionRequiresSetup;
- (void)setMailboxRequiresSetup:(_Bool)arg1;
- (_Bool)mailboxRequiresSetup;
- (id)mailboxName;
- (void)kill;
- (void)setSubscribed:(_Bool)arg1;
- (id)accountParamsAtFilePath:(id)arg1;
- (id)parametersFilePathForUUIDString:(id)arg1;
- (_Bool)isVVMAvailableOverWiFi;
- (_Bool)isSubscribed;
- (void)dealloc;
- (id)initWithServiceIdentifier:(id)arg1 subscription:(id)arg2 stateRequestController:(id)arg3;
- (void)_callStatusChanged;
- (void)_carrierBundleChanged;
- (void)handleDataContextDeactivated;
- (void)_dataAvailabilityChanged;
- (void)_dataRoamingStatusChanged;
- (_Bool)doTrashCompaction;
- (_Bool)shouldTrashCompactRecord:(void *)arg1;
- (double)trashCompactionAge;

@end

