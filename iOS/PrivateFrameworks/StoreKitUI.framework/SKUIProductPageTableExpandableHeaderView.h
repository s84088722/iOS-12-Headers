//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, SKUIColorScheme, UIColor, UILabel, UIView;

@interface SKUIProductPageTableExpandableHeaderView : UIControl
{
    UILabel *_actionLabel;
    UIView *_bottomBorderView;
    UILabel *_titleLabel;
    UIView *_topBorderView;
    SKUIColorScheme *_colorScheme;
}

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) UIColor *topBorderColor;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) UIColor *bottomBorderColor;
@property(copy, nonatomic) NSString *actionString;

@end

