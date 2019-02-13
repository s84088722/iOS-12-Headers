//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class NSArray, UIActivityIndicatorView, UIButton, UILabel, UIPickerView, UIView;

@interface B238SetupHomePickerViewController : B238SetupBaseViewController
{
    UILabel *_titleLabel;
    UIPickerView *_homePickerView;
    UIButton *_chooseButton;
    _Bool _homeChosen;
    UIView *_progressView;
    UIActivityIndicatorView *_progressSpinner;
    UILabel *_progressLabel;
    long long _defaultHomeIndex;
    NSArray *_homes;
}

@property(retain, nonatomic) NSArray *homes; // @synthesize homes=_homes;
@property(nonatomic) long long defaultHomeIndex; // @synthesize defaultHomeIndex=_defaultHomeIndex;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)handleChooseButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

