//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKVettingAlerts : NSObject
{
}

+ (id)appSpecificLocKeyForURLSlug:(id)arg1 prefix:(id)arg2;
+ (id)appSpecificLocKeyForBundleID:(id)arg1 prefix:(id)arg2;
+ (id)alertContentForGenericErrorWithURLSlug:(id)arg1;
+ (id)mediumNameFromComponents:(id)arg1;
+ (id)alertContentForGenericInitiateVettingError;
+ (id)platformSpecificAlertOptionsWithOptions:(id)arg1;
+ (void)showDropDownAlert:(id)arg1 defaultResponseBlock:(CDUnknownBlockType)arg2 alternateResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
+ (void)showICloudAccountSettingAlert:(id)arg1 appName:(id)arg2 previewRequested:(_Bool *)arg3;
+ (void)showFailureAlert:(id)arg1;
+ (id)_alertContentForDropDownSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5 locKeyPrefix:(id)arg6;
+ (id)alertContentForAppStoreAppSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5;
+ (id)alertContentForAppSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5;
+ (id)alertContentDictionaryForServiceUnavailableErrorWithURLSlug:(id)arg1;
+ (id)alertContentDictionaryForDeviceOfflineErrorWithURLSlug:(id)arg1;
+ (id)alertContentForICloudAccountError:(id)arg1 shareMetadata:(id)arg2 shareURL:(id)arg3;
+ (id)alertContentForShareMetadataErrorWithURL:(id)arg1;
+ (id)alertContentForCompleteVettingError:(id)arg1 shareTitle:(id)arg2 email:(id)arg3 phone:(id)arg4 reconstructedShareURL:(id)arg5;
+ (id)_sanitizedShareURLSlug:(id)arg1;
+ (id)alertContentForInitiateVettingError:(id)arg1 shareTitle:(id)arg2 isEmail:(_Bool)arg3 address:(id)arg4;
+ (id)_alertContentForAppStoreOperationWithApp:(id)arg1 shareMetadata:(id)arg2 keyPrefix:(id)arg3 titleKeySuffix:(id)arg4 bodyKeySuffix:(id)arg5;
+ (id)alertContentForAppStoreUpdateLookupFailureWithShareName:(id)arg1 appName:(id)arg2 error:(id)arg3;
+ (id)alertContentForAppStoreAppLookupFailureWithShareName:(id)arg1 error:(id)arg2;
+ (id)alertContentForAppUpdate:(id)arg1 shareMetadata:(id)arg2;
+ (id)alertContentForAppDownload:(id)arg1 shareMetadata:(id)arg2;
+ (id)deviceTypeSpecificSuffix;
+ (id)_alertContentForVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3 isShortcut:(_Bool)arg4;
+ (id)alertContentForShortcutVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3;
+ (id)alertContentForFullVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3;
+ (id)alertContentForFirstJoinAlertWithRecordName:(id)arg1 appName:(id)arg2 bundleID:(id)arg3 shareMetadata:(id)arg4 currentUserName:(id)arg5 currentUserFormattedUsername:(id)arg6;

@end
