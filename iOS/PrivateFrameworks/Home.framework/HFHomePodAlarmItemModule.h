//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <Home/HFAccessorySettingMobileTimerAdapterObserver-Protocol.h>

@class HFAccessorySettingMobileTimerAdapter, HFHomePodAlarmItemProvider, NSSet, NSString;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemModule : HFItemModule <HFAccessorySettingMobileTimerAdapterObserver>
{
    NSSet *_itemProviders;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFHomePodAlarmItemProvider *_alarmItemProvider;
}

@property(readonly, nonatomic) HFHomePodAlarmItemProvider *alarmItemProvider; // @synthesize alarmItemProvider=_alarmItemProvider;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (void)unregisterForExternalUpdates;
- (void)registerForExternalUpdates;
- (void)mobileTimerAdapter:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
@property(readonly, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
@property(readonly, nonatomic) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

