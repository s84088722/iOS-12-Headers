//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface CLKDate : NSDate
{
}

+ (id)unmodifiedDate;
+ (id)complicationDate;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)arg1;
+ (double)timeIntervalSinceReferenceDate;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)date;
- (double)timeIntervalSinceNow;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)init;

@end

