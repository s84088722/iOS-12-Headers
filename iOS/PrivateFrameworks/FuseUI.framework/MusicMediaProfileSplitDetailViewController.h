//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicMediaDetailSplitViewController-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerViewControllerDelegate-Protocol.h>

@class MusicClientContext, MusicMediaDetailTintInformation, MusicVerticalScrollingContainerViewController, NSString;
@protocol MusicMediaDetailSplitViewControllerDelegate;

@interface MusicMediaProfileSplitDetailViewController : UIViewController <MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController>
{
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
    MusicClientContext *_clientContext;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    id <MusicMediaDetailSplitViewControllerDelegate> _mediaSplitViewControllerDelegate;
    UIViewController *_relatedContentViewController;
}

@property(retain, nonatomic) UIViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property(nonatomic) __weak id <MusicMediaDetailSplitViewControllerDelegate> mediaSplitViewControllerDelegate; // @synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate;
@property(copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property(retain, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_applyTintInformation;
- (void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

