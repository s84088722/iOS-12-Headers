//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CADEventsForAssistantSearchPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    NSString *_location;
    NSString *_notes;
    NSArray *_participants;
    long long _limit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 limit:(long long)arg8;
-     // Error parsing type: @24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}16, name: copyMatchingItemsWithDatabase:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
