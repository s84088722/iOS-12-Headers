//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUIFramework/__MFMailComposeViewAccessibility_super.h>

@interface MFMailComposeViewAccessibility : __MFMailComposeViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (unsigned long long)_axIndexOfRecipient:(id)arg1 inArray:(id)arg2;
- (void)dropTarget:(id)arg1 dragDidMoveToPoint:(struct CGPoint)arg2;
- (void)dropTarget:(id)arg1 dragEnteredAtPoint:(struct CGPoint)arg2;
- (id)dragSource:(id)arg1 draggableItemsAtPoint:(struct CGPoint)arg2;
- (void)setFromAddressPickerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)presentSearchResults:(id)arg1;
- (id)_searchResultsTable;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (_Bool)shouldGroupAccessibilityChildren;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (void)_accessibilityLoadAccessibilityInformation;

@end
