//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface UISearchDisplayControllerContainerView : UIView
{
    _Bool _collapsedTopView;
    NSLayoutConstraint *_topViewHeightConstraint;
    NSLayoutConstraint *_topViewAttributeTopConstraint;
    UIView *_topView;
    UIView *_bottomView;
    UIView *_behindView;
}

@property(readonly, nonatomic) UIView *behindView; // @synthesize behindView=_behindView;
@property(readonly, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSLayoutConstraint *topViewAttributeTopConstraint; // @synthesize topViewAttributeTopConstraint=_topViewAttributeTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topViewHeightConstraint; // @synthesize topViewHeightConstraint=_topViewHeightConstraint;
- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureInteractionForContainment:(_Bool)arg1;
- (void)adjustTopAttributeConstantByDelta:(double)arg1;
- (void)updateTopAttributeConstant:(double)arg1;
- (void)setBottomViewUserInteractionEnabled:(_Bool)arg1;
- (void)collapseTopView;
- (void)updateTopViewHeight:(double)arg1 animateUpdate:(_Bool)arg2;
- (void)updateTopViewHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 topViewHeight:(double)arg2;

@end

