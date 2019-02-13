//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCoreTelephonyClient-Protocol.h>
#import <TelephonyUtilities/TUEmergencyCoreTelephonyClient-Protocol.h>
#import <TelephonyUtilities/TUTTYCoreTelephonyClient-Protocol.h>

@class CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUCoreTelephonyClient : NSObject <TUTTYCoreTelephonyClient, TUEmergencyCoreTelephonyClient, TUCoreTelephonyClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
}

+ (id)sharedTTYTelephonyUtilities;
+ (Class)TTYTelephonyUtilitiesClass;
+ (Class)TTYSettingsClass;
@property(readonly, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)subscriptionForUUID:(id)arg1;
- (id)subscriptionForLabelID:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (unsigned long long)preferredTransportMethodForSubscription:(id)arg1;
- (_Bool)isTTYSoftwareSupportedForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSoftwareSupportedForSubscription:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSubscription:(id)arg1;
- (_Bool)isTTYSoftwareAvailableForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSoftwareAvailableForSubscription:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSubscription:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSubscription:(id)arg1;
- (_Bool)isTTYHardwareAvailableForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYHardwareAvailableForSubscription:(id)arg1;
- (_Bool)isTTYSupportedForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSupportedForSubscription:(id)arg1;
- (_Bool)isTTYEnabledForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYEnabledForSubscription:(id)arg1;
- (_Bool)isRTTSupportedForSubscriptionUUID:(id)arg1;
- (_Bool)isRTTSupportedForSubscription:(id)arg1;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSubscriptionLabelID:(id)arg1 error:(id *)arg2;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSubscription:(id)arg1 error:(id *)arg2;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionLabelID:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id *)arg3;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 subscriptionLabelID:(id)arg2 error:(id *)arg3;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

