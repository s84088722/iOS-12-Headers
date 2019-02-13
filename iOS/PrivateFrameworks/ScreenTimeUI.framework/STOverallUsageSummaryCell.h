//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class STCandyBarView, STDeviceUnlockStateListener, STNoUsageDataView, STTopUsageItemsView, STUnlockForContentView, STUsageTotalDeltaView, UILabel;

@interface STOverallUsageSummaryCell : STTableCell
{
    _Bool _monitorDeviceLockState;
    _Bool _isVibrancyEnabled;
    _Bool _isWidget;
    UILabel *_screenTimeLabel;
    STUsageTotalDeltaView *_deltaView;
    STCandyBarView *_candyBarView;
    STTopUsageItemsView *_topItemsView;
    STNoUsageDataView *_noUsageDataView;
    STUnlockForContentView *_unlockView;
    STDeviceUnlockStateListener *_lockStateListener;
}

@property(retain, nonatomic) STDeviceUnlockStateListener *lockStateListener; // @synthesize lockStateListener=_lockStateListener;
@property(retain, nonatomic) STUnlockForContentView *unlockView; // @synthesize unlockView=_unlockView;
@property(retain, nonatomic) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(retain, nonatomic) STTopUsageItemsView *topItemsView; // @synthesize topItemsView=_topItemsView;
@property(retain, nonatomic) STCandyBarView *candyBarView; // @synthesize candyBarView=_candyBarView;
@property(retain, nonatomic) STUsageTotalDeltaView *deltaView; // @synthesize deltaView=_deltaView;
@property(retain, nonatomic) UILabel *screenTimeLabel; // @synthesize screenTimeLabel=_screenTimeLabel;
@property(readonly, nonatomic) _Bool isWidget; // @synthesize isWidget=_isWidget;
@property(readonly, nonatomic) _Bool isVibrancyEnabled; // @synthesize isVibrancyEnabled=_isVibrancyEnabled;
@property(nonatomic) _Bool monitorDeviceLockState; // @synthesize monitorDeviceLockState=_monitorDeviceLockState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateViewsForLockState:(_Bool)arg1;
- (void)stopMonitoringDeviceLockChanges;
- (void)startMonitoringDeviceLockChanges;
- (void)refreshWithCoordinator:(id)arg1;
- (void)setValue:(id)arg1;
- (void)stOverallUsageSummaryCellCommonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 isVibrancyEnabled:(_Bool)arg4 isWidget:(_Bool)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

