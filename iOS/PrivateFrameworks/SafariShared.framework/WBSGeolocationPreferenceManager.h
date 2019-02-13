//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSPerSitePreferenceManager.h>

#import <SafariShared/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate>
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_geolocationPreference;
}

@property(readonly, nonatomic) WBSPerSitePreference *geolocationPreference; // @synthesize geolocationPreference=_geolocationPreference;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore; // @synthesize perSitePreferencesStore=_perSitePreferencesStore;
- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forDomain:(id)arg2 shouldIncludeTimestamp:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_isDateLessThanOneDayAgo:(id)arg1;
- (id)perSitePreferenceValueForGeolocationSetting:(long long)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;
- (void)removePermissionsAddedAfterDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllPermissions;
- (void)setDefaultGeolocationSetting:(long long)arg1;
- (void)setGeolocationSetting:(long long)arg1 forDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getGeolocationSettingForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPerSitePreferencesStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

