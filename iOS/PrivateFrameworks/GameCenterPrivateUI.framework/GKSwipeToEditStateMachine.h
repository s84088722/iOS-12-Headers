//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/_GKStateMachine.h>

#import <GameCenterPrivateUI/GKSegmentedSectionDataSourceEventHandler-Protocol.h>
#import <GameCenterPrivateUI/UIGestureRecognizerDelegate-Protocol.h>

@class GKCancelSwipeToEditGestureRecognizer, GKCollectionViewCell, GKCollectionViewDataSource, NSIndexPath, NSString, UICollectionView, UIPanGestureRecognizer, _UIDynamicAnimation;

@interface GKSwipeToEditStateMachine : _GKStateMachine <UIGestureRecognizerDelegate, GKSegmentedSectionDataSourceEventHandler>
{
    int _debounce;
    UICollectionView *_collectionView;
    GKCollectionViewDataSource *_gkDataSource;
    GKCancelSwipeToEditGestureRecognizer *_editModeCancelRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    GKCollectionViewCell *_editingCell;
    double _startTrackingX;
    _UIDynamicAnimation *_openAnimation;
}

@property(retain, nonatomic) _UIDynamicAnimation *openAnimation; // @synthesize openAnimation=_openAnimation;
@property(nonatomic) double startTrackingX; // @synthesize startTrackingX=_startTrackingX;
@property(retain, nonatomic) GKCollectionViewCell *editingCell; // @synthesize editingCell=_editingCell;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) GKCancelSwipeToEditGestureRecognizer *editModeCancelRecognizer; // @synthesize editModeCancelRecognizer=_editModeCancelRecognizer;
@property(retain, nonatomic) GKCollectionViewDataSource *gkDataSource; // @synthesize gkDataSource=_gkDataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)shutActionPaneForEditingCellAnimated:(_Bool)arg1;
- (void)didExitAnimatingOpenState;
- (void)didEnterAnimatingOpenState;
- (void)didEnterAnimatingShutState;
- (void)didEnterNothingState;
- (void)didExitNothingState;
- (void)didExitEditingState;
- (void)didEnterEditingState;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCancelTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (double)xPositionForTranslation:(struct CGPoint)arg1;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *trackedIndexPath;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

