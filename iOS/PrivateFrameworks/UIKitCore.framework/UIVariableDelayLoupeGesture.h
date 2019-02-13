//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer
{
    UIResponder<UITextInput> *_textView;
}

@property UIResponder<UITextInput> *textView; // @synthesize textView=_textView;
- (void)startTimer;
- (_Bool)isCloseToCaret;
- (void)invalidate;

@end

