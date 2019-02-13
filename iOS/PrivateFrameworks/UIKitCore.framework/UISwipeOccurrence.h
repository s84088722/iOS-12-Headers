//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISwipeActionPullViewDelegate-Protocol.h>

@class NSDictionary, NSIndexPath, NSString, UIContextualAction, UISwipeActionController, UISwipeActionPullView, UIView;

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate>
{
    _Bool _active;
    _Bool _shouldReenableUserInteraction;
    NSIndexPath *_indexPath;
    UIContextualAction *_currentAction;
    unsigned long long _currentDirection;
    UIView *_swipedView;
    UISwipeActionController *_controller;
    UISwipeActionPullView *_leadingPullView;
    UISwipeActionPullView *_trailingPullView;
    NSDictionary *_swipeDirectionToPullView;
    struct CGPoint _swipedViewInitialPosition;
    struct UIEdgeInsets _extraInsets;
    CDStruct_9b6dff2a _currentSwipeInfo;
}

@property(retain, nonatomic) NSDictionary *swipeDirectionToPullView; // @synthesize swipeDirectionToPullView=_swipeDirectionToPullView;
@property(retain, nonatomic) UISwipeActionPullView *trailingPullView; // @synthesize trailingPullView=_trailingPullView;
@property(retain, nonatomic) UISwipeActionPullView *leadingPullView; // @synthesize leadingPullView=_leadingPullView;
@property(nonatomic) __weak UISwipeActionController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool shouldReenableUserInteraction; // @synthesize shouldReenableUserInteraction=_shouldReenableUserInteraction;
@property(nonatomic) struct CGPoint swipedViewInitialPosition; // @synthesize swipedViewInitialPosition=_swipedViewInitialPosition;
@property(retain, nonatomic) UIView *swipedView; // @synthesize swipedView=_swipedView;
@property(nonatomic) struct UIEdgeInsets extraInsets; // @synthesize extraInsets=_extraInsets;
@property(nonatomic) CDStruct_9b6dff2a currentSwipeInfo; // @synthesize currentSwipeInfo=_currentSwipeInfo;
@property(nonatomic) unsigned long long currentDirection; // @synthesize currentDirection=_currentDirection;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIContextualAction *currentAction; // @synthesize currentAction=_currentAction;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2;
- (void)_resetPullViewsImmediately;
- (struct CGRect)_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3;
- (void)_updatePullView:(id)arg1;
- (void)_createPullViewsIfNeeded;
- (unsigned long long)_swipeDirectionForPullView:(id)arg1;
- (id)_pullViewForSwipeDirection:(unsigned long long)arg1;
- (void)_performSwipeAction:(id)arg1 inPullview:(id)arg2 swipeInfo:(CDStruct_9b6dff2a)arg3;
- (_Bool)shouldDismissWithTouchLocation:(struct CGPoint)arg1;
- (void)performPrimaryActionWithSwipeInfo:(CDStruct_9b6dff2a)arg1;
- (void)_updateLayoutUsingCurrentSwipeInfo:(_Bool)arg1;
- (void)updateLayout;
- (void)_resetItemWithSwipeInfo:(CDStruct_9b6dff2a)arg1 animated:(_Bool)arg2 deletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetItemWithSwipeInfo:(CDStruct_9b6dff2a)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveItemWithSwipeInfo:(CDStruct_9b6dff2a)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endSwipe;
- (void)beginSwipe;
- (CDStruct_324b76a9)prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2;
- (id)initWithController:(id)arg1 indexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

