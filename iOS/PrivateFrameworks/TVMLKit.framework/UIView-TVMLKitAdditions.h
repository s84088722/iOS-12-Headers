//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (TVMLKitAdditions)
+ (void)tv_performByPreventingAdditiveAnimations:(CDUnknownBlockType)arg1;
- (_Bool)tv_shouldAnimatePropertyWithKey:(id)arg1;
- (id)tv_AccessibilityText;
- (void)tv_setAccessibilityText:(id)arg1;
- (void)tv_setSiriData:(id)arg1;
- (id)tv_siriData;
- (_Bool)tv_marqueeOnHighlight;
- (_Bool)tv_showOnHighlight;
- (_Bool)tv_isProxyView;
- (id)tv_elementName;
- (unsigned long long)tv_elementType;
- (id)tv_highlightColor;
- (id)tv_backgroundColor;
- (double)tv_lineSpacing;
- (double)tv_interitemSpacing;
- (double)tv_minWidth;
- (double)tv_minHeight;
- (double)tv_maxWidth;
- (double)tv_maxHeight;
- (double)tv_itemHeight;
- (double)tv_itemWidth;
- (long long)tv_position;
- (long long)tv_contentAlignment;
- (long long)tv_alignment;
- (struct UIEdgeInsets)tv_padding;
- (struct UIEdgeInsets)tv_focusMargin;
- (struct UIEdgeInsets)tv_nonDirectionalMargin;
- (struct UIEdgeInsets)tv_margin;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (_Bool)tv_shouldReuseCachedSizeThatFits:(struct CGSize)arg1 previousTargetSize:(struct CGSize)arg2 newTargetSize:(struct CGSize)arg3;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withSizeCalculation:(CDUnknownBlockType)arg2;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1;
- (void)transferLayoutStylesFromElement:(id)arg1;
- (_Bool)tv_isAnimationDisabledForProperty:(id)arg1;
- (void)tv_disableAnimation:(_Bool)arg1 forProperty:(id)arg2;
- (id)tv_valueForTVViewTag:(id)arg1;
- (void)tv_setValue:(id)arg1 forTVViewTag:(id)arg2;
- (id)valueForTVViewStyle:(id)arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didSelect;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@end

