//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactoryHWR_Portrait.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryHWR_Landscape : UIKBRenderFactoryHWR_Portrait
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)arg1 key:(id)arg2 onKeyplane:(id)arg3;
- (void)setupLayoutSegments;
- (struct UIEdgeInsets)symbolFrameInsets;
- (double)spaceKeyFontSize;
- (struct CGPoint)spaceKeyTextOffset;
- (struct CGPoint)deleteGlyphOffset;
- (struct UIEdgeInsets)handwritingAreaInsets;
- (double)handwritingGradientStartLocation;

@end

