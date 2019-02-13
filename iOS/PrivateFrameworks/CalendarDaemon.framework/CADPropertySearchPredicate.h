//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class CADObjectID, NSArray, NSString;

@interface CADPropertySearchPredicate : CADPredicate <EKDefaultPropertiesLoading>
{
    int _entityType;
    NSArray *_filters;
    CADObjectID *_calendarID;
    CADObjectID *_sourceID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CADObjectID *sourceID; // @synthesize sourceID=_sourceID;
@property(readonly, nonatomic) CADObjectID *calendarID; // @synthesize calendarID=_calendarID;
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validate;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3 source:(id)arg4;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3;
- (id)predicateFormat;
-     // Error parsing type: @24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}16, name: copyMatchingItemsWithDatabase:
- (id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2;
- (id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;
- (id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

