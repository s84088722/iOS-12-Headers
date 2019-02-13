//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTTUtilities/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

@interface RTTTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate>
{
    _Bool _headphoneJackSupportsTTY;
    CTXPCServiceSubscriptionContext *_defaultVoiceContext;
    unsigned long long _activeContextCount;
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_telephonyUpdateQueue;
}

+ (id)relayPhoneNumberForContext:(id)arg1;
+ (_Bool)relayIsSupportedForContext:(id)arg1;
+ (_Bool)shouldUseRTTForContext:(id)arg1;
+ (_Bool)softwareTTYIsSupportedForContext:(id)arg1;
+ (_Bool)hardwareTTYIsSupportedForContext:(id)arg1;
+ (_Bool)isOnlyRTTSupportedForContext:(id)arg1;
+ (_Bool)isRTTSupportedForContext:(id)arg1;
+ (_Bool)isTTYSupportedForContext:(id)arg1;
+ (_Bool)softwareTTYIsSupported;
+ (_Bool)hardwareTTYIsSupported;
+ (id)relayPhoneNumber;
+ (_Bool)relayIsSupported;
+ (_Bool)shouldUseRTT;
+ (_Bool)isOnlyRTTSupported;
+ (_Bool)isRTTSupported;
+ (_Bool)isTTYSupported;
+ (_Bool)TTYSoftwareEnabledForAnyActiveContext;
+ (_Bool)TTYHardwareEnabledForAnyActiveContext;
+ (void)performCallCenterTask:(CDUnknownBlockType)arg1;
+ (id)sharedCallCenter;
+ (id)sharedUtilityProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyUpdateQueue; // @synthesize telephonyUpdateQueue=_telephonyUpdateQueue;
@property(retain, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(nonatomic) _Bool headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(nonatomic) unsigned long long activeContextCount; // @synthesize activeContextCount=_activeContextCount;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *defaultVoiceContext; // @synthesize defaultVoiceContext=_defaultVoiceContext;
- (void).cxx_destruct;
- (id)relayNumberForContext:(id)arg1;
- (_Bool)isTTYSupportedForContext:(id)arg1;
- (_Bool)isTTYOverIMSSupportedForContext:(id)arg1;
- (id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2;
- (id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2;
- (void)reloadDefaultVoiceContext;
- (void)reloadRelayPhoneNumbers;
- (id)subscriptionContexts;
- (void)simLessSubscriptionsDidChange;
- (void)activeSubscriptionsDidChange;
- (void)subscriptionInfoDidChange;
- (void)carrierSettingsDidChange;
- (id)phoneNumberFromUUID:(id)arg1;
- (id)contactPathForCall:(id)arg1;
- (_Bool)contactPathIsMe:(id)arg1;
- (id)ttyMeContact;
- (id)phoneNumberForContext:(id)arg1;
- (id)myPhoneNumber;
- (_Bool)relayIsSupported;
- (_Bool)contactIsTTYContact:(id)arg1;
- (unsigned long long)currentPreferredTransportMethod;
- (void)mediaServerDied;
- (void)registerNotifications;
- (void)headphoneStateChangedNotification:(id)arg1;
- (void)updateHeadphoneState;
- (void)setTTYDictionaryAvailability:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

