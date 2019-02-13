//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class NSArray, UIActivityIndicatorView, UIButton, UILabel, UIPickerView, UIView;

@interface B238SetupRoomPickerViewController : B238SetupBaseViewController
{
    UILabel *_titleLabel;
    UILabel *_homeLabel;
    UIPickerView *_roomPickerView;
    UIButton *_chooseButton;
    _Bool _roomChosen;
    UIView *_progressView;
    UIActivityIndicatorView *_progressSpinner;
    UILabel *_progressLabel;
    long long _defaultRoomIndex;
    NSArray *_rooms;
}

@property(retain, nonatomic) NSArray *rooms; // @synthesize rooms=_rooms;
@property(nonatomic) long long defaultRoomIndex; // @synthesize defaultRoomIndex=_defaultRoomIndex;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)handleNotThisHomeButton:(id)arg1;
- (void)handleChooseButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

