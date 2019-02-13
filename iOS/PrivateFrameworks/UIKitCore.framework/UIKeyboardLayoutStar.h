//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardLayout.h>

#import <UIKitCore/UIKBEmojiHitTestResponder-Protocol.h>
#import <UIKitCore/UIKeyboardHandBiasTransitionCoordinatorDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardPinchGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, NSDate, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, UIButton, UIDelayedAction, UIGestureKeyboardIntroduction, UIKBBackgroundView, UIKBKeyViewAnimator, UIKBKeyplaneView, UIKBRenderConfig, UIKBTree, UIKeyboardEmojiKeyDisplayController, UIKeyboardHandBiasTransitionCoordinator, UIKeyboardPinchGestureRecognizer, UIKeyboardSplitTransitionView, UISelectionFeedbackGenerator, UISwipeGestureRecognizer, UIView, _UIKeyboardTypingSpeedLogger;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder, UIKeyboardHandBiasTransitionCoordinatorDelegate, UIKeyboardPinchGestureRecognizerDelegate>
{
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    NSString *_keyboardName;
    NSString *_keyplaneName;
    long long _appearance;
    UIKBTree *_activeKey;
    UIKBTree *_inactiveLanguageIndicator;
    UIKBKeyplaneView *_keyplaneView;
    UIKBBackgroundView *_backgroundView;
    UIKBKeyViewAnimator *_keyViewAnimator;
    UIKeyboardEmojiKeyDisplayController *_emojiKeyManager;
    double _prevTouchUpTime;
    double _prevTouchUpFinishedTime;
    double _prevTouchDownTime;
    unsigned long long _prevUpActions;
    NSMutableDictionary *_keyboards;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableSet *_validInputStrings;
    NSString *_localizedInputKey;
    struct __CFDictionary *_extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet *_accentInfo;
    NSMutableSet *_hasAccents;
    id _spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id _deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    _Bool _shift;
    _Bool _autoshift;
    _Bool _settingShift;
    _Bool _holdingShift;
    _Bool _didLongPress;
    NSString *_preTouchKeyplaneName;
    _Bool _revertKeyplaneAfterTouch;
    _Bool _wasShifted;
    _Bool _swipeDetected;
    _Bool _showIntlKey;
    _Bool _showDictationKey;
    _Bool _suppressDeactivateKeys;
    _Bool _suppressShiftKeyplaneAnimation;
    _Bool _isTrackpadMode;
    _Bool _shiftLockReady;
    double _shiftLockFirstTapTime;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UIKeyboardPinchGestureRecognizer *_pinchGestureRecognizer;
    NSMutableDictionary *_activeKeyplaneTransitions;
    UIKeyboardSplitTransitionView *_transitionView;
    double _initialSplitProgress;
    double _finalSplitProgress;
    double _autoSplitLastUpdate;
    double _autoSplitElapsedTime;
    CADisplayLink *_displayLink;
    _Bool _ghostKeysEnabled;
    UIDelayedAction *_delayedCentroidUpdate;
    _Bool _isRebuilding;
    long long _currentHandBias;
    UIKeyboardHandBiasTransitionCoordinator *_handBiasTransitionCoordinator;
    NSString *_layoutTag;
    _Bool _preRotateShift;
    NSString *_preRotateKeyplaneName;
    _Bool _preRotateTrackpadMode;
    UIDelayedAction *_multitapAction;
    _Bool _unshiftAfterMultitap;
    int _multitapCount;
    UIKBTree *_multitapKey;
    UIView *_flickPopupView;
    NSMutableDictionary *_compositeImages;
    NSTimer *_flickPopuptimer;
    id _touchInfo;
    UIView *_dimKeyboardImageView;
    _Bool _keyboardImageViewIsDim;
    _Bool _isOutOfBounds;
    _Bool _inDealloc;
    NSMutableSet *_keysUnderIndicator;
    _UIKeyboardTypingSpeedLogger *_typingSpeedLogger;
    UIKBRenderConfig *_passcodeRenderConfig;
    long long _setKeyplaneViewCount;
    _Bool _inputTraitsPreventInitialReuse;
    _Bool _settingFloat;
    NSMutableSet *_leftKeySet;
    NSMutableSet *_rightKeySet;
    struct CGPoint _leftDriftOffset;
    struct CGPoint _rightDriftOffset;
    NSMutableArray *_leftSideReachability;
    NSMutableArray *_rightSideReachability;
    NSNumber *_homeRowHint;
    double _touchDownTimeSpan;
    NSDate *_prevTouchMoreKeyTime;
    NSString *_lastInputMode;
    _Bool _pendingDictationReload;
    _Bool _hasPeekedGestureKey;
    _Bool _lastInputIsGestureKey;
    UIGestureKeyboardIntroduction *_gestureKeyboardIntroduction;
    _Bool _dictationUsingServerManualEndpointing;
    UIButton *_biasEscapeButton;
    NSLayoutConstraint *_biasEscapeButtonLeftConstraint;
    NSLayoutConstraint *_biasEscapeButtonRightConstraint;
    NSMutableSet *_keyplaneTransformations;
    _Bool _externalDictationAndInternationalKeys;
    _Bool _muteNextKeyClickSound;
    int playKeyClickSoundOn;
    UIKBRenderConfig *_renderConfig;
    UIView *_modalDisplayView;
    UISelectionFeedbackGenerator *_slideBehaviour;
    double _lastTwoFingerTapTimestamp;
}

+ (id)sharedPunctuationCharacterSet;
+ (id)sharedRivenKeyplaneGenerator;
+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
+ (id)keyboardWithName:(id)arg1 screenTraits:(id)arg2;
+ (id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2;
+ (void)accessibilitySensitivityChanged;
+ (Class)_subclassForScreenTraits:(id)arg1;
@property(nonatomic) _Bool muteNextKeyClickSound; // @synthesize muteNextKeyClickSound=_muteNextKeyClickSound;
@property(nonatomic) double lastTwoFingerTapTimestamp; // @synthesize lastTwoFingerTapTimestamp=_lastTwoFingerTapTimestamp;
@property(retain, nonatomic) UISelectionFeedbackGenerator *slideBehaviour; // @synthesize slideBehaviour=_slideBehaviour;
@property(retain, nonatomic) UIView *modalDisplayView; // @synthesize modalDisplayView=_modalDisplayView;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(copy, nonatomic) NSString *preTouchKeyplaneName; // @synthesize preTouchKeyplaneName=_preTouchKeyplaneName;
@property(nonatomic) int playKeyClickSoundOn; // @synthesize playKeyClickSoundOn;
@property(copy, nonatomic) NSString *localizedInputKey; // @synthesize localizedInputKey=_localizedInputKey;
@property(readonly, nonatomic) _Bool showsDictationKey; // @synthesize showsDictationKey=_showDictationKey;
@property(readonly, nonatomic) _Bool showsInternationalKey; // @synthesize showsInternationalKey=_showIntlKey;
@property(nonatomic) _Bool didLongPress; // @synthesize didLongPress=_didLongPress;
@property(nonatomic) _Bool autoShift; // @synthesize autoShift=_autoshift;
@property(nonatomic) _Bool shift; // @synthesize shift=_shift;
@property(retain, nonatomic) UIKBTree *activeKey; // @synthesize activeKey=_activeKey;
@property(copy, nonatomic) NSString *keyplaneName; // @synthesize keyplaneName=_keyplaneName;
@property(copy, nonatomic) NSString *keyboardName; // @synthesize keyboardName=_keyboardName;
@property(readonly, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property(readonly, nonatomic) UIKBTree *keyboard; // @synthesize keyboard=_keyboard;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (_Bool)is10KeyRendering;
- (_Bool)isEmojiKeyplane;
- (_Bool)keyplaneContainsEmojiKey;
- (_Bool)keyplaneContainsDismissKey;
- (void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg1;
- (id)currentKeyplaneView;
- (id)currentKeyplane;
- (void)fadeWithInvocation:(id)arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint)arg2 shouldTypeVariants:(_Bool)arg3 baseKeyForVariants:(_Bool)arg4;
- (id)simulateTouch:(struct CGPoint)arg1;
- (struct CGPoint)applyError:(struct CGPoint)arg1 toKey:(id)arg2;
- (void)changeToKeyplane:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (_Bool)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (_Bool)shouldRetestTouchDraggedFromKey:(id)arg1;
- (void)didRotate;
- (void)willRotate;
- (void)updateKeyCentroids;
- (void)divideKeysIntoLeft:(id)arg1 right:(id)arg2;
- (_Bool)isShiftKeyBeingHeld;
- (void)setAutoshift:(_Bool)arg1;
- (void)updateUndoKeyState;
- (void)setMultitapReverseKeyState;
- (void)updateShiftKeyState;
- (int)stateForShiftKey:(id)arg1;
- (_Bool)diacriticForwardCompose;
- (_Bool)isAlphabeticPlane;
- (_Bool)ignoresShiftState;
- (_Bool)usesAutoShift;
- (void)upActionShift;
- (void)downActionShiftWithKey:(id)arg1;
- (void)refreshDualStringKeys;
- (unsigned long long)upActionFlagsForKey:(id)arg1;
- (unsigned long long)downActionFlagsForKey:(id)arg1;
- (_Bool)keyHasAccentedVariants:(id)arg1;
- (id)activeTouchInfoForShift;
- (id)touchInfoForKey:(id)arg1;
- (void)clearAllTouchInfo;
- (void)clearInfoForTouch:(id)arg1 forResting:(_Bool)arg2;
- (void)clearInfoForTouch:(id)arg1;
- (void)cancelTouchIfNecessaryForInfo:(id)arg1 forResting:(_Bool)arg2;
- (id)generateInfoForTouch:(id)arg1;
- (id)infoForTouch:(id)arg1;
- (id)infoForTouchUUID:(id)arg1;
- (void)swipeDetected:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchChanged:(id)arg1 executionContext:(id)arg2;
- (void)touchCancelled:(id)arg1 forResting:(_Bool)arg2 executionContext:(id)arg3;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(_Bool)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7;
- (void)completeSendStringActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(_Bool)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7;
- (_Bool)shouldSendStringForFlick:(id)arg1;
- (_Bool)shouldYieldToControlCenterForFlickWithInitialPoint:(struct CGPoint)arg1 finalPoint:(struct CGPoint)arg2;
- (void)presentModalDisplayForKey:(id)arg1;
- (void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4;
- (void)_recordKeystrokeStatisticForKeyPress;
- (_Bool)shouldSendTouchUpToInputManager:(id)arg1;
- (void)handleKeyboardMenusForTouch:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)handleDelayedCentroidUpdate;
- (void)cancelDelayedCentroidUpdate;
- (void)refreshGhostKeyState;
- (_Bool)performSpaceAction;
- (_Bool)performReturnAction;
- (void)resetPanAlternativesForEndedTouch:(id)arg1;
- (void)updatePanAlternativesForTouchInfo:(id)arg1;
- (void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(struct CGPoint)arg3;
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;
- (void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (_Bool)touchPassesDragThreshold:(id)arg1;
- (_Bool)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2;
- (void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2;
- (void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (_Bool)showGestureKeyboardIntroductionIfNeeded;
- (_Bool)shouldShowGestureKeyboardIntroduction;
- (id)synthesizeTouchUpEventForKey:(id)arg1;
- (id)keyplaneNameForRevertAfterTouch;
- (void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)incrementPunctuationIfNeeded:(id)arg1;
- (_Bool)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (_Bool)isKeyScriptSwitchKey:(id)arg1;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(double)arg3;
- (void)hideMenu:(id)arg1 forKey:(id)arg2;
- (_Bool)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)playKeyClickSoundOnDownForKey:(id)arg1;
- (void)playKeyClickSoundForKey:(id)arg1;
- (void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_pointAllowedInStaticHitBuffer:(struct CGPoint)arg1;
- (double)hitBuffer;
- (struct CGRect)_paddedKeyUnionFrame;
- (_Bool)_handleTouchForEmojiInputView;
- (void)setSplit:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_autoSplit:(id)arg1;
- (void)setSplitProgress:(double)arg1;
- (void)pinchHandler:(id)arg1;
- (void)pinchDidConsumeTouch:(id)arg1;
- (void)didDetectPinchWithSeparation:(double)arg1;
- (_Bool)pinchCanBeginWithTouches:(id)arg1;
- (_Bool)pinchSplitGestureEnabled;
- (_Bool)pinchDetected;
- (void)finishSplitTransitionWithProgress:(double)arg1;
- (void)finishSplitTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishSplitTransition;
- (void)finishSplitWithCompletion:(CDUnknownBlockType)arg1;
- (void)showSplitTransitionView:(_Bool)arg1;
- (void)prepareForSplitTransition;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 forHandBiasCoordinator:(id)arg2;
- (long long)currentHandBiasWithCoordinator:(id)arg1;
- (void)finishHandBiasTransitionWithFinalBias:(long long)arg1;
- (id)hostViewForHandBiasTransition:(id)arg1;
- (id)prepareTransition:(id)arg1 forTargetHandBias:(long long)arg2 coordinator:(id)arg3;
- (void)_didTapBiasEscapeButton:(id)arg1;
- (void)_setBiasEscapeButtonVisible:(_Bool)arg1;
- (void)setKeyboardBias:(long long)arg1;
- (long long)currentHandBias;
- (double)biasedKeyboardWidthRatio;
- (void)calculateReachabilityScoreWithKey:(id)arg1 keyError:(struct CGPoint)arg2;
- (void)resetHRRLayoutState;
- (void)setNeedsVirtualDriftUpdate;
- (_Bool)_handRestRecognizerCancelShouldBeEnd;
- (id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1;
- (struct CGPoint)getCenterForKeyUnderRightIndexFinger;
- (struct CGPoint)getCenterForKeyUnderLeftIndexFinger;
- (void)handRestRecognizerNotifyRestForBegin:(_Bool)arg1 location:(struct CGPoint)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6;
- (CDUnknownBlockType)handRestRecognizerSilenceNextTouchDown;
- (struct CGSize)handRestRecognizerStandardKeyPixelSize;
- (id)handRestRecognizerGetHomeRowHint;
- (id)getSortedKeysForDisplayRowHint:(int)arg1;
- (_Bool)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5;
- (unsigned char)getHandRestRecognizerState;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (_Bool)shouldDeactivateWithoutWindow;
- (id)activationIndicatorView;
- (void)setHideKeysUnderIndicator:(_Bool)arg1;
- (_Bool)shouldShowIndicator;
- (void)showPopupVariantsForKey:(id)arg1;
- (id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2;
- (id)_appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3;
- (id)_keyplaneVariantsKeyForString:(id)arg1;
- (id)_keyboardLongPressInteractionRegions;
- (void)longPressAction;
- (void)showMenu:(id)arg1 forKey:(id)arg2;
- (_Bool)isLongPressedKey:(id)arg1;
- (_Bool)isShiftKeyPlaneChooser;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)updateLayoutTags;
@property(retain, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;
- (void)didClearInput;
- (void)touchMultitapTimer;
- (void)cancelMultitapTimer;
- (_Bool)isMultitapKey:(id)arg1;
- (void)handleMultitapTimerFired;
- (void)multitapExpired;
- (void)endMultitapForKey:(id)arg1;
- (void)multitapInterrupted;
- (_Bool)canMultitap;
- (id)multitapCompleteKeys;
- (id)activeMultitapCompleteKey;
- (_Bool)hasAccentKey;
- (_Bool)hasCandidateKeys;
- (id)candidateList;
- (void)logHandwritingData;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)clearHandwritingStrokesIfNeededAndNotify:(_Bool)arg1;
- (id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 inputFlags:(int)arg3;
- (id)currentRepresentedStringForDualDisplayKey:(id)arg1;
- (void)updatePhysicalKeyboardEvent:(id)arg1 withMarkedInput:(id)arg2;
- (_Bool)isDeadkeyInput:(id)arg1;
- (void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3;
- (int)keycodeForKey:(id)arg1;
- (_Bool)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (id)keyHitTest:(struct CGPoint)arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint)arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint)arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint)arg1;
- (id)keyViewHitTestForPoint:(struct CGPoint)arg1;
- (_Bool)shouldHitTestKey:(id)arg1;
- (void)finishSliderBehaviorFeedback;
- (void)provideSliderBehaviorFeedback;
- (void)prepareSliderBehaviorFeedback;
- (_Bool)isTrackpadMode;
- (void)deactivateActiveKey;
- (void)deactivateActiveKeys;
- (void)deactivateActiveKeysClearingTouchInfo:(_Bool)arg1 clearingDimming:(_Bool)arg2;
- (void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg1;
- (id)initialKeyplaneNameWithKBStarName:(id)arg1;
- (_Bool)shouldUseDefaultShiftStateFromLayout;
- (void)setToInitialKeyplane;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)updateCachedKeyplaneKeycaps;
- (id)cacheTokenForKeyplane:(id)arg1 caseAlternates:(_Bool)arg2;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1;
- (id)emojiKeyManager;
- (id)keyViewAnimator;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (int)stateForKey:(id)arg1;
- (void)refreshForDictationAvailablityDidChange;
- (_Bool)shouldMergeKey:(id)arg1;
- (id)inputModeToMergeCapsLockKey;
- (void)relayoutForWriteboardKey;
- (void)updateReturnKeysIfNeeded;
- (void)updateMoreAndInternationalKeys;
- (void)_addExtraControlKeysIfNecessary;
- (id)_currentKeyplaneTransformationContext;
- (_Bool)_shouldAttemptToAddSupplementaryControlKeys;
- (void)_updateSupplementaryKeys;
- (void)_swapGlobeAndMoreKeysIfNecessary;
- (void)mergeKeysIfNeeded;
- (id)keylistContainingKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (void)setTextEditingTraits:(id)arg1;
- (unsigned long long)textEditingKeyMask;
- (int)stateForManipulationKey:(id)arg1;
- (id)highlightedVariantListForStylingKey:(id)arg1;
- (int)stateForStylingKey:(id)arg1;
- (_Bool)supportStylingWithKey:(id)arg1;
- (int)stateForDictationKey:(id)arg1;
- (int)stateForCandidateListKey:(id)arg1;
- (int)stateForMultitapReverseKey:(id)arg1;
- (int)displayTypeHintForShiftKey;
- (int)displayTypeHintForMoreKey;
- (void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)updateCurrencySymbolForKey:(id)arg1 withCurrencyString:(id)arg2;
- (_Bool)_stringContainsCurrencyCharacters:(id)arg1;
- (void)_setReturnKeyEnabled:(_Bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setReturnKeyEnabled:(_Bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)updateTransitionWithFlags:(unsigned long long)arg1;
- (void)clearKeyAnnotationsIfNecessary;
- (void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
- (_Bool)useUndoForMessagesWriteboard;
- (_Bool)useDismissForMessagesWriteboard;
- (_Bool)ignoreWriteboard;
- (void)annotateKeysWithDeveloperPunctuation;
- (_Bool)_allowPaddle;
- (unsigned long long)keyplaneShiftState;
- (_Bool)shouldAllowCurrentKeyplaneReload;
- (_Bool)shouldMergeAssistantBarWithKeyboardLayout;
- (struct CGSize)stretchFactor;
- (double)stretchFactorHeight;
- (_Bool)stretchKeyboardToFitKeyplane:(id)arg1;
- (_Bool)stretchKeyboardToFit;
- (_Bool)globeKeyDisplaysAsEmojiKey;
- (void)updateGlobeKeyDisplayString;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (_Bool)supportsEmoji;
- (_Bool)canReuseKeyplaneView;
- (_Bool)shouldShowDictationKey;
- (void)updateBackgroundIfNeeded;
- (void)updateBackgroundCorners;
- (_Bool)handwritingPlane;
- (void)didEndIndirectSelectionGesture:(_Bool)arg1;
- (void)didEndIndirectSelectionGesture;
- (void)cancelTouchesForTwoFingerTapGesture:(id)arg1;
- (void)willBeginIndirectSelectionGesture:(_Bool)arg1;
- (void)willBeginIndirectSelectionGesture;
- (void)setPasscodeOutlineAlpha:(double)arg1;
- (struct CGImage *)renderedKeyplaneWithToken:(id)arg1 split:(_Bool)arg2;
- (struct CGImage *)renderedImageWithToken:(id)arg1;
- (struct CGImage *)renderedImageWithStateFallbacksForToken:(id)arg1;
- (struct CGImage *)cachedCompositeImageWithCacheKey:(id)arg1;
- (void)rebuildSplitTransitionView;
- (_Bool)shouldMatchCaseForDomainKeys;
- (void)updateLocalizedKeysForKeyplane:(id)arg1 updateAllKeyplanes:(_Bool)arg2;
- (void)updateLocalizedKeys:(_Bool)arg1;
- (void)updateInputModeLocalizedKeysForKeyplane:(id)arg1;
- (void)updateAutolocalizedKeysForKeyplane:(id)arg1;
- (void)updateLocalizedKeysOnKeyplane:(id)arg1;
- (void)nextToUseInputModeDidChange:(id)arg1;
- (id)internationalKeyDisplayStringOnEmojiKeyboard;
- (void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2;
- (_Bool)canProduceString:(id)arg1;
- (double)lastTouchDownTimestamp;
- (double)lastTouchUpTimestamp;
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (_Bool)allKeyplanesHaveSameHeight;
- (void)setKeyboardAppearance:(long long)arg1;
- (int)visualStyleForKeyboardIfSplit:(_Bool)arg1;
- (void)refreshForRivenPreferences;
- (void)tearDownSplitTransitionView;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (struct CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2;
- (struct CGRect)dragGestureRectInView:(id)arg1;
- (id)defaultKeyplaneForKeyplane:(id)arg1;
- (id)splitNameForKeyplane:(id)arg1;
- (id)splitNameForKeyplaneName:(id)arg1;
- (id)defaultNameForKeyplaneName:(id)arg1;
@property(readonly, nonatomic) NSString *localizedInputMode;
- (SEL)handlerForNotification:(id)arg1;
- (void)flushKeyCache:(id)arg1;
- (void)removeFromSuperview;
- (void)clearTransientState;
- (void)clearUnusedObjects:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)accessibilitySensitivityChanged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isRotating) _Bool rotating;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (id)popupKeyViews;
- (struct CGRect)frameForLastKeyWithRepresentedString:(id)arg1;
- (struct CGRect)frameForKeyWithRepresentedString:(id)arg1;
- (id)keyWithRepresentedString:(id)arg1;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(_Bool)arg4;
- (void)setKeyboardDim:(_Bool)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setDisableInteraction:(_Bool)arg1;
- (void)setKeyboardDim:(_Bool)arg1 amount:(double)arg2 withDuration:(double)arg3;
- (void)dismissGestureKeyboardIntroduction;
- (void)handleDismissFlickView;
- (void)handleDismissFlickView:(id)arg1;
- (void)handlePopupView;
- (void)handlePopupView:(id)arg1;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (_Bool)handleFlick:(id)arg1;
- (void)populateFlickPopupsForKey:(id)arg1;
- (id)flickStringForInputKey:(id)arg1 direction:(int)arg2;
- (id)flickPopupStringForKey:(id)arg1 withString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

