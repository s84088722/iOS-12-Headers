//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXIDSSocketManagerDelegateProtocol-Protocol.h"

@class ACXPowerAssertion, ACXStreamingZipSocketSender, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface ACXServerInstallOperation : NSObject <ACXIDSSocketManagerDelegateProtocol>
{
    _Bool _installPlaceholder;
    _Bool _isUserInitiated;
    _Bool _acquiredSocket;
    unsigned char _nextMessageType;
    _Bool _cancelled;
    _Bool _gotTransferDone;
    _Bool _gotStreamingZipComplete;
    NSString *_companionAppBundleID;
    NSString *_watchAppBundleID;
    CDUnknownBlockType _progressBlock;
    NSDictionary *_appSettingsDict;
    NSDictionary *_provisioningProfiles;
    id _requiredDeviceCapabilities;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
    unsigned long long _lastPhase;
    double _lastPercentComplete;
    NSURL *_tempDir;
    ACXStreamingZipSocketSender *_streamingZipSender;
    NSURL *_snapshotURL;
    NSObject<OS_os_transaction> *_transaction;
    ACXPowerAssertion *_powerAssertion;
    NSObject<OS_dispatch_source> *_operationWatchdog;
    unsigned long long _transferSize;
    unsigned long long _transferStartTime;
}

+ (id)installOperationForCompanionAppBundleIdentifier:(id)arg1 watchAppBundleIdentifier:(id)arg2;
@property _Bool gotStreamingZipComplete; // @synthesize gotStreamingZipComplete=_gotStreamingZipComplete;
@property _Bool gotTransferDone; // @synthesize gotTransferDone=_gotTransferDone;
@property unsigned long long transferStartTime; // @synthesize transferStartTime=_transferStartTime;
@property unsigned long long transferSize; // @synthesize transferSize=_transferSize;
@property(retain) NSObject<OS_dispatch_source> *operationWatchdog; // @synthesize operationWatchdog=_operationWatchdog;
@property(retain) ACXPowerAssertion *powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain) NSURL *snapshotURL; // @synthesize snapshotURL=_snapshotURL;
@property unsigned char nextMessageType; // @synthesize nextMessageType=_nextMessageType;
@property(retain) ACXStreamingZipSocketSender *streamingZipSender; // @synthesize streamingZipSender=_streamingZipSender;
@property _Bool acquiredSocket; // @synthesize acquiredSocket=_acquiredSocket;
@property(retain) NSURL *tempDir; // @synthesize tempDir=_tempDir;
@property double lastPercentComplete; // @synthesize lastPercentComplete=_lastPercentComplete;
@property unsigned long long lastPhase; // @synthesize lastPhase=_lastPhase;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id requiredDeviceCapabilities; // @synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities;
@property(retain) NSDictionary *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property _Bool isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
@property _Bool installPlaceholder; // @synthesize installPlaceholder=_installPlaceholder;
@property(retain) NSDictionary *appSettingsDict; // @synthesize appSettingsDict=_appSettingsDict;
@property(copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly) NSString *watchAppBundleID; // @synthesize watchAppBundleID=_watchAppBundleID;
@property(readonly) NSString *companionAppBundleID; // @synthesize companionAppBundleID=_companionAppBundleID;
- (void).cxx_destruct;
- (void)socketDidCloseWithError:(id)arg1;
- (void)receivedDictionaryOrData:(id)arg1;
- (void)_onQueue_startInstall;
- (void)_onQueue_doTransferAndInstallForWatchKitAppWithBundleID:(id)arg1 size:(id)arg2;
- (void)_onQueue_prepForTransferAndInstall;
- (id)_onQueue_sendCancelMessage;
- (id)_makeTempDirectoryWithError:(id *)arg1;
- (void)_onQueue_callCompletion:(id)arg1;
- (void)_onQueue_callProgressBlockWithPhase:(unsigned long long)arg1 percent:(double)arg2;
- (void)_onQueue_disarmWatchdog;
- (void)_onQueue_armWatchdog;
- (void)cancel;
- (void)beginWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCompanionBundleID:(id)arg1 watchAppBundleID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

