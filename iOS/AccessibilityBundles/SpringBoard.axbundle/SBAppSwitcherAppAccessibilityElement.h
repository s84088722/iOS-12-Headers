//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class SBAppSwitcherContentViewUIViewAccessibility;

@interface SBAppSwitcherAppAccessibilityElement : UIAccessibilityElement
{
    _Bool _isControlCenter;
    id _appLayout;
    id _itemContainer;
    SBAppSwitcherContentViewUIViewAccessibility *_contentView;
}

@property(nonatomic) __weak SBAppSwitcherContentViewUIViewAccessibility *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id itemContainer; // @synthesize itemContainer=_itemContainer;
@property(retain, nonatomic) id appLayout; // @synthesize appLayout=_appLayout;
@property(readonly, nonatomic) _Bool isControlCenter; // @synthesize isControlCenter=_isControlCenter;
- (void).cxx_destruct;
- (_Bool)_accessibilityUpdatesSwitchMenu;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityPreferredScrollActions;
- (_Bool)_accessibilityCanPerformAction:(int)arg1;
- (_Bool)_accessibilityScrollToVisible;
- (id)_accessibilityScrollStatus;
- (_Bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (_Bool)shouldGroupAccessibilityChildren;
- (id)_accessibilityCustomActionGroupIdentifier;
- (_Bool)_accessibilityRetainsCustomRotorActionSetting;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityActivate;

@end

