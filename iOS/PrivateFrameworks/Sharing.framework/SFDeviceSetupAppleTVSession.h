//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, NSString, SFDevice, SFDeviceOperationHomeKitSetup, SFSession, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVSession : NSObject
{
    _Bool _activateCalled;
    int _finishState;
    _Bool _invalidateCalled;
    int _proxSetupActiveToken;
    _Bool _useSFSession;
    int _preflightWiFiState;
    int _preflightiTunesState;
    NSString *_iTunesUserID;
    SFSession *_sfSession;
    int _sfSessionState;
    int _preAuthState;
    int _basicConfigState;
    _Bool _iCloudAccountMatches;
    int _pairSetupState;
    double _pairSetupSecs;
    _Bool _homeKitDoKeyExchange;
    _Bool _homeKitDoFullSetup;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitUserInputState;
    int _homeKitSetupState;
    double _homeKitSetupSecs;
    NSString *_homeKitSelectedRoomName;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trSetupConfigurationState;
    unsigned long long _trSetupConfigurationStartTicks;
    double _trSetupConfigurationSecs;
    _Bool _trNeedsNetwork;
    NSSet *_trUnauthServices;
    int _trNetworkState;
    unsigned long long _trNetworkStartTicks;
    double _wifiSetupSecs;
    int _trActivationState;
    unsigned long long _trActivationStartTicks;
    double _trActivationSecs;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    int _trCompletionState;
    unsigned long long _trCompletionStartTicks;
    double _trCompletionSecs;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForRoomHandler;
}

@property(copy, nonatomic) CDUnknownBlockType promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (_Bool)_verifyiCloudMatch:(unsigned long long)arg1 error:(id *)arg2;
- (int)_runFinish:(_Bool)arg1;
- (int)_runTRCompletion;
- (int)_runHomeKitSetup;
- (int)_runTRAuthentication;
- (int)_runTRActivation;
- (int)_runTRNetwork;
- (int)_runTRSetupConfiguration;
- (int)_runTRSessionStart;
- (void)_runBasicConfigResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigRequest;
- (int)_runBasicConfig;
- (int)_runHomeKitUserInput;
- (int)_runPairSetup;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (void)_runPreAuthRequest;
- (int)_runPreAuth;
- (int)_runSFSessionStart;
- (int)_runPreflightiTunes;
- (int)_runPreflightWiFi;
- (void)_run;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (void)pairSetupTryPIN:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (void)homeKitSelectHome:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

