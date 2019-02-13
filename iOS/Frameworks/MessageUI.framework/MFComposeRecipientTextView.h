//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFComposeHeaderView.h>

#import <MessageUI/MFComposeRecipientAtomDelegate-Protocol.h>
#import <MessageUI/MFRecipientDraggingDelegate-Protocol.h>
#import <MessageUI/NSLayoutManagerDelegate-Protocol.h>
#import <MessageUI/UITextViewDelegate-Protocol.h>

@class MFDragSource, MFDropTarget, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSUndoManager, UIButton, UIColor, UIFont, UITextView, UIView, _MFAtomTextAttachment, _MFAtomTextView;
@protocol MFComposeRecipientTextViewDelegate;

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFComposeRecipientAtomDelegate, MFRecipientDraggingDelegate>
{
    _MFAtomTextView *_textView;
    UITextView *_inactiveTextView;
    UIColor *_inactiveTextColor;
    NSMutableArray *_atomViews;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSMutableDictionary *_atomLayoutOptionsByRecipient;
    MFDragSource *_dragSource;
    MFDropTarget *_dropTarget;
    struct CGRect _currentTextRect;
    long long _atomViewAnimationDepth;
    _Bool _parentIsClosing;
    _Bool _textViewExclusionPathsAreValid;
    _Bool _isTextFieldCollapsed;
    _Bool _collapsedStateInitialized;
    _Bool _indicatesUnsafeRecipientsWhenCollapsed;
    _Bool _notifyDelegateOfSizeChange;
    NSTimer *_collapsableUpdateTimer;
    NSArray *_properties;
    NSMutableArray *_recipientsBeingRemoved;
    NSUndoManager *_undoManager;
    _Bool _editable;
    _Bool _separatorHidden;
    _Bool _expanded;
    _Bool _didIgnoreFirstResponderResign;
    _Bool _showsAddButtonWhenExpanded;
    int _hideLastAtomComma;
    UIFont *_baseFont;
    long long _maxRecipients;
    UIButton *_addButton;
    UIColor *_typingTextColor;
    _MFAtomTextAttachment *_placeholderAttachment;
    UIView *_atomContainerView;
}

+ (id)defaultFont;
@property(readonly, nonatomic) UIView *atomContainerView; // @synthesize atomContainerView=_atomContainerView;
@property(retain, nonatomic) _MFAtomTextAttachment *placeholderAttachment; // @synthesize placeholderAttachment=_placeholderAttachment;
@property(nonatomic) int hideLastAtomComma; // @synthesize hideLastAtomComma=_hideLastAtomComma;
@property(retain, nonatomic) UIColor *typingTextColor; // @synthesize typingTextColor=_typingTextColor;
@property(nonatomic) _Bool showsAddButtonWhenExpanded; // @synthesize showsAddButtonWhenExpanded=_showsAddButtonWhenExpanded;
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(readonly, nonatomic) _Bool didIgnoreFirstResponderResign; // @synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool indicatesUnsafeRecipientsWhenCollapsed; // @synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)dropItems:(id)arg1;
- (void)dragExited;
- (void)dragMovedToPoint:(struct CGPoint)arg1;
- (void)dragEnteredAtPoint:(struct CGPoint)arg1;
- (id)dragPreviewForDraggedItem:(id)arg1;
- (struct _NSRange)_placeholderAttachmentRange;
- (id)_placeholderAttachmentWithStaticWidth;
- (void)_notifyDelegateOfSizeChange;
- (void)_notifyDelegateOfNewSize:(struct CGSize)arg1;
- (_Bool)_delegateRespondsToSizeChange;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (unsigned long long)indexOfRecipientForInsertionAtPoint:(struct CGPoint)arg1;
- (id)selectedAtoms;
- (id)atomViewsInRange:(struct _NSRange)arg1;
- (id)atomViewForRecipient:(id)arg1;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_addAddressAtomSubview:(id)arg1;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange)arg2;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (_Bool)_canAddAdditionalAtoms;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_setAddButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isAddButtonVisible;
- (void)_ensureAddButton;
- (void)_setTextViewIsCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isTextViewCollapsed;
- (void)_updateInactiveTextView;
- (void)_ensureInactiveTextView;
- (id)_accessibilityToString;
- (_Bool)_textViewContainsAtomizedRecipients;
- (void)_resetSelectionState;
- (_Bool)_shouldAnimateAtomViewChanges;
- (void)_beginAtomViewAnimations;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (id)_atomViewAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)_rangeForComposeRecipientAtom:(id)arg1;
- (void)_invalidateTextContainerExclusionPaths;
- (void)_recomputeTextContainerExclusionPaths;
- (id)_textContainerExclusionPathsWithAddButton:(_Bool)arg1;
- (void)reflow;
- (_Bool)_useRightToLeftLayout;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)finishEnteringRecipient;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (void)invalidateAtomPresentationOptions;
- (void)clearText;
- (id)_baseAttributes;
@property(retain, nonatomic) UIColor *inactiveTextColor;
- (void)setLabel:(id)arg1;
- (void)_invalidateAtomPresentationOptionsCache;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (_Bool)hasContent;
@property(retain, nonatomic) UIFont *baseFont; // @synthesize baseFont=_baseFont;
@property(readonly, nonatomic) unsigned long long numberOfRowsOfTextInField;
@property(readonly, nonatomic) double offsetForRowWithTextField;
@property(readonly, nonatomic) UITextView *textView;
@property(readonly, nonatomic) NSString *text;
- (id)_userEnteredTextWithRange:(struct _NSRange *)arg1;
- (_Bool)_hasUnsafeRecipients;
- (void)_updateAddButtonVisibility;
- (void)setEditable:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSArray *uncommentedAddresses;
@property(copy, nonatomic) NSArray *addresses;
@property(nonatomic) id <MFComposeRecipientTextViewDelegate> delegate;
- (void)_addButtonTapped:(id)arg1;
- (_Bool)containsAddress:(id)arg1;
- (void)addAddress:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)_didRemoveRecipient:(id)arg1;
- (id)undoManager;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(_Bool)arg3;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)addRecipient:(id)arg1;
@property(copy, nonatomic) NSArray *recipients;
- (void)_removeAllRecipients;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)refreshPreferredContentSize;
- (_Bool)_shouldEmbedLabelInTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dragDropDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

