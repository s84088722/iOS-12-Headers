//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIWindow.h>

@class NSMutableArray, UIDelayedAction, UIView, _UIScreenEdgePanRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerAnalysisWindow : UIWindow
{
    NSMutableArray *_failureMessageLabels;
    UIDelayedAction *_messageFadeAction;
    UIView *_backgroundView;
    _UIScreenEdgePanRecognizer *_recognizer;
    long long _maximumVisibleOverlayItems;
}

@property(nonatomic) long long maximumVisibleOverlayItems; // @synthesize maximumVisibleOverlayItems=_maximumVisibleOverlayItems;
@property(nonatomic) _UIScreenEdgePanRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dismissMessages;
- (void)fadeOldestMessage;
- (void)pushStatusMessage:(id)arg1 toVisualOverlay:(_Bool)arg2;
- (void)pushFailureMessage:(id)arg1 toVisualOverlay:(_Bool)arg2;
- (void)pushMessage:(id)arg1 toVisualOverlay:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_isWindowServerHostingManaged;

@end

