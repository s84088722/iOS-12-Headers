//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MapsActivityViewController, ShareMapRepresentationViewController, UIBarButtonItem;
@protocol MapsActivityContainerViewControllerDelegate, ShareItemSource;

__attribute__((visibility("hidden")))
@interface MapsActivityContainerViewController : UIViewController
{
    MapsActivityViewController *_mapsActivityViewController;
    ShareMapRepresentationViewController *_previewMapViewController;
    UIBarButtonItem *_nextButtonItem;
    double _heightActivityView;
    _Bool _sheetShown;
    id <ShareItemSource> _shareItem;
    _Bool _portraitMode;
    id <MapsActivityContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool portraitMode; // @synthesize portraitMode=_portraitMode;
@property(nonatomic) __weak id <MapsActivityContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_nextButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)removeMapsActivityViewController;
- (void)_updateChildViewControllers;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)_usePortraitModeForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithMapsActivityViewController:(id)arg1 shareItem:(id)arg2;

@end

