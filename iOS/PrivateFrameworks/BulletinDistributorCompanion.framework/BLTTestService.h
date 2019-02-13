//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BLTTestService : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedTestService;
- (void).cxx_destruct;
- (void)_connectIfNecessary;
- (void)removeSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)overriddenSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)originalSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)settingOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableStandaloneTestModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end

