//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/TPLCDBar.h>

@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView : TPLCDBar
{
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled:1;
    _Bool _verticallyCenterTextViewIfLabelless;
}

+ (double)defaultLabelFontSize;
+ (double)defaultTextFontSize;
@property _Bool verticallyCenterTextViewIfLabelless; // @synthesize verticallyCenterTextViewIfLabelless=_verticallyCenterTextViewIfLabelless;
- (void).cxx_destruct;
- (id)secondLineText;
- (void)setSecondLineText:(id)arg1;
- (void)setLayoutAsLabelled:(_Bool)arg1;
- (void)setShadowColor:(id)arg1;
- (id)subImage;
- (void)setSubImage:(id)arg1;
- (void)blinkLabel;
- (id)label;
- (void)setLabel:(id)arg1 animate:(_Bool)arg2;
- (void)setLabel:(id)arg1;
- (void)setLabelFontSize:(double)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGRect)_imageViewFrame;
- (struct CGRect)_labelFrame;
- (struct CGRect)textFrame;
- (struct CGRect)_text1Frame;
- (id)text;
- (void)setText:(id)arg1;
- (void)setTextFontSize:(double)arg1;
- (double)_textVInset;
- (double)_labelVInset;
- (void)setContentsAlpha:(double)arg1;
- (_Bool)shouldCenterContentView;
- (_Bool)shouldCenterText;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (void)_resetContentViewFrame;
- (struct CGRect)fullSizedContentViewFrame;

@end

