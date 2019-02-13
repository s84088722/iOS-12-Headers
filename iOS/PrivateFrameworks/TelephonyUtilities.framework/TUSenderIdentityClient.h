//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TUCoreTelephonyClient;

@interface TUSenderIdentityClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUCoreTelephonyClient> _client;
}

@property(retain, nonatomic) id <TUCoreTelephonyClient> client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isTTYSoftwareSupportedForSenderIdentities:(id)arg1;
- (_Bool)isTTYSoftwareSupportedForSenderIdentity:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSenderIdentities:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSenderIdentity:(id)arg1;
- (_Bool)isTTYSoftwareAvailableForSenderIdentity:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSenderIdentities:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSenderIdentity:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSenderIdentities:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSenderIdentity:(id)arg1;
- (_Bool)isTTYHardwareAvailableForSenderIdentity:(id)arg1;
- (_Bool)isTTYSupportedForSenderIdentities:(id)arg1;
- (_Bool)isTTYSupportedForSenderIdentity:(id)arg1;
- (_Bool)isTTYEnabledForSenderIdentities:(id)arg1;
- (_Bool)isTTYEnabledForSenderIdentity:(id)arg1;
- (_Bool)isTTYAvailableForSenderIdentities:(id)arg1;
- (_Bool)isTTYAvailableForSenderIdentity:(id)arg1;
- (_Bool)isRTTSupportedForSenderIdentities:(id)arg1;
- (_Bool)isRTTSupportedForSenderIdentity:(id)arg1;
- (_Bool)isRTTAvailableForSenderIdentities:(id)arg1;
- (_Bool)isRTTAvailableForSenderIdentity:(id)arg1;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityAccountUUID:(id)arg1 error:(id *)arg2;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityAccountUUID:(id)arg1;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentities:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityAccountUUID:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityAccountUUID:(id)arg2;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentities:(id)arg2;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentity:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentity:(id)arg2;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentities:(id)arg2 error:(id *)arg3;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentities:(id)arg2;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityAccountUUID:(id)arg2 error:(id *)arg3;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityAccountUUID:(id)arg2;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentity:(id)arg2 error:(id *)arg3;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentity:(id)arg2;

@end
