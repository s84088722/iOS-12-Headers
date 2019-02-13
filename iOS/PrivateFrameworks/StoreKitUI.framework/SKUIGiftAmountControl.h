//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIGiftConfiguration, UITextField, UIView;

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate>
{
    NSMutableArray *_amountButtons;
    UIView *_customAmountBackgroundView;
    UITextField *_customAmountField;
    SKUIGiftConfiguration *_giftConfiguration;
    long long _selectedAmount;
    long long _trackingAmount;
}

- (void).cxx_destruct;
- (void)_updateButtonsWithTouch:(id)arg1;
- (void)_reloadSelectedButton;
- (void)_textFieldDidEndEditing:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) NSString *selectedAmountString;
@property(readonly, nonatomic) long long selectedAmount;
- (void)dealloc;
- (id)initWithGiftConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

