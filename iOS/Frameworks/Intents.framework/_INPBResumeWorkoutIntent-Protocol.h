//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBResumeWorkoutIntent <NSObject>
@property(readonly, nonatomic) _Bool hasWorkoutName;
@property(retain, nonatomic) _INPBDataString *workoutName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@end

