//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSTimer, UITextInteractionAssistant, UITextRangeView, UITextSelection;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView
{
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UIView *m_floatingCaretView;
    UITextRangeView *m_rangeView;
    _Bool m_caretBlinks;
    _Bool m_caretShowingNow;
    _Bool m_caretAnimating;
    _Bool m_visible;
    _Bool m_activated;
    _Bool m_wasShowingCommands;
    _Bool m_delayShowingCommands;
    _Bool m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    _Bool m_deferSelectionCommands;
    struct __CFRunLoopObserver *m_observer;
    _Bool m_activeCaret;
    _Bool m_isSuspended;
    int m_showingCommandsCounterForRotate;
    _Bool m_forceRangeView;
}

@property(retain, nonatomic) NSArray *replacements; // @synthesize replacements=m_replacements;
@property(nonatomic) _Bool forceRangeView; // @synthesize forceRangeView=m_forceRangeView;
@property(readonly, nonatomic) __weak UITextInteractionAssistant *interactionAssistant; // @synthesize interactionAssistant=m_interactionAssistant;
@property(readonly, nonatomic) UIView *floatingCaretView; // @synthesize floatingCaretView=m_floatingCaretView;
- (void).cxx_destruct;
- (struct CGRect)clippedTargetRect:(struct CGRect)arg1;
- (id)scrollView;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (void)layoutChangedByScrolling:(_Bool)arg1;
- (struct CGRect)selectionBoundingBox;
@property(readonly, nonatomic) UITextSelection *selection;
@property(readonly, nonatomic) UITextRangeView *rangeView;
- (void)updateDocumentHasContent:(_Bool)arg1;
- (id)dynamicCaretList;
- (id)dynamicCaret;
- (void)endFloatingCursor;
- (void)endFloatingCaretView;
- (void)animateCaret:(id)arg1 toPosition:(struct CGPoint)arg2 withSize:(struct CGSize)arg3;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)animatePulsingCaret:(id)arg1;
- (void)beginFloatingCaretView;
@property(readonly, nonatomic) UIView *caretView; // @synthesize caretView=m_caretView;
- (id)floatingCaretViewColor;
- (id)caretViewColor;
- (void)startCaretBlinkIfNeeded;
- (void)touchCaretBlinkTimer;
- (void)clearCaretBlinkTimer;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)showCaret:(int)arg1;
- (void)showInitialCaret;
- (void)animateExpanderOn:(id)arg1;
- (void)animateBoxShrinkOn:(id)arg1;
- (void)hideCaret:(int)arg1;
- (void)clearCaret;
- (void)configureForRevealHighlightMode;
- (void)configureForReplacementMode;
- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) _Bool selectionCommandsShowing;
- (void)hideSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)_showSelectionCommandsForContextMenu:(_Bool)arg1;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)cancelDelayedCommandRequests;
- (void)updateSelectionCommands;
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(_Bool)arg2;
- (void)showCommandsWithReplacements:(id)arg1;
- (_Bool)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
@property(nonatomic) _Bool caretBlinks; // @synthesize caretBlinks=m_caretBlinks;
@property(nonatomic) _Bool visible; // @synthesize visible=m_visible;
- (void)appearOrFadeIfNecessary;
- (_Bool)shouldBeVisible;
- (void)updateSelectionDots;
- (void)updateSelectionRectsIfNeeded;
- (void)deferredUpdateSelectionCommands;
- (void)deferredUpdateSelectionRects;
- (void)wilLResume:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)tintColorDidChange;
- (void)updateSelectionRects;
- (void)selectionChanged;
- (void)installIfNecessary;
- (void)clearRangeAnimated:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)textSelectionViewActivated:(id)arg1;
- (void)selectionDidTranslateForReachability:(id)arg1;
- (void)selectionWillTranslateForReachability:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewWillAnimate;
- (void)inputViewDidMove;
- (void)inputViewWillMove:(id)arg1;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (_Bool)affectedByScrollerNotification:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)viewAnimate:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)windowDidResignOrBecomeKey;
- (void)deactivate;
- (void)activate;
- (void)detach;
- (void)dealloc;
- (_Bool)isValid;
- (void)invalidate;
- (void)validateWithInteractionAssistant:(id)arg1;
- (id)initWithInteractionAssistant:(id)arg1;

@end

