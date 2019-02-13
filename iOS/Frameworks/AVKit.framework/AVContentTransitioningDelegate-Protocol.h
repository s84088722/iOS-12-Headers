//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlayerLayerAndContentOverlayContainerView, UIView;
@protocol AVContentTransitioning;

@protocol AVContentTransitioningDelegate <NSObject>
- (void)contentTransitioningViewDidChangeTransitionStatus:(UIView<AVContentTransitioning> *)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;
- (AVPlayerLayerAndContentOverlayContainerView *)contentTransitioningPlayerContentViewForTransition:(UIView<AVContentTransitioning> *)arg1;
- (_Bool)contentTransitioningView:(UIView<AVContentTransitioning> *)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
- (_Bool)contentTransitioningViewShouldBeginDragging:(UIView<AVContentTransitioning> *)arg1 locationInView:(struct CGPoint)arg2;
- (_Bool)contentTransitioningEnabled:(UIView<AVContentTransitioning> *)arg1;
@end

