//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicProductTracklistTableViewController.h>

@class MusicLibraryAlbumsViewConfiguration;

@interface MusicProfileAlbumsViewController : MusicProductTracklistTableViewController
{
    _Bool _collapseSections;
    MusicLibraryAlbumsViewConfiguration *_libraryAlbumsViewConfiguration;
}

- (void).cxx_destruct;
- (void)_updateCollapseSections;
- (void)_setCollapseSections:(_Bool)arg1;
@property(readonly, nonatomic) MusicLibraryAlbumsViewConfiguration *libraryAlbumsViewConfiguration;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableViewDataDidReload;
- (long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1;
- (void)viewDidLoad;

@end

