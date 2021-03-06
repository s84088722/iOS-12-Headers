//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@interface ICSDateValue : NSObject <NSSecureCoding>
{
    long long _year;
    long long _month;
    long long _day;
}

+ (_Bool)supportsSecureCoding;
+ (id)dateFromICSString:(id)arg1;
+ (id)dateFromICSUTF8String:(const char *)arg1;
@property(readonly) long long day; // @synthesize day=_day;
@property(readonly) long long month; // @synthesize month=_month;
@property(readonly) long long year; // @synthesize year=_year;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)icsString;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)components;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (int)dateType;

@end

