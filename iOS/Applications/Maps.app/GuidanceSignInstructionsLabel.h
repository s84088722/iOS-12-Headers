//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSString, RefittedFrame, UIColor;

__attribute__((visibility("hidden")))
@interface GuidanceSignInstructionsLabel : UIView <CAAnimationDelegate>
{
    NSArray *_textAlternatives;
    UIColor *_textColor;
    UIColor *_accentColor;
    double _maximumWidth;
    unsigned long long _maximumNumberOfLines;
    long long _textAlignment;
    RefittedFrame *_cachedFrame;
    int _variant;
    NSString *_fontName;
    double _fontSize;
    int _framing;
    NSArray *_subLayers;
    unsigned long long numberOfLinesToAnimateUp;
    double lastPositionForPercent;
    unsigned long long _animating;
}

+ (double)heightThatFitsWidth:(double)arg1 textAlternatives:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 alignment:(long long)arg4 variant:(int)arg5 fontName:(id)arg6 fontSize:(double)arg7;
+ (id)refittedFrameThatFitsWidth:(double)arg1 textAlternatives:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 alignment:(long long)arg4 color:(id)arg5 variant:(int)arg6 fontName:(id)arg7 fontSize:(double)arg8;
+ (id)stringByReplacingWhitespaceToAvoidOrphanWords:(id)arg1;
+ (double)heightThatFitsWidth:(double)arg1 text:(id)arg2 shorterAlternatives:(id)arg3 maximumNumberOfLines:(unsigned long long)arg4 alignment:(long long)arg5 variant:(int)arg6 fontName:(id)arg7 fontSize:(double)arg8;
+ (id)attributedStringWithText:(id)arg1 alignment:(long long)arg2 color:(id)arg3 variant:(int)arg4 minimumLineHeight:(double *)arg5 fontName:(id)arg6 fontSize:(double)arg7;
+ (id)stringAttributesForInstructionsTextWithAlignment:(long long)arg1 color:(id)arg2 variant:(int)arg3 minimumLineHeight:(double *)arg4 fontName:(id)arg5 fontSize:(double)arg6;
@property(nonatomic) int framing; // @synthesize framing=_framing;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) int variant; // @synthesize variant=_variant;
@property(retain, nonatomic) RefittedFrame *cachedFrame; // @synthesize cachedFrame=_cachedFrame;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSArray *textAlternatives; // @synthesize textAlternatives=_textAlternatives;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateLinePositionAnimated:(_Bool)arg1 fromPosition:(double)arg2 toPosition:(double)arg3 duration:(double)arg4;
- (void)updateLinePosition;
- (void)transformSublayerFromPercentageComplete:(double)arg1 toPercentageComplete:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)transformSublayerByPercentageComplete:(double)arg1;
- (void)textLinesShouldAnimateFromHeight:(double)arg1;
@property(readonly, nonatomic) double textWidth;
- (double)heightThatFitsWidth:(double)arg1;
- (void)drawSublayers;
- (void)drawRect:(struct CGRect)arg1;
- (id)refittedFrame;
- (void)setText:(id)arg1 shorterAlternatives:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

