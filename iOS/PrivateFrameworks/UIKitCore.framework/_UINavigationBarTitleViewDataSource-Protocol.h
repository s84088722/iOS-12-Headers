//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UINavigationBarTitleViewOverlayRects;
@protocol _UINavigationBarAugmentedTitleView;

@protocol _UINavigationBarTitleViewDataSource <NSObject>
- (void)titleViewChangedMaximumBackButtonWidth:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedPreferredDisplaySize:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedStandardDisplayItems:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedHeight:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedUnderlayContent:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleView:(UIView<_UINavigationBarAugmentedTitleView> *)arg1 needsUpdatedContentOverlayRects:(_UINavigationBarTitleViewOverlayRects *)arg2;
@end

