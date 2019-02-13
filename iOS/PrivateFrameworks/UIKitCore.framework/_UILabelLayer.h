//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

__attribute__((visibility("hidden")))
@interface _UILabelLayer : CALayer
{
    _UILabelContentLayer *_contentLayer;
    _Bool _contentInsetsValid;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
- (void)setContentsScale:(double)arg1;
- (void)setContentsMultiplyColor:(struct CGColor *)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;
- (void)setContentsGravity:(id)arg1;
- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(_Bool)arg1;
- (void)setMasksToBounds:(_Bool)arg1;
- (void)_clearContents;
- (void)_updateContentLayer;
- (void)invalidateContentInsets;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setFrameOrBounds:(struct CGRect)arg1 settingAction:(CDUnknownBlockType)arg2;
- (void)layoutSublayers;
- (void)updateContentLayerSize;
- (void)updateContentInsets;

@end

