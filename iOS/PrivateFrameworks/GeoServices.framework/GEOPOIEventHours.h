//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

@interface GEOPOIEventHours : NSObject <NSSecureCoding>
{
    NSDateInterval *_dateInterval;
    NSArray *_hours;
}

+ (id)eventHoursForDateTimeRanges:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateTimeRange:(id)arg1;
- (id)initWithDateInterval:(id)arg1;
- (id)init;

@end

