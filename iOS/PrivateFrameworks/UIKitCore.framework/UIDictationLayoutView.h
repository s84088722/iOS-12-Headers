//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDictationView.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UIDictationLayoutView : UIDictationView
{
    _Bool _hideSwitcher;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    UIButton *_waveTapEndpointButton;
    _Bool _blackTextColor;
}

- (_Bool)isShowing;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)layoutSubviews;
- (void)setState:(int)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)updateLanguageLabel;
- (void)keyboardButtonPressed;
- (id)darkGrayColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

