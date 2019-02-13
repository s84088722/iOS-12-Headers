//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionTimeRange : CMLogItem
{
    NSDate *fStartDate;
    NSDate *fEndDate;
}

+ (CDStruct_c3b9c2ee)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(CDStruct_c3b9c2ee)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;

@end

