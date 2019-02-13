//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHEarnedInstanceEntitySyncedEarnedInstancesObserver-Protocol.h>

@class HDProfile, NSString;
@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver;

@interface ACHEarnedInstanceEntityWrapper : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>
{
    HDProfile *_profile;
    id <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> _syncedEarnedInstancesObserver;
}

@property(nonatomic) __weak id <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> syncedEarnedInstancesObserver; // @synthesize syncedEarnedInstancesObserver=_syncedEarnedInstancesObserver;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (_Bool)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (_Bool)removeAllEarnedInstancesWithError:(id *)arg1;
- (id)allEarnedInstancesWithError:(id *)arg1;
- (_Bool)removeEarnedInstances:(id)arg1 error:(id *)arg2;
- (id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id *)arg4;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

