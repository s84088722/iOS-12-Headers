//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyPreferences/TPSCloudCallingURLController.h>

#import <TelephonyPreferences/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class NSString;

@interface TPSCloudCallingEmergencyAddressURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>
{
}

- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (id)capabilityProvisioningPostData;
- (_Bool)isCapabilityProvisioningURLInvalid;
- (id)capabilityProvisioningURL;
- (int)capabilityProvisioningStatus;
- (_Bool)isCapabilityEnabled;
- (void)webSheetCompletion;
- (void)enableCapability;
- (id)initWithSubscriptionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

