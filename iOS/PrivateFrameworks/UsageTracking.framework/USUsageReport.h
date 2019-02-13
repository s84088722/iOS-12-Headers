//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSTimeZone;

@interface USUsageReport : NSObject <NSSecureCoding>
{
    double _screenTime;
    NSDateInterval *_longestSession;
    NSArray *_categoryUsage;
    NSDictionary *_userNotificationsByBundleIdentifier;
    NSDictionary *_pickupsByBundleIdentifier;
    unsigned long long _pickupsWithoutApplicationUsage;
    NSDate *_firstPickup;
    NSDateInterval *_interval;
    NSTimeZone *_timeZone;
    NSDate *_lastEventDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSDate *lastEventDate; // @synthesize lastEventDate=_lastEventDate;
@property(readonly) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly) NSDateInterval *interval; // @synthesize interval=_interval;
@property(readonly) NSDate *firstPickup; // @synthesize firstPickup=_firstPickup;
@property(readonly) unsigned long long pickupsWithoutApplicationUsage; // @synthesize pickupsWithoutApplicationUsage=_pickupsWithoutApplicationUsage;
@property(readonly, copy) NSDictionary *pickupsByBundleIdentifier; // @synthesize pickupsByBundleIdentifier=_pickupsByBundleIdentifier;
@property(readonly, copy) NSDictionary *userNotificationsByBundleIdentifier; // @synthesize userNotificationsByBundleIdentifier=_userNotificationsByBundleIdentifier;
@property(readonly, copy) NSArray *categoryUsage; // @synthesize categoryUsage=_categoryUsage;
@property(readonly) NSDateInterval *longestSession; // @synthesize longestSession=_longestSession;
@property(readonly) double screenTime; // @synthesize screenTime=_screenTime;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usUsageReportCommonInitWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 notifications:(id)arg4 pickupsByBundleIdentifier:(id)arg5 pickupsWithoutApplicationUsage:(unsigned long long)arg6 firstPickup:(id)arg7 interval:(id)arg8 timeZone:(id)arg9 lastEventDate:(id)arg10;
- (id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 notifications:(id)arg4 pickupsByBundleIdentifier:(id)arg5 pickupsWithoutApplicationUsage:(unsigned long long)arg6 firstPickup:(id)arg7 interval:(id)arg8 timeZone:(id)arg9 lastEventDate:(id)arg10;

@end

