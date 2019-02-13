//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SiriUIContentLabel, UIColor, UIFont;

@interface SiriUITextContainerView : UIView
{
    SiriUIContentLabel *_label;
    UIView *_containerView;
    CDStruct_c3b3c0f9 _textContainerStyle;
}

+ (double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(CDStruct_c3b3c0f9)arg2;
+ (double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(CDStruct_c3b3c0f9)arg2;
+ (struct CGRect)_textBoundingRectWithSize:(struct CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(CDStruct_c3b3c0f9)arg4;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(CDStruct_c3b3c0f9)arg4;
@property(nonatomic) CDStruct_c3b3c0f9 textContainerStyle; // @synthesize textContainerStyle=_textContainerStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 visualEffect:(id)arg2;

@end

