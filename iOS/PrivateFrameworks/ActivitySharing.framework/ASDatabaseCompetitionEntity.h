//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataEntity.h>

@interface ASDatabaseCompetitionEntity : HDDataEntity
{
}

+ (id)_insertCompetition:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)_insertCompetitions:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_competitionsWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allDatabaseCompetitionsWithProfile:(id)arg1 withError:(id *)arg2;
+ (_Bool)removeAllCompetitionsWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)removeCompetitionsForFriendUUID:(id)arg1 type:(long long)arg2 profile:(id)arg3 withError:(id *)arg4;
+ (_Bool)saveCompetitions:(id)arg1 profile:(id)arg2 withError:(id *)arg3;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;

@end

