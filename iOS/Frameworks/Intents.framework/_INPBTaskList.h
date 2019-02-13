//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTaskList-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime;

@interface _INPBTaskList : PBCodable <_INPBTaskList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBDateTime *_createdDateTime;
    _INPBDataString *_groupName;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    NSArray *_tasks;
    _INPBDataString *_title;
}

+ (Class)tasksType;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDataString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTitle;
- (id)tasksAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long tasksCount;
- (void)addTasks:(id)arg1;
- (void)clearTasks;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

