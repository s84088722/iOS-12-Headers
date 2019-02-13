//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXUIImageTile.h>

#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXUIFloatingContentView, UIView, UIViewController;
@protocol PXUISlideshowViewTileDelegate;

@interface PXUISlideshowViewTile : PXUIImageTile <PXUIViewBasicTile>
{
    UIView *_containerView;
    PXUIFloatingContentView *_floatingView;
    _Bool _slideshowViewHidden;
    UIViewController *_slideshowViewController;
    id <PXUISlideshowViewTileDelegate> _delegate;
    UIView *__contentView;
    UIView *__slideshowSnapshotView;
}

@property(retain, nonatomic, setter=_setSlideshowSnapshotView:) UIView *_slideshowSnapshotView; // @synthesize _slideshowSnapshotView=__slideshowSnapshotView;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(nonatomic) __weak id <PXUISlideshowViewTileDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSlideshowViewHidden) _Bool slideshowViewHidden; // @synthesize slideshowViewHidden=_slideshowViewHidden;
@property(retain, nonatomic) UIViewController *slideshowViewController; // @synthesize slideshowViewController=_slideshowViewController;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)_updateContentViewFrame;
- (void)_updateContentViewVisibility;
- (void)_updateSubviewOrdering;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end

