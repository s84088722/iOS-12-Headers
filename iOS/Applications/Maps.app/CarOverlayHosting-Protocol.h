//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UILayoutGuide, UIView, UIViewController;
@protocol CarOverlay;

@protocol CarOverlayHosting <NSObject>
@property(readonly, nonatomic) UILayoutGuide *viewportLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *mapInsetsLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property(readonly, nonatomic) __weak UIViewController *containingViewController;
@property(readonly, nonatomic) UIView *overlayContentView;
- (void)setViewportConstraintsEnabled:(_Bool)arg1 forOverlay:(id <CarOverlay>)arg2;
- (void)setViewportConstraints:(NSArray *)arg1 forOverlay:(id <CarOverlay>)arg2;
- (void)setMapInsetsConstraintsEnabled:(_Bool)arg1 forOverlay:(id <CarOverlay>)arg2;
- (void)setMapInsetsConstraints:(NSArray *)arg1 forOverlay:(id <CarOverlay>)arg2;
- (void)setCollisionConstraintsEnabled:(_Bool)arg1 forOverlay:(id <CarOverlay>)arg2;
- (void)setCollisionConstraints:(NSArray *)arg1 forOverlay:(id <CarOverlay>)arg2;
- (UILayoutGuide *)collisionGuideForEdge:(unsigned long long)arg1;
- (void)setShowingConstraintsEnabled:(_Bool)arg1 forOverlay:(id <CarOverlay>)arg2;
- (void)setConstraints:(NSArray *)arg1 forHidingOverlay:(id <CarOverlay>)arg2;
- (void)setConstraints:(NSArray *)arg1 forShowingOverlay:(id <CarOverlay>)arg2;
@end

