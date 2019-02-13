//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/__UITableViewCellAccessibility_super.h>

@interface UITableViewCellAccessibility : __UITableViewCellAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityShouldIncludeRowRangeInElementDescription;
- (_Bool)_accessibilityViewHierarchyHasNativeFocus;
- (_Bool)_accessibilitySetNativeFocus;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)accessibilityHeaderElements;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (_Bool)_accessibilityIsSpeakThisElement;
- (_Bool)_accessibilityHandleReorderMove:(id)arg1 up:(_Bool)arg2;
- (_Bool)_accessibilityHandleReorderMoveUp:(id)arg1;
- (_Bool)_accessibilityHandleReorderMoveDown:(id)arg1;
- (id)_privateAccessibilityCustomActions;
- (id)_axCustomActionsForActions:(id)arg1;
- (_Bool)_axPerformAction:(id)arg1;
- (id)_accessibilityScannerGroupElements;
- (_Bool)accessibilityScrollToVisible;
- (_Bool)_accessibilityIsOutsideParentBounds;
- (id)_accessibilityParentTableView;
- (id)_accessibilityEquivalenceTag;
- (_Bool)_accessibilityPerformSwipeAction:(id)arg1;
- (_Bool)_accessibilityHandleDetailButtonPress:(id)arg1;
- (_Bool)_accessibilitySwipeActionsAllowed;
- (_Bool)_hasTrailingSwipeActions;
- (_Bool)isAccessibilityElement;
- (void)_beginSwiping;
- (id)accessibilityLabel;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (_Bool)_accessibilityShouldBeEmptyIfHidden;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (void)editControlWasClicked:(id)arg1;
- (double)_accessibilityAllowedGeometryOverlap;
- (double)_accessibilityAllowedGeometryOverlapX;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)_accessibilityShouldSortTableViewCellChildren;
- (id)_accessibilityChildren;
- (void)accessibilitySetIsFetchingChildren:(_Bool)arg1;
- (_Bool)accessibilityIsFetchingChildren;
- (_Bool)_accessibilityIgnoreInternalLabels;
- (_Bool)_axSubviewIgnoredDueToHiddenOrZeroAlphaAncestry:(id)arg1;
- (void)setShowingDeleteConfirmation:(_Bool)arg1;
- (_Bool)_accessibilityTableViewCellSubclassShouldExist;
- (void)_setShowingDeleteConfirmation:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didTransitionToState:(unsigned long long)arg1;
- (id)_accessibilityRetrieveTableViewCellText:(long long)arg1;
- (id)_accessibilityRetrieveTableViewCellText;
- (_Bool)_accessibilityLabelShouldBeDistinct:(id)arg1;
- (id)tableTextAccessibleLocalizedTableName:(id)arg1;
- (id)tableTextAccessibleLocalizationBundlePath:(id)arg1;
- (id)tableTextAccessibleLocalizationBundleID:(id)arg1;
- (id)tableTextAccessibleStringKey:(id)arg1;
- (id)tableTextAccessibleLabel:(id)arg1;
- (id)_accessibilityRetrieveTableViewIvarsText;
- (struct CGRect)tableTextAccessibleFrame:(id)arg1;
- (id)_accessibilityTextElementText;
- (void)setAccessoryView:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityAvoidsMockViewContainers;
- (_Bool)accessibilityElementIsFocused;
- (_Bool)_accessibilityIsDescendantOfElement:(id)arg1;
- (void)_accessibilityUpdateRemoveControl;
- (_Bool)_accessibilityAlwaysReturnsChild;
- (void)_accessibilityHandleRemoveConfirm;
- (id)_accessibilityFindRemoveConfirmSubview;
- (void)_accessibilityHandleRemoveSwitch;
- (id)_accessibilityCellEditingControl;
- (_Bool)_accessibilityIsRemoveConfirmVisible;
- (_Bool)_accessibilityIsRemoveControlVisible;
- (id)_accessibilityPreviousIndexPath;
- (_Bool)_accessibilityHasTextOperations;
- (id)_accessibilityNextIndexPath;
- (id)_accessibilityIndexPath;
- (_Bool)_accessibilityTableViewCellHidesInsertControl;
- (void)_setAccessibilityMockParent:(id)arg1;
- (id)_accessibilityMockParent;
- (id)_accessibilityInternalData;
- (struct _NSRange)accessibilityRowRange;
- (id)_accessibilityOverrideChildren;
- (id)_accessibilityContainerElements;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1;
- (_Bool)_accessibilityUsesOverrideContainerProtocol;
- (id)accessibilityElements;
- (void)dealloc;
- (void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2;
- (_Bool)_accessibilityTableViewIsOpaque;
- (void)_didRemoveSubview:(id)arg1;
- (void)prepareForReuse;
- (void)_accessibilitySwitchMockView:(id)arg1 toParent:(id)arg2 withPossibleSubviews:(id)arg3;
- (void)_accessibilityReevaluateChildren;
- (void)_accessibilityClearChildren;
- (_Bool)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)arg1;
- (_Bool)_accessibilityIsTableCell;
- (struct _NSRange)_accessibilityIndexPathAsRange;
- (_Bool)_accessibilityIsInTableCell;
- (_Bool)_accessibilityIsButtonAccessoryType:(long long)arg1;
- (_Bool)_accessibilityIsButton;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildrenInAccessibilitySortedOrder:(_Bool)arg1;
- (id)_accessibilityUserTestingChildren;
- (long long)_accessibilityUserTestingChildrenCount;
- (id)_checkmarkImage:(_Bool)arg1;
- (id)_accessibilitySubviewsForAddingWithSort:(_Bool)arg1;
- (id)_accessibilitySubviewsForAdding;
- (void)unregisterMockChild:(id)arg1;
- (void)registerMockChild:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)_accessibilityTableViewSwitch;
- (id)_accessibilityEditableTextFieldIfExists;
- (id)_accessibilityImageViewIfExists;
- (id)_accessibilityDetailTextLabelIfExists;
- (id)_accessibilityTextLabelIfExists;

@end

