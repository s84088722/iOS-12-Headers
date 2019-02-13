//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WKWebView, _SFBrowserToolbar, _SFCrashBanner, _SFLinkPreviewHeader, _SFNavigationBar;
@protocol SFBrowserViewDelegate;

@interface _SFBrowserView : UIView
{
    _Bool _contentReadyForDisplay;
    _Bool _shouldUseScrollToTopView;
    _Bool _hasReceivedTouchEvents;
    UIView *_contentContainerView;
    _SFBrowserToolbar *_toolbar;
    _SFNavigationBar *_navigationBar;
    double _bottomBarOffset;
    double _topBarHeight;
    WKWebView *_currentWebView;
    unsigned long long _navigationBarBehavior;
    _SFLinkPreviewHeader *_previewHeader;
    UIView *_statusBarBackgroundView;
    UIView *_scrollToTopView;
    _SFCrashBanner *_crashBanner;
    double _crashBannerOffset;
    double _minimalUITopOffset;
    id <SFBrowserViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SFBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimalUITopOffset; // @synthesize minimalUITopOffset=_minimalUITopOffset;
@property(readonly, nonatomic) _Bool hasReceivedTouchEvents; // @synthesize hasReceivedTouchEvents=_hasReceivedTouchEvents;
@property(nonatomic) double crashBannerOffset; // @synthesize crashBannerOffset=_crashBannerOffset;
@property(retain, nonatomic) _SFCrashBanner *crashBanner; // @synthesize crashBanner=_crashBanner;
@property(nonatomic) _Bool shouldUseScrollToTopView; // @synthesize shouldUseScrollToTopView=_shouldUseScrollToTopView;
@property(readonly, nonatomic) UIView *scrollToTopView; // @synthesize scrollToTopView=_scrollToTopView;
@property(retain, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(retain, nonatomic) _SFLinkPreviewHeader *previewHeader; // @synthesize previewHeader=_previewHeader;
@property(nonatomic) unsigned long long navigationBarBehavior; // @synthesize navigationBarBehavior=_navigationBarBehavior;
@property(readonly, nonatomic) __weak WKWebView *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(nonatomic) double topBarHeight; // @synthesize topBarHeight=_topBarHeight;
@property(nonatomic) double bottomBarOffset; // @synthesize bottomBarOffset=_bottomBarOffset;
@property(retain, nonatomic) _SFNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) _SFBrowserToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updatePreviewHeader;
- (void)addWebView:(id)arg1;
@property(readonly, nonatomic) double navigationBarOffset;
- (void)updateDismissButtonStyle:(long long)arg1;
- (void)updateNavigationBarTintColor:(id)arg1;
- (void)updateToolbarTintColor:(id)arg1;
- (void)setContentReadyForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

