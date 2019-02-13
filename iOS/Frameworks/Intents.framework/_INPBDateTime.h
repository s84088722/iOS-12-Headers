//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDateTime-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@interface _INPBDateTime : PBCodable <_INPBDateTime, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int calendarSystem:1;
    } _has;
    int _calendarSystem;
    _INPBLocalDate *_date;
    _INPBLocalTime *_time;
    NSString *_timeZoneID;
}

@property(copy, nonatomic) NSString *timeZoneID; // @synthesize timeZoneID=_timeZoneID;
@property(retain, nonatomic) _INPBLocalTime *time; // @synthesize time=_time;
@property(retain, nonatomic) _INPBLocalDate *date; // @synthesize date=_date;
@property(nonatomic) int calendarSystem; // @synthesize calendarSystem=_calendarSystem;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTimeZoneID;
@property(readonly, nonatomic) _Bool hasTime;
@property(readonly, nonatomic) _Bool hasDate;
- (int)StringAsCalendarSystem:(id)arg1;
- (id)calendarSystemAsString:(int)arg1;
@property(nonatomic) _Bool hasCalendarSystem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

