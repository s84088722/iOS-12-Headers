//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetViewController.h>

#import <PhotosUI/PLNavigableCollectionContainer-Protocol.h>

@class NSString, PUSessionInfo, UIBarButtonItem;

@interface PUAlbumsGadgetViewController : PXGadgetViewController <PLNavigableCollectionContainer>
{
    PUSessionInfo *_sessionInfo;
    UIBarButtonItem *_plusButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *plusButtonItem; // @synthesize plusButtonItem=_plusButtonItem;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void).cxx_destruct;
- (void)_pushViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePlusButtonLongPress:(id)arg1;
- (void)_handlePlusButton:(id)arg1;
- (void)_presentNewActionAlertControllerIncludeNewFolderAction:(_Bool)arg1;
- (id)_newSharedAlbumActionWithSpec:(id)arg1;
- (id)_newFolderActionWithSpec:(id)arg1;
- (id)_newAlbumActionWithSpec:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_updateNavigationBar;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_navigableGadgetForCollection:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canNavigateToCollection:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2;
- (id)px_gridPresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

