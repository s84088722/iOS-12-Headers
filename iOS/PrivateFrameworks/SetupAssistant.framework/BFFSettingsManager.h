//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSNumber;

@interface BFFSettingsManager : NSObject
{
    NSMutableArray *_stashedPaths;
    NSMutableDictionary *_stashedPreferences;
    NSMutableDictionary *_stashedManagedConfigurationSettings;
    NSMutableArray *_stashedButtonHaptics;
    NSNumber *_stashedAssistantEnabled;
    NSNumber *_stashedAssistantVoiceTriggerEnabled;
    NSNumber *_stashedLocationServicesEnabled;
    NSData *_stashedWatchData;
    NSArray *_stashedFlowSkipIdentifiers;
    NSNumber *_stashedScreenTimeEnabled;
    NSNumber *_stashedAutoUpdateEnabled;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)removeSafeHaven;
- (id)_shovePath:(id)arg1 toPath:(id)arg2;
- (id)_preferencesForDomain:(id)arg1;
- (void)_restoreWatchData;
- (void)_restoreStashedFiles;
- (void)_applyAutoUpdatePreferences;
- (void)_applyScreenTimePreferences;
- (void)_applyStashedFlowSkipIdentifiers;
- (void)_applyLocationServices;
- (void)_applyAssistantPreferences;
- (void)_applyStashedButtonHaptics;
- (void)_applyStashedManagedConfiguration;
- (void)_applyStashedPreferences;
- (unsigned long long)_restoreConfiguration;
- (void)applySafeHavenStash;
- (void)_reset:(_Bool)arg1;
- (void)reset;
- (void)postDidRestoreSafeHavenNotification;
- (_Bool)_commitStash;
- (_Bool)_stashPaths;
- (_Bool)_stashConfiguration:(_Bool)arg1;
- (_Bool)hideStashInSafeHavenAsProvisional:(_Bool)arg1;
- (_Bool)hideStashInSafeHaven;
- (void)setAutoUpdateEnabled:(_Bool)arg1;
- (void)setScreenTimeEnabled:(_Bool)arg1;
- (void)stashFlowSkipIdentifiers:(id)arg1;
- (void)removeObjectForBuddyKey:(id)arg1;
- (void)setObject:(id)arg1 forBuddyKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forBuddyKey:(id)arg2;
- (void)setAssistantVoiceTriggerEnabled:(_Bool)arg1;
- (void)setAssistantEnabled:(_Bool)arg1;
- (void)stashWatchData:(id)arg1;
- (void)stashLocationServicesChoice:(_Bool)arg1;
- (void)clearHapticTypeForButtonKind:(long long)arg1;
- (void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)stashPath:(id)arg1;
- (void)populatePathsToStash;
- (void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setBool:(_Bool)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)removeBoolSettingForManagedConfigurationSetting:(id)arg1;
- (void)setBool:(_Bool)arg1 forManagedConfigurationSetting:(id)arg2;
- (long long)stashConfigurationType;
- (id)stashProductVersion;
- (id)stashBuildVersion;
- (unsigned long long)stashVersion;
- (_Bool)hasStashedValuesOnDisk;
- (_Bool)hasStashedValues;
- (id)init;

@end

