//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, PSCellularUsage;

@interface PSUIAppCellularUsageStatisticsCache : NSObject
{
    _Bool _showInternalDetails;
    NSMutableDictionary *_dataUsageStatisticsByBundleID;
    NSMutableDictionary *_dataUsageStatisticsByProcessName;
    PSCellularUsage *_totalUsage;
    NSDictionary *_workspaceInfoDict;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *workspaceInfoDict; // @synthesize workspaceInfoDict=_workspaceInfoDict;
@property(nonatomic) _Bool showInternalDetails; // @synthesize showInternalDetails=_showInternalDetails;
@property(retain, nonatomic) PSCellularUsage *totalUsage; // @synthesize totalUsage=_totalUsage;
@property(retain) NSMutableDictionary *dataUsageStatisticsByProcessName; // @synthesize dataUsageStatisticsByProcessName=_dataUsageStatisticsByProcessName;
@property(retain) NSMutableDictionary *dataUsageStatisticsByBundleID; // @synthesize dataUsageStatisticsByBundleID=_dataUsageStatisticsByBundleID;
- (void).cxx_destruct;
- (void)_handleUsageOrInfoChanged;
- (id)usageByProcessName;
- (id)usageByBundleID;
- (void)fetchDataUsageStatistics;
- (id)workspaceInfo;
- (id)previousBillingCycleEndDate;
- (id)billingCycleEndDate;
- (_Bool)useCalendarMonthBillingCycle;
- (_Bool)billingCycleSupported;
- (void)fetchWorkspaceInfo;
- (void)_clearCache;
- (void)willEnterForeground;
- (void)dealloc;
- (id)init;
- (id)initPrivate;

@end

