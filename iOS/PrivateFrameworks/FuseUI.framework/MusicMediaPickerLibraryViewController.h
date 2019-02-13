//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicMediaPickerSearchDelegate-Protocol.h>

@class MPMediaPredicate, MusicClientContext, NSArray, NSString, SKUIClientContext;

@interface MusicMediaPickerLibraryViewController : UITableViewController <MusicMediaPickerSearchDelegate, MusicClientContextConsuming>
{
    NSArray *_allLibraryCategoriesConfigurations;
    NSArray *_usedLibraryCategoriesConfigurations;
    NSArray *_usedDataSources;
    MPMediaPredicate *_storeItemsMediaLibraryPredicate;
    _Bool _invokedForPlaylistEditing;
    _Bool _showsOnlyStoreItems;
    _Bool _picksSingleCollection;
    _Bool _omitsGeniusPlaylists;
    MusicClientContext *_clientContext;
}

@property(nonatomic) _Bool omitsGeniusPlaylists; // @synthesize omitsGeniusPlaylists=_omitsGeniusPlaylists;
@property(nonatomic) _Bool picksSingleCollection; // @synthesize picksSingleCollection=_picksSingleCollection;
@property(nonatomic) _Bool showsOnlyStoreItems; // @synthesize showsOnlyStoreItems=_showsOnlyStoreItems;
@property(nonatomic, getter=isInvokedForPlaylistEditing) _Bool invokedForPlaylistEditing; // @synthesize invokedForPlaylistEditing=_invokedForPlaylistEditing;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_loadCategoryConfigurations;
- (void)_filterAvailableCategoryConfigurations;
- (void)_dataSourceDidInvalidate:(id)arg1;
- (void)_reloadLibraryCategories;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableViewThatNeedsSearchBarHeader;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

