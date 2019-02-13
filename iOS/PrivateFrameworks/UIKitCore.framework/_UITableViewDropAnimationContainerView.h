//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationContainerView : UIView
{
    long long _activeDropAnimationCount;
    double _originalTargetCenterY;
    struct CGPoint __tableViewContainerOffsetFromTargetCenter;
}

@property(nonatomic) double originalTargetCenterY; // @synthesize originalTargetCenterY=_originalTargetCenterY;
@property(nonatomic) long long activeDropAnimationCount; // @synthesize activeDropAnimationCount=_activeDropAnimationCount;
@property(nonatomic) struct CGPoint _tableViewContainerOffsetFromTargetCenter; // @synthesize _tableViewContainerOffsetFromTargetCenter=__tableViewContainerOffsetFromTargetCenter;
@property(readonly, nonatomic) _Bool hasCompletedAllDropAnimations;
- (void)endDropAnimation;
- (void)beginDropAnimation;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateOffsetFromTargetCenterIfNeeded;
@property(readonly, nonatomic) NSArray *cells;
- (id)init;

@end

