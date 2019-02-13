//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSpecifierDataSource.h>

@class NPSDomainAccessor, NSArray, NSDictionary, NSMutableArray, NSOperationQueue;

@interface COSNotificationsDataSource : PSSpecifierDataSource
{
    NSMutableArray *_internalSpecifiers;
    NSArray *_bbSections;
    NSArray *_unfilteredBBSections;
    NSDictionary *_inheritedWhiteList;
    NPSDomainAccessor *_bbAppsSettings;
    NSOperationQueue *_localIconLoadingQueue;
}

@property(readonly, nonatomic) NSOperationQueue *localIconLoadingQueue; // @synthesize localIconLoadingQueue=_localIconLoadingQueue;
@property(retain, nonatomic) NPSDomainAccessor *bbAppsSettings; // @synthesize bbAppsSettings=_bbAppsSettings;
@property(retain, nonatomic) NSDictionary *inheritedWhiteList; // @synthesize inheritedWhiteList=_inheritedWhiteList;
@property(retain, nonatomic) NSArray *unfilteredBBSections; // @synthesize unfilteredBBSections=_unfilteredBBSections;
@property(retain, nonatomic) NSArray *bbSections; // @synthesize bbSections=_bbSections;
@property(retain, nonatomic) NSMutableArray *internalSpecifiers; // @synthesize internalSpecifiers=_internalSpecifiers;
- (void).cxx_destruct;
- (void)lazyLoadBundle:(id)arg1;
- (id)showOnGizmoState:(id)arg1;
- (id)_showOnGizmoStateForBundleID:(id)arg1;
- (void)setShowOnGizmoState:(id)arg1 specifier:(id)arg2;
- (_Bool)isAppleAppWithCustomSetting:(id)arg1;
- (_Bool)isAppleApp:(id)arg1;
- (void)_setShowOnGizmoState:(id)arg1 forBundleID:(id)arg2;
- (void)_writeSectionState:(id)arg1 forBundleID:(id)arg2;
- (id)specifiersFromBBSections;
- (void)cleanBBSections;
- (void)refreshBBSections;
- (void)setupWhitelistFromInheritedSpecifiers;
- (void)setNotificationsIndicatorActive:(id)arg1 specifier:(id)arg2;
- (id)notificationsIndicatorActive:(id)arg1;
- (id)additionalSpecifiers;
- (id)localizedPrefsStringForString:(id)arg1;
- (id)hardcodedSpecifiers;
- (id)specifiersForWatchKitAppsWithNotifications;
- (id)watchAppSpecifierWithDisplayName:(id)arg1 specifierID:(id)arg2 identifier:(id)arg3;
- (_Bool)isSecondPartyApp:(id)arg1;
- (id)secondPartyApps;
- (void)loadSpecifiers;
- (void)reloadSpecifiers;
- (void)becomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

