//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class UIImageView;

@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView
{
    UIImageView *_glyph;
    UIImageView *_dot;
}

@property(retain, nonatomic) UIImageView *dot; // @synthesize dot=_dot;
@property(retain, nonatomic) UIImageView *glyph; // @synthesize glyph=_glyph;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)glyphOffset;
- (long long)acknowledgmentType;
- (void)setGlyphColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end

