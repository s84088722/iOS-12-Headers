//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIColor;

@interface TopHitCompletionView : UIView
{
    NSAttributedString *_attributedText;
    unsigned long long _highlightStartIndex;
    UIColor *_highlightColor;
}

@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1 highlightStartIndex:(unsigned long long)arg2;

@end

