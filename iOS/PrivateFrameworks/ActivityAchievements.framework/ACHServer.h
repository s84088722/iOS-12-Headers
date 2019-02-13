//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHServerInterface-Protocol.h>
#import <ActivityAchievements/_HKXPCExportable-Protocol.h>

@class ACHAchievementStore, ACHEarnedInstanceStore, ACHTemplateStore, HDProfile, HDXPCClient, NSString;
@protocol ACHAwardingScheduler;

@interface ACHServer : NSObject <ACHServerInterface, _HKXPCExportable>
{
    HDXPCClient *_client;
    HDProfile *_profile;
    ACHTemplateStore *_templateStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    NSObject<ACHAwardingScheduler> *_awardingScheduler;
    ACHAchievementStore *_achievementStore;
}

+ (id)serverWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 awardingScheduler:(id)arg3 achievementStore:(id)arg4;
+ (id)serverWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5 error:(id *)arg6;
@property(retain, nonatomic) ACHAchievementStore *achievementStore; // @synthesize achievementStore=_achievementStore;
@property(retain, nonatomic) NSObject<ACHAwardingScheduler> *awardingScheduler; // @synthesize awardingScheduler=_awardingScheduler;
@property(retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
@property(retain, nonatomic) ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) HDXPCClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)remote_setActivityChallengeAssetsServerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_forceAwardingSchedulerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchAllAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_removeEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_removeAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_removeTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

