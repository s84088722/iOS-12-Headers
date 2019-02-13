//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SiriUIKeyline, UIImageView, UIView;

@interface SiriUIChevronButton : UIButton
{
    UIImageView *_chevronImageView;
    SiriUIKeyline *_keyline;
    _Bool _hasChevron;
    UIView *_subview;
    double _chevronRightInset;
    double _leftSubviewInset;
    double _rightSubviewInset;
    long long _keylineType;
}

@property(nonatomic) _Bool hasChevron; // @synthesize hasChevron=_hasChevron;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property(nonatomic) double rightSubviewInset; // @synthesize rightSubviewInset=_rightSubviewInset;
@property(nonatomic) double leftSubviewInset; // @synthesize leftSubviewInset=_leftSubviewInset;
@property(nonatomic) double chevronRightInset; // @synthesize chevronRightInset=_chevronRightInset;
@property(retain, nonatomic) UIView *subview; // @synthesize subview=_subview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

