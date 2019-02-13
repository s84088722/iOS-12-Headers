//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlatterKit/PLTitledPlatterView.h>

@class NSString, UIButton, UIView, WGWidgetHostingViewController, WGWidgetListItemViewController;

@interface WGWidgetPlatterView : PLTitledPlatterView
{
    UIView *_compatibilityDarkeningView;
    NSString *_longerTitle;
    _Bool _showingMoreContent;
    WGWidgetHostingViewController *_widgetHost;
    WGWidgetListItemViewController *_listItem;
    long long _buttonMode;
}

@property(nonatomic, getter=isShowingMoreContent) _Bool showingMoreContent; // @synthesize showingMoreContent=_showingMoreContent;
@property(nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
@property(nonatomic) __weak WGWidgetListItemViewController *listItem; // @synthesize listItem=_listItem;
@property(nonatomic) __weak WGWidgetHostingViewController *widgetHost; // @synthesize widgetHost=_widgetHost;
- (void).cxx_destruct;
- (void)iconDidInvalidate:(id)arg1;
- (void)_updateCompatibilityDarkeningViewIfNecessary;
- (void)_updateUtilityButtonForMoreContentState:(_Bool)arg1;
- (void)_handleAddWidget:(id)arg1;
- (void)_toggleShowMore:(id)arg1;
- (void)_setUtilityButtonVisible:(_Bool)arg1;
- (_Bool)_isUtilityButtonVisible;
- (void)_updateUtilityButtonForMode:(long long)arg1;
- (void)_handleIconButton:(id)arg1;
@property(nonatomic, getter=isAddWidgetButtonVisible) _Bool addWidgetButtonVisible;
@property(readonly, nonatomic) UIButton *addWidgetButton;
@property(nonatomic, getter=isShowMoreButtonVisible) _Bool showMoreButtonVisible;
@property(readonly, nonatomic) UIButton *showMoreButton;
- (void)_configureHeaderContentView;
- (void)_willRemoveCustomContent:(id)arg1;
- (void)setBackgroundBlurred:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andCornerRadius:(double)arg2;

@end

