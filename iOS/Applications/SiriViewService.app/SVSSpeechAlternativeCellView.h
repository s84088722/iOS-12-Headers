//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel;

@interface SVSSpeechAlternativeCellView : UIView
{
    UILabel *_displayTextLabel;
    UIView *_containerView;
    NSAttributedString *_titleString;
    _Bool _hasSetUpConstraints;
    NSString *_responseText;
}

@property(copy, nonatomic) NSString *responseText; // @synthesize responseText=_responseText;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)edgeInsets;
- (id)initWithTitle:(id)arg1;

@end

