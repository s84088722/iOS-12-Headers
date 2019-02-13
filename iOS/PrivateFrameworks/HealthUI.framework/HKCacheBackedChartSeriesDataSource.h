//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

#import <HealthUI/HKChartDataCacheObserver-Protocol.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver>
{
    CDStruct_6ca94699 _lastStartPath;
    CDStruct_6ca94699 _lastEndPath;
    HKChartCache *_chartCache;
}

@property(retain, nonatomic) HKChartCache *chartCache; // @synthesize chartCache=_chartCache;
- (void).cxx_destruct;
- (void)_resetCachedPaths;
- (void)chartCacheDidUpdate:(id)arg1;
- (void)invalidateCache;
- (_Bool)hasAvailableBlocksBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (_Bool)hasPendingQueriesBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

