//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UISearchBar.h>

#import <UIKitCore/_UIAtomTextViewDelegateInternal-Protocol.h>

@class NSArray, NSProgress, NSString, UIFont, _UISearchAtomTextView;
@protocol _UIAtomSearchBarDelegate;

__attribute__((visibility("hidden")))
@interface _UIAtomSearchBar : UISearchBar <_UIAtomTextViewDelegateInternal>
{
    _UISearchAtomTextView *_atomTextView;
    UIFont *_font;
    struct {
        unsigned int delegateScopeButtonTitlesForRepresentedObject:1;
        unsigned int delegateSelectedScopeButtonIndexForRepresentedObject:1;
        unsigned int delegateSelectedScopeButtonIndexDidChangeForRepresentedObject:1;
        unsigned int delegateSearchButtonTapped:1;
        unsigned int delegateSupportedPasteboardTypes:1;
        unsigned int delegateRepresentedObjectsFromPasteboard:1;
        unsigned int delegateStoreRepresentedObjectsOnPasteboard:1;
        unsigned int showsScopeBar:1;
        unsigned int autoSelected:1;
    } _flags;
    _Bool _showsProgress;
    NSProgress *_progress;
}

+ (id)defaultFont;
@property(nonatomic) _Bool showsProgress; // @synthesize showsProgress=_showsProgress;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)reloadInputViews;
- (_Bool)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;
- (id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
- (id)supportedPasteboardTypesForAtomTextView:(id)arg1;
- (_Bool)_atomTextView:(id)arg1 shouldReplaceRepresentedObject:(id)arg2 replacementText:(id)arg3;
- (void)atomTextViewDidChangeSelection:(id)arg1;
- (id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2;
- (void)_atomTextViewReturnPressed;
- (void)_atomTextViewEndEditing;
- (void)_atomTextViewEditingChanged;
- (void)_atomTextViewBeginEditing;
@property(readonly, nonatomic) _UISearchAtomTextView *atomTextView;
- (void)_setupAtomTextView;
- (void)_updateMagnifyingGlassView;
- (id)_textColor:(_Bool)arg1;
- (id)_glyphAndPlaceholderColor:(_Bool)arg1;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 autoSelect:(_Bool)arg2;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *currentEditingString;
@property(readonly, copy, nonatomic) NSArray *selectedRepresentedObjects;
@property(copy, nonatomic) NSArray *representedObjects;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)_setMaskActive:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setBackdropStyle:(unsigned long long)arg1;
- (id)_searchBarTextFieldOrMailReplacementView;
- (id)_searchBarTextField;
- (void)_setupSearchField;
@property(copy, nonatomic) UIFont *font;
@property(nonatomic) __weak id <_UIAtomSearchBarDelegate> delegate; // @dynamic delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

