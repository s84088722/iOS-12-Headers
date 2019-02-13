//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AXSpeakOverlayControlBarDelegate-Protocol.h"
#import "AXUINubbitDelegate-Protocol.h"

@class AXDispatchTimer, AXSpeakOverlayControlBar, NSArray, NSString, QSSelectionHighlightView, UIColor, _UIBackdropView;
@protocol AXSpeakOverlayViewControllerDelegate;

@interface AXSpeakOverlayViewController : UIViewController <AXUINubbitDelegate, AXSpeakOverlayControlBarDelegate>
{
    _Bool _inTabMode;
    _UIBackdropView *_containingView;
    AXDispatchTimer *_collapseTimer;
    _Bool _nubbitMovedOutsideOfTabMode;
    UIColor *_highlightColor;
    UIColor *_underlineColor;
    id <AXSpeakOverlayViewControllerDelegate> _delegate;
    NSArray *_highlightSelectionRects;
    AXSpeakOverlayControlBar *_bar;
    QSSelectionHighlightView *_highlightView;
    QSSelectionHighlightView *_sentenceHighlightView;
    NSString *_currentAppBundleIdentifier;
    NSArray *_currentUnmodifiedSentenceRects;
    struct CGPoint _nubbitMoveStartPosition;
    struct CGPoint _gestureMoveStartPosition;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) NSArray *currentUnmodifiedSentenceRects; // @synthesize currentUnmodifiedSentenceRects=_currentUnmodifiedSentenceRects;
@property(retain, nonatomic) NSString *currentAppBundleIdentifier; // @synthesize currentAppBundleIdentifier=_currentAppBundleIdentifier;
@property(nonatomic) struct CGPoint gestureMoveStartPosition; // @synthesize gestureMoveStartPosition=_gestureMoveStartPosition;
@property(nonatomic) struct CGPoint nubbitMoveStartPosition; // @synthesize nubbitMoveStartPosition=_nubbitMoveStartPosition;
@property(retain, nonatomic) QSSelectionHighlightView *sentenceHighlightView; // @synthesize sentenceHighlightView=_sentenceHighlightView;
@property(retain, nonatomic) QSSelectionHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) AXSpeakOverlayControlBar *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) NSArray *highlightSelectionRects; // @synthesize highlightSelectionRects=_highlightSelectionRects;
@property(nonatomic) __weak id <AXSpeakOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nubbitDidUpdatePosition:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)tabModeButtonPressed;
- (void)controlBarDragged:(struct CGPoint)arg1;
- (void)headerTapped;
- (void)slowDownButtonPressed;
- (void)speedUpButtonPressed;
- (void)pauseButtonPressed;
- (void)stopButtonPressed;
- (void)playButtonPressed;
- (void)rewindButtonPressed;
- (void)fastForwardButtonPressed;
- (_Bool)isSpeaking;
- (void)didStop;
- (void)didResume;
- (void)didPause;
- (void)showErrorMessage:(id)arg1;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)temporarilyHideUI;
- (void)_updateForTabMode;
- (void)_unregisterNubbit;
- (void)_registerNubbit;
- (void)_saveNubbitPosition;
- (struct CGPoint)_denormalizedNubbitPositionForViewSize:(struct CGSize)arg1;
- (void)_enqueueCollapseTimer;
- (id)_sliceRects:(id)arg1 withSentenceRects:(id)arg2 wordRects:(id)arg3;
@property(retain, nonatomic) NSArray *sentenceHighlightSelectionRects;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (id)sentenceHighlightColorForColor:(id)arg1;
- (id)highlightColorForColor:(id)arg1;
- (void)finishLoading;
- (void)moveBackInBounds;
- (void)panToPosition:(struct CGPoint)arg1;
- (void)showUIForApplication:(id)arg1;
- (id)title;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

