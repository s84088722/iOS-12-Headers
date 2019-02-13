//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <ScreenTimeUI/STAllowanceSetupListControllerDelegate-Protocol.h>
#import <ScreenTimeUI/STCustomizeDaysListControllerDelegate-Protocol.h>
#import <ScreenTimeUI/STUIDateTimePickerCellDelegate-Protocol.h>

@class NSArray, NSObject, NSString, PSSpecifier, STAllowance, UIColor;
@protocol STAllowanceDetailListControllerDelegate, STRootViewModelCoordinator;

@interface STAllowanceDetailListController : PSListController <STUIDateTimePickerCellDelegate, STCustomizeDaysListControllerDelegate, STAllowanceSetupListControllerDelegate>
{
    _Bool _isSetupController;
    _Bool _didDeleteAllowance;
    id <STAllowanceDetailListControllerDelegate> _delegate;
    STAllowance *_allowance;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    PSSpecifier *_timeGroupSpecifier;
    PSSpecifier *_timeSpecifier;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_customizeDaysSpecifier;
    PSSpecifier *_selectedTimeSpecifier;
    PSSpecifier *_appsCategoriesGroupSpecifier;
    NSArray *_budgetedItemSpecifiers;
    PSSpecifier *_atAllowanceGroupSpecifier;
    PSSpecifier *_atAllowanceSpecifier;
    UIColor *_defaultTimeCellDetailTextColor;
}

@property(retain, nonatomic) UIColor *defaultTimeCellDetailTextColor; // @synthesize defaultTimeCellDetailTextColor=_defaultTimeCellDetailTextColor;
@property _Bool didDeleteAllowance; // @synthesize didDeleteAllowance=_didDeleteAllowance;
@property(retain, nonatomic) PSSpecifier *atAllowanceSpecifier; // @synthesize atAllowanceSpecifier=_atAllowanceSpecifier;
@property(retain, nonatomic) PSSpecifier *atAllowanceGroupSpecifier; // @synthesize atAllowanceGroupSpecifier=_atAllowanceGroupSpecifier;
@property(retain, nonatomic) NSArray *budgetedItemSpecifiers; // @synthesize budgetedItemSpecifiers=_budgetedItemSpecifiers;
@property(retain, nonatomic) PSSpecifier *appsCategoriesGroupSpecifier; // @synthesize appsCategoriesGroupSpecifier=_appsCategoriesGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *selectedTimeSpecifier; // @synthesize selectedTimeSpecifier=_selectedTimeSpecifier;
@property(retain, nonatomic) PSSpecifier *customizeDaysSpecifier; // @synthesize customizeDaysSpecifier=_customizeDaysSpecifier;
@property(retain, nonatomic) PSSpecifier *timePickerSpecifier; // @synthesize timePickerSpecifier=_timePickerSpecifier;
@property(retain, nonatomic) PSSpecifier *timeSpecifier; // @synthesize timeSpecifier=_timeSpecifier;
@property(retain, nonatomic) PSSpecifier *timeGroupSpecifier; // @synthesize timeGroupSpecifier=_timeGroupSpecifier;
@property(readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) _Bool isSetupController; // @synthesize isSetupController=_isSetupController;
@property(copy, nonatomic) STAllowance *allowance; // @synthesize allowance=_allowance;
@property(nonatomic) __weak id <STAllowanceDetailListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)allowanceSetupListControllerDidCancel:(id)arg1;
- (void)allowanceSetupListController:(id)arg1 didSelectAllowanceIdentifiers:(id)arg2;
- (void)customizeDaysListController:(id)arg1 didFinishEditingTimeByDay:(id)arg2;
- (id)datePickerForSpecifier:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)atEndOfLimitFooterText;
- (id)askForMoreTime:(id)arg1;
- (void)setAskForMoreTime:(id)arg1 specifier:(id)arg2;
- (id)createBudgetedItemSpecifiers;
- (void)deleteAllowance:(id)arg1;
- (void)confirmDeletion:(id)arg1;
- (void)editApps:(id)arg1;
- (void)showCustomizeDaysController:(id)arg1;
- (id)timeFooterText;
- (id)budgetTime;
- (void)showPickerSpecifierForSpecifier:(id)arg1 highlight:(_Bool)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (_Bool)hasSetBudgetTimeOrCustomSchedule;
- (_Bool)hasSetBudgetTime;
- (void)showOrHideCustomizeDaysSpecifier;
- (void)updateSaveButton;
- (void)saveButtonTapped:(id)arg1;
- (void)willResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)canBeShownFromSuspendedState;
- (id)initWithCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

