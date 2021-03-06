//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TabOverview, TabOverviewInterpolatedLocation, TabOverviewInterpolatedValue, TabOverviewItem, TabOverviewItemView, UIView;

@interface TabOverviewItemLayoutInfo : NSObject
{
    NSArray *_interpolatedValues;
    _Bool _snapshotBlank;
    _Bool _closeSynchronized;
    _Bool _visibleInTabOverview;
    TabOverview *_tabOverview;
    TabOverviewItem *_tabOverviewItem;
    UIView *_borrowedContentView;
    TabOverviewItemView *_itemView;
    double _alpha;
    double _snapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedSnapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedTitleAlpha;
    TabOverviewInterpolatedValue *_interpolatedTopBackdropHeight;
    double _titleAlpha;
    double _dimmingAlpha;
    TabOverviewInterpolatedLocation *_interpolatedLocation;
    struct CGRect _snapshotFrame;
    struct CGRect _frame;
    CDStruct_5ca50560 _closeLastLayoutLocation;
    CDStruct_5ca50560 _closeStartLocation;
}

@property(retain, nonatomic) TabOverviewInterpolatedLocation *interpolatedLocation; // @synthesize interpolatedLocation=_interpolatedLocation;
@property(nonatomic) CDStruct_5ca50560 closeStartLocation; // @synthesize closeStartLocation=_closeStartLocation;
@property(nonatomic) CDStruct_5ca50560 closeLastLayoutLocation; // @synthesize closeLastLayoutLocation=_closeLastLayoutLocation;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
@property(nonatomic) double titleAlpha; // @synthesize titleAlpha=_titleAlpha;
@property(retain, nonatomic) TabOverviewInterpolatedValue *interpolatedTopBackdropHeight; // @synthesize interpolatedTopBackdropHeight=_interpolatedTopBackdropHeight;
@property(retain, nonatomic) TabOverviewInterpolatedValue *interpolatedTitleAlpha; // @synthesize interpolatedTitleAlpha=_interpolatedTitleAlpha;
@property(retain, nonatomic) TabOverviewInterpolatedValue *interpolatedSnapshotAlpha; // @synthesize interpolatedSnapshotAlpha=_interpolatedSnapshotAlpha;
@property(nonatomic) double snapshotAlpha; // @synthesize snapshotAlpha=_snapshotAlpha;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGRect snapshotFrame; // @synthesize snapshotFrame=_snapshotFrame;
@property(nonatomic) _Bool visibleInTabOverview; // @synthesize visibleInTabOverview=_visibleInTabOverview;
@property(retain, nonatomic) TabOverviewItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) _Bool closeSynchronized; // @synthesize closeSynchronized=_closeSynchronized;
@property(retain, nonatomic) UIView *borrowedContentView; // @synthesize borrowedContentView=_borrowedContentView;
@property(readonly, nonatomic, getter=isSnapshotBlank) _Bool snapshotBlank; // @synthesize snapshotBlank=_snapshotBlank;
@property(readonly, nonatomic) __weak TabOverviewItem *tabOverviewItem; // @synthesize tabOverviewItem=_tabOverviewItem;
@property(readonly, nonatomic) __weak TabOverview *tabOverview; // @synthesize tabOverview=_tabOverview;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *interpolatedValues;
- (void)removeAllSnapshotLayerAnimations;
- (void)updateSnapshot;
- (void)pulseDimmingView;
- (void)setDimmingAlpha:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)_removeBorrowedContentView;
- (void)_insertBorrowedContentView;
- (void)updateItemView;
- (void)_updateSnapshotImage;
- (void)_clearViewsIfNeeded;
- (void)_clearViews;
- (void)_ensureViews;
- (void)dealloc;
- (id)initWithTabOverview:(id)arg1 item:(id)arg2;
- (id)init;

@end

