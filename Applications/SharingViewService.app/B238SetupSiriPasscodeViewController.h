//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class PINEntryView, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface B238SetupSiriPasscodeViewController : B238SetupBaseViewController
{
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    PINEntryView *_pinEntryView;
    UILabel *_pinLabel1;
    UILabel *_pinLabel2;
    UILabel *_pinLabel3;
    UILabel *_pinLabel4;
    UIView *_pinWell1;
    UIView *_pinWell2;
    UIView *_pinWell3;
    UIView *_pinWell4;
    UIButton *_playButton;
    _Bool _played;
    UIActivityIndicatorView *_progressSpinner;
    _Bool _viewBottomConstantValid;
    double _viewBottomConstant;
}

- (void).cxx_destruct;
- (void)handlePlayButton:(id)arg1;
- (void)_handlePINEntered:(id)arg1;
- (void)_handleKeyboardWillShow:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)showKeyboard;

@end
