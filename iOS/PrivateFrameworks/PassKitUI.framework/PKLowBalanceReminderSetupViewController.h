//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDecimalNumber, NSNumberFormatter, NSString, PKEnteredValueActionItem, PKPassPreferencesManager, PKPaymentPass, PKPaymentPassAction;
@protocol PKLowBalanceReminderSetupViewControllerDelegate;

@interface PKLowBalanceReminderSetupViewController : UITableViewController
{
    PKPaymentPass *_paymentPass;
    PKPaymentPassAction *_action;
    id <PKLowBalanceReminderSetupViewControllerDelegate> _delegate;
    PKEnteredValueActionItem *_topUpActionItem;
    PKPassPreferencesManager *_passPreferencesManager;
    NSString *_currencyCode;
    NSArray *_currencyAmountOptions;
    NSDecimalNumber *_selectedCurrencyAmount;
    NSNumberFormatter *_currencyAmountFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *currencyAmountFormatter; // @synthesize currencyAmountFormatter=_currencyAmountFormatter;
@property(retain, nonatomic) NSDecimalNumber *selectedCurrencyAmount; // @synthesize selectedCurrencyAmount=_selectedCurrencyAmount;
@property(retain, nonatomic) NSArray *currencyAmountOptions; // @synthesize currencyAmountOptions=_currencyAmountOptions;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) PKPassPreferencesManager *passPreferencesManager; // @synthesize passPreferencesManager=_passPreferencesManager;
@property(retain, nonatomic) PKEnteredValueActionItem *topUpActionItem; // @synthesize topUpActionItem=_topUpActionItem;
@property(nonatomic) __weak id <PKLowBalanceReminderSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
- (void).cxx_destruct;
- (void)updateCheckmarkForSelectedCellAtIndexPath:(id)arg1;
- (id)_indexPathOfCurrencyAmount:(id)arg1;
- (id)_currencyAmountAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAction:(id)arg1 forPass:(id)arg2;

@end

