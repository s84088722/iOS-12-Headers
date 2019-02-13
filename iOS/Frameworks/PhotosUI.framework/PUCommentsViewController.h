//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUAccessoryContentViewController-Protocol.h>
#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUCommentsTableDataControllerDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, PUCommentsTableDataController, UITableView;
@protocol PUAccessoryContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsViewController : UIViewController <PUCommentsTableDataControllerDelegate, PUAssetViewModelChangeObserver, PXChangeObserver, PUAccessoryContentViewController>
{
    _Bool __needsUpdateTableViewScrollPosition;
    id <PUAccessoryContentViewControllerDelegate> _accessoryContentViewControllerDelegate;
    PUAssetViewModel *_assetViewModel;
    UITableView *__tableView;
    PUCommentsTableDataController *__tableDataController;
    struct UIEdgeInsets _contentInsets;
}

+ (_Bool)canShowCommentsForAsset:(id)arg1;
@property(nonatomic, setter=_setNeedsUpdateTableViewScrollPosition:) _Bool _needsUpdateTableViewScrollPosition; // @synthesize _needsUpdateTableViewScrollPosition=__needsUpdateTableViewScrollPosition;
@property(readonly, nonatomic) PUCommentsTableDataController *_tableDataController; // @synthesize _tableDataController=__tableDataController;
@property(readonly, nonatomic) UITableView *_tableView; // @synthesize _tableView=__tableView;
@property(readonly, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) __weak id <PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate; // @synthesize accessoryContentViewControllerDelegate=_accessoryContentViewControllerDelegate;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
@property(readonly, nonatomic) struct CGSize minimumContentSize;
- (struct CGRect)contentBoundsInCoordinateSpace:(id)arg1;
- (_Bool)contentAreaContainsPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)setContentInsets:(struct UIEdgeInsets)arg1 changeReason:(long long)arg2;
- (void)commentsTableDataController:(id)arg1 presentViewController:(id)arg2;
- (void)commentsTableDataController:(id)arg1 tableViewDidScroll:(id)arg2;
- (void)commentsTableDataController:(id)arg1 didChangeEditing:(_Bool)arg2;
- (void)_updateTableDataController;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAssetViewModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

