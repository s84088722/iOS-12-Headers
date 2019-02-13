//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (TSCHAdditions)
- (void)removeCDEEditorFlipOutAnimation;
- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint)arg1 beginTime:(double)arg2 toLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEEditorFlipInAnimation;
- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint)arg1 beginTime:(double)arg2 fromLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEChartFlipAnimationFromPosition;
- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint)arg1 beginTime:(double)arg2 toLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEChartFlipAnimationToFinalPosition;
- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint)arg1 beginTime:(double)arg2 fromLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEShieldOutAnimation;
- (void)addCDEShieldOutAnimation:(double)arg1;
- (void)removeCDEShieldInAnimation;
- (void)addCDEShieldInAnimation:(double)arg1;
- (void)addPerspectiveProjectionWithDistance:(double)arg1;
- (void)removeCallbackAnimationWithName:(id)arg1;
- (void)addCallbackAnimationWithName:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 target:(id)arg4 selector:(SEL)arg5;
- (void)removeZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 speed:(double)arg2;
@end

