//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNCardGroup.h>

@class CNContactStore, CNPolicy, NSArray, NSDictionary, NSString;

@interface CNCardPropertyGroup : CNCardGroup
{
    NSArray *_propertyItems;
    NSArray *_displayItems;
    NSArray *_editingItems;
    NSArray *_originalEditingItems;
    _Bool _showActionsWhenEmpty;
    _Bool _allowsDisplayModePickerActions;
    _Bool _isAdded;
    NSString *_property;
    CNPolicy *_policy;
    NSDictionary *_linkedPolicies;
    CNContactStore *_contactStore;
    NSArray *_deletedItems;
}

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;
@property(retain, nonatomic) NSArray *deletedItems; // @synthesize deletedItems=_deletedItems;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(nonatomic) _Bool allowsDisplayModePickerActions; // @synthesize allowsDisplayModePickerActions=_allowsDisplayModePickerActions;
@property(nonatomic) _Bool showActionsWhenEmpty; // @synthesize showActionsWhenEmpty=_showActionsWhenEmpty;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) NSDictionary *linkedPolicies; // @synthesize linkedPolicies=_linkedPolicies;
@property(readonly, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)_nextAvailableSocialService;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableLabel;
- (id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2;
- (id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long *)arg4;
- (id)labelsForItem:(id)arg1;
- (void)saveChangesForItems:(id)arg1;
- (id)policyForItem:(id)arg1;
- (void)_updateNameValuesForItems:(id)arg1;
- (_Bool)_arrayContainsMaxAllowedItems:(id)arg1;
- (_Bool)canAddEditingItem;
- (_Bool)labelsAreUnique;
- (_Bool)isRequired;
- (_Bool)_shouldShowGroupWhenEditing:(_Bool)arg1;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(_Bool)arg3;
- (id)_mergeItems:(id)arg1 forEditing:(_Bool)arg2;
- (id)_loadPropertyItems;
@property(retain, nonatomic) NSArray *editingItems;
- (id)displayItems;
- (void)saveChanges;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (void)removeEditingItem:(id)arg1;
- (_Bool)addEditingItem;
- (id)nextAvailableLabel;
@property(readonly, nonatomic) _Bool modified;
@property(readonly, nonatomic, getter=isMultiLine) _Bool multiLine;
@property(readonly, nonatomic, getter=isFixedValue) _Bool fixedValue;
@property(readonly, nonatomic, getter=isMultiValue) _Bool multiValue;
@property(readonly, nonatomic) _Bool allowsAdding;
- (id)description;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;

@end

