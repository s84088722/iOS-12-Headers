//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRVehicleAccessoryAlert.h"

@interface CROutstandingWirelessVehicleApprovalAlert : CRVehicleAccessoryAlert
{
    _Bool _shouldEnableWiFi;
}

@property(nonatomic) _Bool shouldEnableWiFi; // @synthesize shouldEnableWiFi=_shouldEnableWiFi;
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;
- (id)alertDeclinedAnalyticsKey;
- (id)alertAcceptedAnalyticsKey;
- (id)alertDeclineButtonTitle;
- (id)alertAcceptButtonTitle;
- (id)alertMessage;
- (id)alertTitle;

@end

