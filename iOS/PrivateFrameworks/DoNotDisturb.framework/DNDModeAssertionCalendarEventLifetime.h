//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSDate, NSString;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime
{
    _Bool _onlyDuringEvent;
    NSString *_eventUniqueID;
    NSDate *_occurrenceDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isOnlyDuringEvent) _Bool onlyDuringEvent; // @synthesize onlyDuringEvent=_onlyDuringEvent;
@property(readonly, copy, nonatomic) NSDate *occurrenceDate; // @synthesize occurrenceDate=_occurrenceDate;
@property(readonly, copy, nonatomic) NSString *eventUniqueID; // @synthesize eventUniqueID=_eventUniqueID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lifetimeType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 onlyDuringEvent:(_Bool)arg3;

@end

