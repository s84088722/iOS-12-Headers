//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@protocol _INPBTask <NSObject>
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property(nonatomic) _Bool hasTaskType;
@property(nonatomic) int taskType;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) _Bool hasSpatialEventTrigger;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime;
- (int)StringAsTaskType:(NSString *)arg1;
- (NSString *)taskTypeAsString:(int)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
@end
