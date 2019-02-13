//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, NSSet, PSSpecifier, STAlwaysAllowList;
@protocol STAlwaysAllowListControllerDelegate;

@interface STAlwaysAllowListController : PSListController
{
    id <STAlwaysAllowListControllerDelegate> _delegate;
    STAlwaysAllowList *_alwaysAllowList;
    NSArray *_chooseBundleIDs;
    NSSet *_installedBundleIDs;
    PSSpecifier *_allowedAppsGroupSpecifier;
    NSArray *_allowedAppsSpecifiers;
    PSSpecifier *_chooseAppsGroupSpecifier;
    NSArray *_chooseAppsSpecifiers;
}

@property(retain, nonatomic) NSArray *chooseAppsSpecifiers; // @synthesize chooseAppsSpecifiers=_chooseAppsSpecifiers;
@property(retain, nonatomic) PSSpecifier *chooseAppsGroupSpecifier; // @synthesize chooseAppsGroupSpecifier=_chooseAppsGroupSpecifier;
@property(retain, nonatomic) NSArray *allowedAppsSpecifiers; // @synthesize allowedAppsSpecifiers=_allowedAppsSpecifiers;
@property(retain, nonatomic) PSSpecifier *allowedAppsGroupSpecifier; // @synthesize allowedAppsGroupSpecifier=_allowedAppsGroupSpecifier;
@property(copy, nonatomic) NSSet *installedBundleIDs; // @synthesize installedBundleIDs=_installedBundleIDs;
@property(copy, nonatomic) NSArray *chooseBundleIDs; // @synthesize chooseBundleIDs=_chooseBundleIDs;
@property(copy, nonatomic) STAlwaysAllowList *alwaysAllowList; // @synthesize alwaysAllowList=_alwaysAllowList;
@property(nonatomic) __weak id <STAlwaysAllowListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)appSpecifiersForBundleIDs:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)removeAllowedIdentifier:(id)arg1 withSpecifier:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)createChooseAppsSpecifiers;
- (id)createAllowedAppsSpecifiers;
- (id)specifiers;
- (void)willResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)viewDidLoad;
- (id)init;

@end

