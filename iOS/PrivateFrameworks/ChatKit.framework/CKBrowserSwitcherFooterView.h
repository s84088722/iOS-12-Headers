//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CKAppStripLayout, NSString, NSTimer, UICollectionView, UILongPressGestureRecognizer;
@protocol CKAppStripPredictiveTypeTransition, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherFooterViewDelegate;

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    CKAppStripLayout *_appStripLayout;
    UICollectionView *_collectionView;
    UIView *_predictiveTypeSnapshotView;
    UIView *_visibleView;
    id <CKAppStripPredictiveTypeTransition> _animator;
    struct UIEdgeInsets _minifiedContentInsets;
    _Bool _isMagnified;
    _Bool _isDoingMagnificationAnimation;
    _Bool _isMagnificationEnabled;
    _Bool _ignoreDataSourceChanges;
    NSTimer *_minificationTimer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UILongPressGestureRecognizer *_touchTracker;
    _Bool _hasTouches;
    _Bool _scrollsLastUsedAppIconIntoView;
    _Bool _hideShinyStatus;
    _Bool _minifiesOnSelection;
    id <CKBrowserSwitcherFooterViewDelegate> _delegate;
    id <CKBrowserSwitcherFooterViewDataSource> _dataSource;
    double _snapshotVerticalOffset;
    UIView *_grayLine;
}

@property(retain, nonatomic) UIView *grayLine; // @synthesize grayLine=_grayLine;
@property(nonatomic) double snapshotVerticalOffset; // @synthesize snapshotVerticalOffset=_snapshotVerticalOffset;
@property(nonatomic) _Bool minifiesOnSelection; // @synthesize minifiesOnSelection=_minifiesOnSelection;
@property(retain, nonatomic) CKAppStripLayout *appStripLayout; // @synthesize appStripLayout=_appStripLayout;
@property(nonatomic) _Bool hideShinyStatus; // @synthesize hideShinyStatus=_hideShinyStatus;
@property(nonatomic) _Bool scrollsLastUsedAppIconIntoView; // @synthesize scrollsLastUsedAppIconIntoView=_scrollsLastUsedAppIconIntoView;
@property(nonatomic) _Bool isMagnified; // @synthesize isMagnified=_isMagnified;
@property(nonatomic) __weak id <CKBrowserSwitcherFooterViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CKBrowserSwitcherFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView;
- (void)_updateVisibilityState;
- (void)animateAppStripVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePredictiveTypeSnapshot:(id)arg1;
- (void)reloadData;
- (void)installedAppsChanged:(id)arg1;
- (void)updateCollectionView:(id)arg1;
- (void)visibleAppsChanges:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)adjustMagnificationAtPoint:(struct CGPoint)arg1 minifyImmediately:(_Bool)arg2;
- (struct CGPoint)targetContentOffsetForFocusPoint:(struct CGPoint)arg1 initialLayoutMode:(unsigned long long)arg2 finalLayoutMode:(unsigned long long)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)minifyImmediately:(_Bool)arg1;
- (void)touchTrackerTrackedTouches:(id)arg1;
- (void)appsLongPressed:(id)arg1;
- (double)contentHeight;
- (void)clearSelection;
- (void)resetScrollPosition;
- (void)selectPluginAtIndexPath:(id)arg1;
- (void)setInitiallySelectedPluginIfNeeded;
@property(nonatomic) _Bool showBorders;
- (struct UIEdgeInsets)insetsForAppStrip;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

