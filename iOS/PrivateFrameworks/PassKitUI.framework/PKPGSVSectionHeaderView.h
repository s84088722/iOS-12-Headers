//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, UIActivityIndicatorView, UILabel;

@interface PKPGSVSectionHeaderView : UIView
{
    UILabel *_titleView;
    UILabel *_environmentLabel;
    PKContinuousButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    struct UIEdgeInsets _margins;
    _Bool _showActivityIndicator;
    unsigned long long _passType;
}

@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(readonly, nonatomic) unsigned long long passType; // @synthesize passType=_passType;
- (void).cxx_destruct;
- (void)_addTapped;
- (void)addTapped;
- (void)layoutSubviews;
- (id)initWithPassType:(unsigned long long)arg1;
- (id)init;

@end

