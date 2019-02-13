//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCUIProfile, NSString;
@protocol MCProfileViewControllerDelegate;

@interface MCProfileViewController : UITableViewController <PSStateRestoration>
{
    _Bool _profileOffersReenroll;
    _Bool _profileRemovable;
    id <MCProfileViewControllerDelegate> _profileViewControllerDelegate;
    long long _profileViewMode;
    MCUIProfile *_UIProfile;
}

@property(nonatomic) _Bool profileRemovable; // @synthesize profileRemovable=_profileRemovable;
@property(nonatomic) _Bool profileOffersReenroll; // @synthesize profileOffersReenroll=_profileOffersReenroll;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property(nonatomic) long long profileViewMode; // @synthesize profileViewMode=_profileViewMode;
@property(nonatomic) __weak id <MCProfileViewControllerDelegate> profileViewControllerDelegate; // @synthesize profileViewControllerDelegate=_profileViewControllerDelegate;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateProfile;
- (void)_removeProfile;
- (_Bool)_shouldShowRemoveButton;
- (_Bool)_shouldShowUpdateButton;
- (void)setProfile:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(long long)arg3;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

