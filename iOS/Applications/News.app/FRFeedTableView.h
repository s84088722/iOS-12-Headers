//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "FRArticleMarkingSwipeActionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FRArticleMarkingSwipeActionView, NSIndexPath, NSString, UIPanGestureRecognizer, _UIContentUnavailableView, _UIStatesFeedbackGenerator;
@protocol FRFeedCellTableViewDelegate;

@interface FRFeedTableView : UITableView <FRArticleMarkingSwipeActionViewDelegate, UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_swipeActionPanRecognizer;
    double _initialTranslation;
    double _confirmationTranslationAdjustment;
    FRArticleMarkingSwipeActionView *_leftView;
    FRArticleMarkingSwipeActionView *_rightView;
    _UIContentUnavailableView *_noContentView;
    _Bool _didSwipeTriggerDestructiveAction;
    NSIndexPath *_swipedIndexPath;
    _UIStatesFeedbackGenerator *_statesBehavior;
    NSString *_initialState;
}

@property(retain, nonatomic) NSString *initialState; // @synthesize initialState=_initialState;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *statesBehavior; // @synthesize statesBehavior=_statesBehavior;
@property(nonatomic) _Bool didSwipeTriggerDestructiveAction; // @synthesize didSwipeTriggerDestructiveAction=_didSwipeTriggerDestructiveAction;
@property(retain, nonatomic) NSIndexPath *swipedIndexPath; // @synthesize swipedIndexPath=_swipedIndexPath;
- (void).cxx_destruct;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (void)swipeActionPullView:(id)arg1 tappedAction:(unsigned long long)arg2;
- (id)swipeActionPullView:(id)arg1 smallIconForAction:(unsigned long long)arg2;
- (id)swipeActionPullView:(id)arg1 iconForAction:(unsigned long long)arg2;
- (id)swipeActionPullView:(id)arg1 titleForAction:(unsigned long long)arg2;
- (void)_setSwipedIndexPath:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)resetSwipedRowAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSwipedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isSwipeActionViewOpen;
- (void)_performDestructiveAction:(unsigned long long)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(_Bool)arg3;
- (void)_performNonDestructiveAction:(unsigned long long)arg1 atIndexPath:(id)arg2;
- (void)deleteRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (id)_swipedCell;
- (double)_adjustedXOffsetForInputOffset:(double)arg1;
- (void)_resetSwipeViewPositionsImmediately;
- (void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(_Bool)arg3 usingSpringWithStiffness:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (double)_rubberBandOffsetForOffset:(double)arg1 usingSwipeView:(id)arg2;
- (void)_swipeRecognizerChanged:(id)arg1;
- (id)_activePullView;
- (void)_resolveSwipeActionsForPullView:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_makePullViewActive:(id)arg1 atIndexPath:(id)arg2;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)swipeRecognizerDidRecognize:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)deleteConfirmationIndexPath;
- (void)_notifyDelegateDidEndEditingRowAtIndexPath:(id)arg1;
- (void)_notifyDelegateWillBeginEditingRowAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)setContentUnavailableTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <FRFeedCellTableViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

