//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTSource.h>

@class NSDate, NSDictionary, NSString;

@interface RTSourceEventKit : RTSource
{
    _Bool _allDay;
    NSString *_eventIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_title;
    NSString *_location;
    NSString *_suggestionInfo_opaqueKey;
    NSDictionary *_suggestionsSchemaOrg;
    unsigned long long _sharingStatus;
}

+ (id)sharingStatusToString:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long sharingStatus; // @synthesize sharingStatus=_sharingStatus;
@property(readonly, nonatomic) NSDictionary *suggestionsSchemaOrg; // @synthesize suggestionsSchemaOrg=_suggestionsSchemaOrg;
@property(readonly, nonatomic) NSString *suggestionInfo_opaqueKey; // @synthesize suggestionInfo_opaqueKey=_suggestionInfo_opaqueKey;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(_Bool)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8 suggestionsSchemaOrg:(id)arg9;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(_Bool)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(_Bool)arg6 sharingStatus:(unsigned long long)arg7;
- (id)init;

@end

