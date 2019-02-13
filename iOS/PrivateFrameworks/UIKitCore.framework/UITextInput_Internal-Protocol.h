//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSAttributedString, NSString, UIColor, UIFont, UIPhraseBoundaryGestureRecognizer, UIResponder, UITextInputArrowKeyHistory, UITextPosition, UITextRange, UIView;
@protocol UITextInput, UITextInputPrivate;

@protocol UITextInput_Internal
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
- (_Bool)_usesAsynchronousProtocol;
- (void)_phraseBoundaryGesture:(UIPhraseBoundaryGestureRecognizer *)arg1;
- (UIPhraseBoundaryGestureRecognizer *)_newPhraseBoundaryGestureRecognizer;
- (_Bool)_hasMarkedText;
- (void)_unmarkText;
- (void)_setAttributedMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setGestureRecognizers;
- (UITextInputArrowKeyHistory *)_moveToEndOfDocument:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfLine:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfWord:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfDocument:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfLine:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfWord:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveRight:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveLeft:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveDown:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveUp:(_Bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (_Bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(NSString *)arg2 checkAutocorrection:(_Bool)arg3;
- (struct _NSRange)_selectedRangeWithinMarkedText;
- (struct _NSRange)_selectedNSRange;
- (void)_selectAll;
- (long long)_selectionAffinity;
- (UITextPosition *)_positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;
- (void)_setSelectedTextRange:(UITextRange *)arg1 withAffinityDownstream:(_Bool)arg2;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (UIFont *)_fontForCaretSelection;
- (UIColor *)_textColorForCaretSelection;
- (UITextPosition *)_clampedpositionFromPosition:(UITextPosition *)arg1 offset:(int)arg2;
- (void)_deleteForwardAndNotify:(_Bool)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (UITextRange *)_intersectionOfRange:(UITextRange *)arg1 andRange:(UITextRange *)arg2;
- (_Bool)_range:(UITextRange *)arg1 intersectsRange:(UITextRange *)arg2;
- (_Bool)_range:(UITextRange *)arg1 containsRange:(UITextRange *)arg2;
- (UITextPosition *)_findPleasingWordBoundaryFromPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeSpanningTextUnit:(long long)arg1 andPosition:(UITextPosition *)arg2;
- (UITextRange *)_fullRange;
- (UITextRange *)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;
- (UITextRange *)_rangeOfText:(NSString *)arg1 endingAtPosition:(UITextPosition *)arg2;
- (UITextRange *)_rangeOfParagraphEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfSentenceEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfLineEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfEnclosingWord:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(UITextPosition *)arg2;
- (UITextPosition *)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(UITextPosition *)arg2;
- (UITextPosition *)_positionFromPosition:(UITextPosition *)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (UITextPosition *)_positionWithinRange:(UITextRange *)arg1 farthestInDirection:(long long)arg2;
- (void)_replaceDocumentWithText:(NSString *)arg1;
- (void)_replaceCurrentWordWithText:(NSString *)arg1;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_moveCurrentSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (_Bool)_hasMarkedTextOrRangedSelection;
- (_Bool)_isEmptySelection;
- (struct CGRect)_selectionClipRect;
- (_Bool)_selectionAtDocumentEnd;
- (_Bool)_selectionAtDocumentStart;
- (_Bool)_selectionAtWordStart;
- (void)_setSelectionToPosition:(UITextPosition *)arg1;
- (NSString *)_wordContainingCaretSelection;
- (unsigned int)_characterInRelationToPosition:(UITextPosition *)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterAfterCaretSelection;
- (NSString *)_fullText;
- (UITextRange *)_textRangeFromNSRange:(struct _NSRange)arg1;
- (struct _NSRange)_nsrangeForTextRange:(UITextRange *)arg1;
- (int)_indexForTextPosition:(UITextPosition *)arg1;

@optional
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
- (void)_setInternalGestureRecognizers;
- (_Bool)_isInteractiveTextSelectionDisabled;
- (struct CGRect)_lastRectForRange:(UITextRange *)arg1;
@end

