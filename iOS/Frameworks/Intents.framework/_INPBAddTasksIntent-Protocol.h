//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBDataString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTaskList, _INPBTemporalEventTrigger;

@protocol _INPBAddTasksIntent <NSObject>
+ (Class)taskTitlesType;
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property(readonly, nonatomic) unsigned long long taskTitlesCount;
@property(copy, nonatomic) NSArray *taskTitles;
@property(readonly, nonatomic) _Bool hasTargetTaskList;
@property(retain, nonatomic) _INPBTaskList *targetTaskList;
@property(readonly, nonatomic) _Bool hasSpatialEventTrigger;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (_INPBDataString *)taskTitlesAtIndex:(unsigned long long)arg1;
- (void)addTaskTitles:(_INPBDataString *)arg1;
- (void)clearTaskTitles;
@end

