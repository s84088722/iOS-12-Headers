/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientAtomDelegate.h>
#import <libobjc.A.dylib/MFRecipientDraggingDelegate.h>

@class _MFAtomTextView, UITextView, UIColor, NSMutableArray, NSMutableDictionary, MFDragSource, MFDropTarget, NSTimer, NSArray, NSUndoManager, UIFont, UIButton, _MFAtomTextAttachment, UIView, NSString;

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFComposeRecipientAtomDelegate, MFRecipientDraggingDelegate> {

	_MFAtomTextView* _textView;
	UITextView* _inactiveTextView;
	UIColor* _inactiveTextColor;
	NSMutableArray* _atomViews;
	NSMutableDictionary* _atomPresentationOptionsByRecipient;
	NSMutableDictionary* _atomLayoutOptionsByRecipient;
	MFDragSource* _dragSource;
	MFDropTarget* _dropTarget;
	CGRect _currentTextRect;
	long long _atomViewAnimationDepth;
	BOOL _parentIsClosing;
	BOOL _textViewExclusionPathsAreValid;
	BOOL _isTextFieldCollapsed;
	BOOL _collapsedStateInitialized;
	BOOL _indicatesUnsafeRecipientsWhenCollapsed;
	BOOL _notifyDelegateOfSizeChange;
	NSTimer* _collapsableUpdateTimer;
	NSArray* _properties;
	NSMutableArray* _recipientsBeingRemoved;
	NSUndoManager* _undoManager;
	BOOL _editable;
	BOOL _separatorHidden;
	BOOL _expanded;
	BOOL _didIgnoreFirstResponderResign;
	BOOL _showsAddButtonWhenExpanded;
	int _hideLastAtomComma;
	UIFont* _baseFont;
	long long _maxRecipients;
	UIButton* _addButton;
	UIColor* _typingTextColor;
	_MFAtomTextAttachment* _placeholderAttachment;
	UIView* _atomContainerView;

}

@property (nonatomic,retain) _MFAtomTextAttachment * placeholderAttachment;                //@synthesize placeholderAttachment=_placeholderAttachment - In the implementation block
@property (nonatomic,readonly) UIView * atomContainerView;                                 //@synthesize atomContainerView=_atomContainerView - In the implementation block
@property (assign,nonatomic) id<MFComposeRecipientTextViewDelegate> delegate; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * addresses; 
@property (nonatomic,copy,readonly) NSArray * uncommentedAddresses; 
@property (assign,nonatomic) BOOL editable;                                                //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;                //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed;                  //@synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed - In the implementation block
@property (nonatomic,readonly) BOOL didIgnoreFirstResponderResign;                         //@synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                      //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UIButton * addButton;                                       //@synthesize addButton=_addButton - In the implementation block
@property (assign,nonatomic) BOOL showsAddButtonWhenExpanded;                              //@synthesize showsAddButtonWhenExpanded=_showsAddButtonWhenExpanded - In the implementation block
@property (nonatomic,readonly) double offsetForRowWithTextField; 
@property (nonatomic,readonly) unsigned long long numberOfRowsOfTextInField; 
@property (nonatomic,retain) UIFont * baseFont;                                            //@synthesize baseFont=_baseFont - In the implementation block
@property (nonatomic,retain) UIColor * inactiveTextColor; 
@property (nonatomic,retain) UIColor * typingTextColor;                                    //@synthesize typingTextColor=_typingTextColor - In the implementation block
@property (assign,nonatomic) int hideLastAtomComma;                                        //@synthesize hideLastAtomComma=_hideLastAtomComma - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
-(void)addAddress:(id)arg1 ;
-(void)setProperty:(int)arg1 ;
-(NSArray *)uncommentedAddresses;
-(void)invalidateAtomPresentationOptionsForRecipient:(id)arg1 ;
-(void)setMaxRecipients:(long long)arg1 ;
-(long long)maxRecipients;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(UIFont *)baseFont;
-(BOOL)isSeparatorHidden;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(UIButton *)addButton;
-(void)reflow;
-(NSArray *)addresses;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(BOOL)_shouldEmbedLabelInTextView;
-(void)refreshPreferredContentSize;
-(BOOL)containsAddress:(id)arg1 ;
-(double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2 ;
-(void)setEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)didIgnoreFirstResponderResign;
-(id)initWithFrame:(CGRect)arg1 dragDropDelegate:(id)arg2 ;
-(void)setIndicatesUnsafeRecipientsWhenCollapsed:(BOOL)arg1 ;
-(id)selectedAtoms;
-(id)dragPreviewForDraggedItem:(id)arg1 ;
-(void)dragEnteredAtPoint:(CGPoint)arg1 ;
-(void)dragMovedToPoint:(CGPoint)arg1 ;
-(void)dragExited;
-(void)dropItems:(id)arg1 ;
-(void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_useRightToLeftLayout;
-(void)_invalidateTextContainerExclusionPaths;
-(void)_updateInactiveTextView;
-(void)_removeAllRecipients;
-(void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(BOOL)arg3 ;
-(void)_addRecord:(void*)arg1 identifier:(int)arg2 ;
-(void)_beginAtomViewAnimations;
-(id)_atomAttachmentForRecipient:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 ;
-(void)_didRemoveRecipient:(id)arg1 ;
-(id)_userEnteredTextWithRange:(NSRange*)arg1 ;
-(void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateAddButtonVisibility;
-(void)_recomputeTextContainerExclusionPaths;
-(BOOL)_canAddAdditionalAtoms;
-(UIColor *)typingTextColor;
-(BOOL)_isTextViewCollapsed;
-(void)_ensureAddButton;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1 ;
-(BOOL)_textViewContainsAtomizedRecipients;
-(void)_ensureInactiveTextView;
-(BOOL)_hasUnsafeRecipients;
-(UIColor *)inactiveTextColor;
-(id)_accessibilityToString;
-(BOOL)_delegateRespondsToSizeChange;
-(void)_notifyDelegateOfNewSize:(CGSize)arg1 ;
-(BOOL)_isAddButtonVisible;
-(void)_addButtonTapped:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(NSRange)arg2 ;
-(id)_atomViewAtCharacterIndex:(unsigned long long)arg1 ;
-(void)_resetSelectionState;
-(id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2 ;
-(void)_addAddressAtomSubview:(id)arg1 ;
-(BOOL)_shouldAnimateAtomViewChanges;
-(void)_removeAddressAtomSubview:(id)arg1 ;
-(_MFAtomTextAttachment *)placeholderAttachment;
-(id)_placeholderAttachmentWithStaticWidth;
-(void)setPlaceholderAttachment:(_MFAtomTextAttachment *)arg1 ;
-(NSRange)_placeholderAttachmentRange;
-(void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3 ;
-(NSRange)_rangeForComposeRecipientAtom:(id)arg1 ;
-(void)deselectComposeRecipientAtom:(id)arg1 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg1 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg1 ;
-(void)composeRecipientAtomSelectNext:(id)arg1 ;
-(void)_invalidateAtomPresentationOptionsCache;
-(unsigned long long)indexOfRecipientForInsertionAtPoint:(CGPoint)arg1 ;
-(void)atomTextViewDidResignFirstResponder:(id)arg1 ;
-(void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2 ;
-(BOOL)indicatesUnsafeRecipientsWhenCollapsed;
-(BOOL)showsAddButtonWhenExpanded;
-(void)setTypingTextColor:(UIColor *)arg1 ;
-(int)hideLastAtomComma;
-(void)setHideLastAtomComma:(int)arg1 ;
-(UIView *)atomContainerView;
-(void)setBaseFont:(UIFont *)arg1 ;
-(void)parentWillClose;
-(void)parentDidClose;
-(id)atomViewForRecipient:(id)arg1 ;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(void)setInactiveTextColor:(UIColor *)arg1 ;
-(void)invalidateAtomPresentationOptions;
-(id)atomViewsInRange:(NSRange)arg1 ;
-(unsigned long long)numberOfRowsOfTextInField;
-(double)offsetForRowWithTextField;
-(id)_baseAttributes;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(BOOL)finishEnteringRecipient;
-(void)setShowsAddButtonWhenExpanded:(BOOL)arg1 ;
-(void)_notifyDelegateOfSizeChange;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MFComposeRecipientTextViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(id<MFComposeRecipientTextViewDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setEditable:(BOOL)arg1 ;
-(id)undoManager;
-(void)setProperties:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(BOOL)hasContent;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(UITextView *)textView;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)clearText;
-(BOOL)editable;
-(void)_tapGestureRecognized:(id)arg1 ;
@end
