//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@protocol COSSOSSettingsViewControllerDelegate;

@interface COSSOSSettingsViewController : PSListController
{
    _Bool _deviceSupportsMedicalContacts;
    _Bool _useMedicalEmergencyContacts;
    _Bool _haveSetUseMedicalEmergencyContacts;
    _Bool _wristDetectionEnabled;
    _Bool _newtonRequiresConfirmation;
    id <COSSOSSettingsViewControllerDelegate> _navBarDelegate;
}

@property(nonatomic) __weak id <COSSOSSettingsViewControllerDelegate> navBarDelegate; // @synthesize navBarDelegate=_navBarDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)learnMore;
- (void)openHealthApp;
- (id)longPressTriggersEmergencySOS:(id)arg1;
- (id)newtonTriggersEmergencySOS:(id)arg1;
- (void)setNewtonTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;
- (void)setLongPressTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;
- (id)getContactDestination:(id)arg1;
- (struct _NSRange)rangeOfReplacementString:(id)arg1 inFormatString:(id)arg2;
- (void)_addFooterFormat:(id)arg1 footerLink:(id)arg2 toSpecifier:(id)arg3 withAction:(id)arg4;
- (void)_appendNewtonSpecifierToSpecifiers:(id)arg1;
- (id)specifiersUsingEmergencyContacts;
- (id)specifiersUsingSOSContacts;
- (id)specifiers;
- (void)_updateSOSContactsList;
- (void)sosContactsChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)useMedicalEmergencyContacts;

@end
