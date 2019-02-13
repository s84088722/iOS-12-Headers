//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIImageView, UILabel, UINavigationBar, UISnapshotView, UITabBar, UITabBarItem, UITabBarItemProxy;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView
{
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    UILabel *_titleLabel;
    struct CGPoint _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    struct CGRect _firstItemRect;
    UITabBarItem *_selectedBeforeItem;
    _Bool _isBeingDismissed;
    NSArray *_availableItems;
    UINavigationBar *_navigationBar;
}

@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSArray *availableItems; // @synthesize availableItems=_availableItems;
- (void).cxx_destruct;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (long long)_barMetrics;
- (void)setIsBeingDismissed;
- (void)updateProxiesSelection;
- (void)tintTabBarItemsForEdit:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

