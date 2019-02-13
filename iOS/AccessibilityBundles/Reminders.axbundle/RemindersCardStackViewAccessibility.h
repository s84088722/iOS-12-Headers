//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__RemindersCardStackViewAccessibility_super.h"

@interface RemindersCardStackViewAccessibility : __RemindersCardStackViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (_Bool)isAccessibilityOpaqueElementProvider;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)_accessibilityScrollingEnabled;
- (id)_accessibilityScrollStatus;
- (_Bool)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)cardViewPanDidEnd:(id)arg1;
- (void)cardViewPanDidBegin:(id)arg1;
- (void)_animateCardView:(id)arg1 toIndex:(long long)arg2 referenceView:(id)arg3 orderAbove:(_Bool)arg4 reorderAfter:(double)arg5;
- (void)_tileCardsForState:(int)arg1 eager:(_Bool)arg2;
- (void)setPresentationState:(int)arg1 animated:(_Bool)arg2;
- (id)_accessibilityFirstViewInPileAtBottom;
- (id)_axListControllerForCardController:(id)arg1;
- (id)_accessibilityPresentedCard;
- (double)_axCardSpacing;
- (double)_axIdealYPositionForCardView:(id)arg1;
- (int)_accessibilityCardStackViewState;

@end

