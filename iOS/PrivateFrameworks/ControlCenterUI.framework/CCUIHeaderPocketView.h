//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCUIStatusBar, MTMaterialView, SBUIChevronView;
@protocol CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView
{
    MTMaterialView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    CCUIStatusBar *_statusBar;
    id <CCUIStatusBarDelegate> _statusBarDelegate;
    unsigned long long _mode;
    double _backgroundAlpha;
    double _contentAlpha;
    double _contentAlphaMultiplier;
    struct UIEdgeInsets _edgeInsets;
    struct CGAffineTransform _contentTransform;
}

@property(nonatomic) struct CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) double contentAlphaMultiplier; // @synthesize contentAlphaMultiplier=_contentAlphaMultiplier;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <CCUIStatusBarDelegate> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;
@property(readonly, nonatomic) CCUIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (void).cxx_destruct;
- (void)_updateContentTransform;
- (void)_updateAlpha;
@property(nonatomic) unsigned long long chevronState; // @dynamic chevronState;
@property(nonatomic) struct CGAffineTransform compactScaleTransform; // @dynamic compactScaleTransform;
@property(readonly, nonatomic) struct CGRect contentBounds; // @dynamic contentBounds;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

