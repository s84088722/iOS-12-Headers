//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class UIGestureRecognizer, UIPress, UITouch;

@protocol UIGestureRecognizerDelegatePrivate <UIGestureRecognizerDelegate>

@optional
- (_Bool)_gestureRecognizer:(UIGestureRecognizer *)arg1 canBePreventedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)_gestureRecognizer:(UIGestureRecognizer *)arg1 canPreventGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceivePress:(UIPress *)arg2;
- (_Bool)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (_Bool)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;
- (_Bool)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
@end

