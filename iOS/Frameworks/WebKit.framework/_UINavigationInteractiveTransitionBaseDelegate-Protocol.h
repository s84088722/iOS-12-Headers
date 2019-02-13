//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class UIGestureRecognizer, UIPanGestureRecognizer, UITouch, _UINavigationInteractiveTransitionBase;

@protocol _UINavigationInteractiveTransitionBaseDelegate <NSObject>
- (UIPanGestureRecognizer *)gestureRecognizerForInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (_Bool)interactiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (_Bool)interactiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg3;
- (_Bool)shouldBeginInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1;
- (void)startInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1;
@end

