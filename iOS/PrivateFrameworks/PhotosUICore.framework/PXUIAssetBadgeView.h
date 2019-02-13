//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXUIExtensionBadgeViewDelegate-Protocol.h>

@class NSString, PXUIExtensionBadgeView, UILabel, _PXUIAssetBadgeImageView, _PXUIAssetBadgeTopLeftGroup;
@protocol PXUIAssetBadgeViewDelegate;

@interface PXUIAssetBadgeView : UIView <PXUIExtensionBadgeViewDelegate>
{
    struct {
        _Bool userDidSelectBadges;
    } _delegateRespondsTo;
    _Bool _isPerformingUpdate;
    struct {
        _Bool topLeftElements;
        _Bool bottomLeadingImage;
        _Bool bottomTrailingImage;
        _Bool bottomLabel;
        _Bool background;
        _Bool contentSize;
    } _needsUpdateFlags;
    _PXUIAssetBadgeTopLeftGroup *_topLeftPrimaryGroup;
    _PXUIAssetBadgeTopLeftGroup *_topLeftSecondaryGroup;
    _PXUIAssetBadgeImageView *_bottomLeadingImageView;
    _PXUIAssetBadgeImageView *_bottomTrailingImageView;
    UILabel *_bottomLabel;
    struct CGSize _contentSize;
    _Bool _overContent;
    id <PXUIAssetBadgeViewDelegate> _delegate;
    long long _style;
    PXUIExtensionBadgeView *__topLeftExtensionBadgeView;
    struct PXAssetBadgeInfo _badgeInfo;
}

+ (double)preferredHeightForStyle:(long long)arg1;
+ (void)preloadResourcesForStyle:(long long)arg1;
@property(retain, nonatomic, setter=_setTopLeftExtensionBadgeView:) PXUIExtensionBadgeView *_topLeftExtensionBadgeView; // @synthesize _topLeftExtensionBadgeView=__topLeftExtensionBadgeView;
@property(nonatomic, getter=isOverContent) _Bool overContent; // @synthesize overContent=_overContent;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(nonatomic) __weak id <PXUIAssetBadgeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateContentSizeIfNeeded;
- (void)_invalidateContentSize;
- (void)_updateBackgroundIfNeeded;
- (void)_invalidateBackground;
- (void)_updateBottomLabelIfNeeded;
- (void)_invalidateBottomLabel;
- (void)_updateBottomTrailingImageIfNeeded;
- (void)_invalidateBottomTrailingImage;
- (void)_updateBottomLeadingImageIfNeeded;
- (void)_invalidateBottomLeadingImage;
- (id)_updateTopLeftGroup:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo)arg2 origin:(struct CGPoint)arg3;
- (void)_updateTopLeftElementsIfNeeded;
- (void)_invalidateTopLeftElements;
- (void)_invalidate;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_setBackgroundImage:(id)arg1;
- (void)_installBadgeViewForType:(long long)arg1;
- (void)extensionBadgeView:(id)arg1 userDidSelectBadge:(unsigned long long)arg2;
- (void)_handleButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutBottomLabel;
- (void)_layoutBottomCornersImages;
- (void)_removeViewsFromGroup:(id)arg1;
- (void)_layoutTopLeftGroup:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

