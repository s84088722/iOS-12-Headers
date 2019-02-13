//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDate;

@interface FCDateRange : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)dateRangeWithEarlierDate:(id)arg1 laterDate:(id)arg2;
+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)intersectionWithDateRange:(id)arg1;
- (long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2;
- (id)sliceForDate:(id)arg1 withInterval:(double)arg2;
- (id)slicesWithTimeInterval:(double)arg1;
- (_Bool)startsLaterThanDateRange:(id)arg1;
- (_Bool)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2;
- (long long)compare:(id)arg1;
- (_Bool)containsDate:(id)arg1;
@property(readonly, nonatomic) unsigned long long maxMillisecondsTimeIntervalSince1970;
@property(readonly, nonatomic) unsigned long long minMillisecondsTimeIntervalSince1970;
@property(readonly, nonatomic) double absoluteTimeInterval;
@property(readonly, nonatomic) double timeInterval;
@property(readonly, nonatomic) _Bool isToInfinity;
@property(readonly, nonatomic) _Bool isFromInfinity;
@property(readonly, nonatomic) _Bool isFinite;
@property(readonly, nonatomic) NSDate *laterDate;
@property(readonly, nonatomic) NSDate *earlierDate;
- (id)initWithStartDate:(id)arg1 timeInterval:(double)arg2;
- (id)initWithEarlierDate:(id)arg1 laterDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;

@end

