//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ASCompetitionStore : NSObject
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_currentCompetitionListCache;
    NSMutableDictionary *_archivedCompetitionListCache;
    NSMutableDictionary *_remoteCompetitionListCache;
}

- (void).cxx_destruct;
- (id)_queue_competitionListCacheForType:(long long)arg1 owner:(long long)arg2;
- (id)_cachedCompetitionListForFriendWithUUID:(id)arg1 type:(long long)arg2 owner:(long long)arg3;
- (void)_queue_saveCompetitionListsToCache:(id)arg1 owner:(long long)arg2;
- (_Bool)_saveCompetitionsToDatabase:(id)arg1 friendUUID:(id)arg2 type:(long long)arg3 error:(id *)arg4;
- (_Bool)_removeCompetitionsWithFriendFromDatabase:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (_Bool)_saveCompetitionListToDatabase:(id)arg1 owner:(long long)arg2 error:(id *)arg3;
- (_Bool)_saveCompetitionLists:(id)arg1 owner:(long long)arg2;
- (_Bool)saveRemoteCompetitionList:(id)arg1;
- (_Bool)saveCompetitionLists:(id)arg1;
- (id)currentRemoteCompetitionForContact:(id)arg1;
- (id)archivedCompetitionListForFriendWithUUID:(id)arg1;
- (id)currentCompetitionListForFriendWithUUID:(id)arg1;
- (void)deleteCachedCompetitions;
- (_Bool)loadCachedCompetitions;
- (id)initWithProfile:(id)arg1;

@end

