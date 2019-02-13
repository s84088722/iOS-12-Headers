//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, STUsageReport;

@interface STUsageDetailsViewModel : NSObject
{
    unsigned long long _selectedTimePeriod;
    NSString *_selectedItemDisplayName;
    NSDate *_lastUpdatedDate;
    STUsageReport *_todayUsageReport;
    STUsageReport *_weekUsageReport;
    NSArray *_rawUsageItems;
}

+ (id)keyPathsForValuesAffectingSelectedUsageReport;
+ (id)keyPathsForValuesAffectingHasUsageData;
@property(readonly, copy, nonatomic) NSArray *rawUsageItems; // @synthesize rawUsageItems=_rawUsageItems;
@property(retain, nonatomic) STUsageReport *weekUsageReport; // @synthesize weekUsageReport=_weekUsageReport;
@property(retain, nonatomic) STUsageReport *todayUsageReport; // @synthesize todayUsageReport=_todayUsageReport;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(copy, nonatomic) NSString *selectedItemDisplayName; // @synthesize selectedItemDisplayName=_selectedItemDisplayName;
@property unsigned long long selectedTimePeriod; // @synthesize selectedTimePeriod=_selectedTimePeriod;
- (void).cxx_destruct;
- (void)setRawUsageItems:(id)arg1 lastUpdatedDate:(id)arg2;
@property(readonly, nonatomic) STUsageReport *selectedUsageReport;
@property(readonly, nonatomic) _Bool hasUsageData;
- (id)init;

@end

