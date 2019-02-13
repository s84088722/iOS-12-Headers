//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUSlideshowMusicDelegate-Protocol.h>
#import <PhotosUI/PUSlideshowSettingsViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUSlideshowSpeedCellDelegate-Protocol.h>
#import <PhotosUI/PUSlideshowThemeDelegate-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSString, OKProducerPreset, PUSlideshowMediaItem, PUSlideshowSession, PUSlideshowSettingsViewControllerSpec, PUSlideshowSettingsViewModel, UITableView, _UIBackdropView;
@protocol PUSlideshowSettingsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, PUSlideshowThemeDelegate, PUSlideshowSettingsViewModelChangeObserver, PUViewControllerSpecChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowMusicDelegate>
{
    PUSlideshowSession *_session;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    PUSlideshowSettingsViewControllerSpec *_spec;
    UITableView *_tableView;
    _UIBackdropView *_backdropView;
    _Bool _shouldHideTableViewWhenViewWillDisappear;
    _Bool __needsUpdateSpec;
    _Bool __needsUpdateTableView;
    _Bool __needsUpdateNavigationBar;
    _Bool __needsUpdatePreset;
    _Bool __needsUpdateMediaItem;
    _Bool __needsUpdateMusicOn;
    id <PUSlideshowSettingsViewControllerDelegate> _delegate;
    OKProducerPreset *__pendingPreset;
    PUSlideshowMediaItem *__pendingMediaItem;
}

@property(retain, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem; // @synthesize _pendingMediaItem=__pendingMediaItem;
@property(retain, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset; // @synthesize _pendingPreset=__pendingPreset;
@property(nonatomic, setter=_setNeedsUpdateMusicOn:) _Bool _needsUpdateMusicOn; // @synthesize _needsUpdateMusicOn=__needsUpdateMusicOn;
@property(nonatomic, setter=_setNeedsUpdateMediaItem:) _Bool _needsUpdateMediaItem; // @synthesize _needsUpdateMediaItem=__needsUpdateMediaItem;
@property(nonatomic, setter=_setNeedsUpdatePreset:) _Bool _needsUpdatePreset; // @synthesize _needsUpdatePreset=__needsUpdatePreset;
@property(nonatomic, setter=_setNeedsUpdateNavigationBar:) _Bool _needsUpdateNavigationBar; // @synthesize _needsUpdateNavigationBar=__needsUpdateNavigationBar;
@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)musicPickerDidFinish:(id)arg1;
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;
- (void)themePickerDidFinish:(id)arg1;
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_toggleMusic:(id)arg1;
- (void)_toggleRepeat:(id)arg1;
- (void)_didTapDoneButton:(id)arg1;
- (void)_synchronizedChangedSettings;
- (void)_updateMusicOnIfNeeded;
- (void)_updateMediaItemIfNeeded;
- (void)_updatePresetIfNeeded;
- (void)_updateNavigationBarIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateIfNeeded;
- (void)_invalidateMusicOn;
- (void)_invalidateMediaItem;
- (void)_invalidatePreset;
- (void)_invalidateNavigationBar;
- (void)_invalidateTableView;
- (void)_invalidateSpec;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

