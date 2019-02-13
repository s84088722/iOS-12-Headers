//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, NSString, PSSpecifier, PSUIAppCellularUsageGroup;

@interface PSUIWirelessDataOptionsController : PSListController <CoreTelephonyClientSubscriberDelegate>
{
    PSSpecifier *_groupSpecifier;
    PSUIAppCellularUsageGroup *_perAppUsageController;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) PSUIAppCellularUsageGroup *perAppUsageController; // @synthesize perAppUsageController=_perAppUsageController;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
- (void).cxx_destruct;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)_handleNewCarrierNotification:(id)arg1;
- (void)perAppSpecifiersFinishedLoading;
- (id)specifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

