//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CellularPlanManager/NSObject-Protocol.h>

@class CTCellularPlanCarrierItem, CTCellularPlanItem, CTDanglingPlanItem, CTUserLabel, CTXPCServiceSubscriptionContext, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol CTCellularPlanClient <NSObject>
- (void)getRemoteInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setSkipEligibilityCheck:(_Bool)arg1;
- (void)getSkipEligibilityCheck:(void (^)(_Bool))arg1;
- (void)setRoamingSignupOverride:(_Bool)arg1;
- (void)getRoamingSignupOverrideWithCompletion:(void (^)(_Bool))arg1;
- (void)setAutoPlanSelection:(_Bool)arg1;
- (void)getAutoPlanSelectionWithCompletion:(void (^)(_Bool))arg1;
- (void)deleteAllRemoteProfiles;
- (void)deleteRemoteProfile:(NSString *)arg1;
- (void)selectRemoteProfile:(NSString *)arg1;
- (void)fetchRemoteProfiles:(NSString *)arg1;
- (void)setLatitude:(NSNumber *)arg1 andLongitude:(NSNumber *)arg2;
- (void)latitudeLongitudeOverride:(void (^)(double, double))arg1;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)mccMncOverride:(void (^)(long long, long long))arg1;
- (void)getEnableVinylFlowTypeOverride:(void (^)(_Bool))arg1;
- (void)enableVinylFlowTypeOverride:(_Bool)arg1;
- (void)showUiIgnoringActivationFlags:(_Bool)arg1;
- (void)setUseNewCellularPlanUI:(_Bool)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)getSelectedProxy:(void (^)(long long))arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)getSelectedEnv:(void (^)(long long))arg1;
- (void)setESimServerURL:(NSString *)arg1;
- (void)getESimServerURL:(void (^)(NSString *))arg1;
- (void)setIMEIPrefix:(NSString *)arg1;
- (void)getIMEIPrefix:(void (^)(NSString *))arg1;
- (void)launchDataActivationNextWithUrl:(NSString *)arg1;
- (void)expirePlan;
- (void)launchSequoia;
- (void)didCancelRemotePlan;
- (void)pendingReleaseRemotePlan;
- (void)didPurchaseRemotePlanForEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSmdpFqdn:(NSString *)arg5 completion:(void (^)(_Bool))arg6;
- (void)remotePlanLaunchInfoForEid:(NSData *)arg1 completion:(void (^)(NSString *, NSDictionary *, NSError *))arg2;
- (void)eraseAllRemotePlansWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)didDeleteRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)didSelectRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)manageAccountForRemotePlan:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addNewRemotePlanWithAddress:(NSString *)arg1 matchingId:(NSString *)arg2 oid:(NSString *)arg3 confirmationCode:(NSString *)arg4 isPairing:(_Bool)arg5 withCSN:(NSString *)arg6 withContext:(CTXPCServiceSubscriptionContext *)arg7 userConsent:(long long)arg8 completion:(void (^)(NSError *))arg9;
- (void)addNewRemotePlanWithCardData:(NSString *)arg1 confirmationCode:(NSString *)arg2 isPairing:(_Bool)arg3 withCSN:(NSString *)arg4 withContext:(CTXPCServiceSubscriptionContext *)arg5 userConsent:(long long)arg6 completion:(void (^)(NSError *))arg7;
- (void)addNewRemotePlan:(_Bool)arg1 withCSN:(NSString *)arg2 withContext:(CTXPCServiceSubscriptionContext *)arg3 userConsent:(long long)arg4 completion:(void (^)(NSError *))arg5;
- (void)finishRemoteProvisioningWithCompletion:(void (^)(_Bool))arg1;
- (void)startRemoteProvisioningWithCompletion:(void (^)(_Bool))arg1;
- (void)remoteUserDidProvideConsentResponse:(_Bool)arg1 plan:(CTCellularPlanItem *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remotePlanItemsWithUpdateFetch:(_Bool)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)shouldShowAddNewRemotePlanWithContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, unsigned long long, NSString *, NSError *))arg2;
- (void)isRemotePlanCapableWithContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool))arg2;
- (void)openInternalUrlId:(long long)arg1;
- (void)getDeviceInfo:(void (^)(NSDictionary *))arg1;
- (void)retrieveRequestSettings:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
- (void)fetchNewProfilesWithCompletion:(void (^)(_Bool, NSError *))arg1 additionalParameters:(NSDictionary *)arg2;
- (void)registerHasNewProfileCompletion:(void (^)(_Bool, _Bool))arg1;
- (void)setUserInPurchaseFlow:(_Bool)arg1;
- (void)didPurchasePlanWithIccid:(NSString *)arg1 downloadProfile:(_Bool)arg2;
- (void)signIdMapForSessionId:(NSString *)arg1 locationRequired:(_Bool)arg2 withCompletion:(void (^)(NSString *, NSError *))arg3;
- (void)willDisplayPlanItems;
- (void)shouldShowPlanList:(void (^)(_Bool))arg1;
- (void)isAddButtonEnabled:(void (^)(_Bool))arg1;
- (void)triggerAddNewDataPlan:(void (^)(NSError *))arg1;
- (void)carrierHandoffToken:(void (^)(NSString *, NSString *, NSError *))arg1;
- (void)didPurchasePlanForCsn:(NSData *)arg1 iccid:(NSString *)arg2 profileServer:(NSString *)arg3;
- (void)planLaunchInfoWithCompletion:(void (^)(NSString *, NSDictionary *, NSError *))arg1;
- (void)eraseAllPlansWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)didDeletePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)didSelectPlanForIMessage:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)didSelectPlanForDefaultVoice:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setLabelForPlan:(CTCellularPlanItem *)arg1 label:(CTUserLabel *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)didSelectPlanForData:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)didSelectPlanItem:(CTCellularPlanItem *)arg1 enable:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)userDidProvideConsentResponse:(long long)arg1 plan:(CTCellularPlanItem *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remapSimLabel:(CTDanglingPlanItem *)arg1 to:(CTCellularPlanItem *)arg2 completion:(void (^)(NSError *))arg3;
- (void)resolveSimLabel:(CTDanglingPlanItem *)arg1 completion:(void (^)(NSError *))arg2;
- (void)carrierItemsShouldUpdate:(_Bool)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)danglingPlanItemsShouldUpdate:(_Bool)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)planItemsShouldUpdate:(_Bool)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)manageAccountForPlan:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)resumePlanProvisioning:(_Bool)arg1 userConsent:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)addNewPlanWithFlowType:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)addNewPlanWithUserInWebsheetWithUserConsent:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)addNewPlanWithAddress:(NSString *)arg1 matchingId:(NSString *)arg2 oid:(NSString *)arg3 confirmationCode:(NSString *)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(void (^)(NSError *))arg7;
- (void)addNewPlanWithCardData:(NSString *)arg1 confirmationCode:(NSString *)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(void (^)(NSError *))arg5;
- (void)addNewPlanWithCarrierItem:(CTCellularPlanCarrierItem *)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)finishProvisioningWithCompletion:(void (^)(_Bool))arg1;
- (void)startProvisioningWithCompletion:(void (^)(_Bool))arg1;
- (void)getSupportedFlowTypes:(void (^)(unsigned long long, NSError *))arg1;
- (void)isNewDataPlanCapable:(void (^)(_Bool))arg1;
- (void)shouldShowPlanSetup:(void (^)(_Bool))arg1;
- (void)getShortLabelsForLabels:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getSubscriptionContextUUIDforPlan:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getPredefinedLabels:(void (^)(NSArray *, NSError *))arg1;
- (void)ping;
@end

