//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@protocol _INPBDateTime <NSObject>
@property(readonly, nonatomic) _Bool hasTimeZoneID;
@property(copy, nonatomic) NSString *timeZoneID;
@property(readonly, nonatomic) _Bool hasTime;
@property(retain, nonatomic) _INPBLocalTime *time;
@property(readonly, nonatomic) _Bool hasDate;
@property(retain, nonatomic) _INPBLocalDate *date;
@property(nonatomic) _Bool hasCalendarSystem;
@property(nonatomic) int calendarSystem;
- (int)StringAsCalendarSystem:(NSString *)arg1;
- (NSString *)calendarSystemAsString:(int)arg1;
@end

