//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreferencesUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>
#import <PreferencesUI/PSSpecifierGroup-Protocol.h>

@class CoreTelephonyClient, NSMutableArray, NSString, PSListController, PSSpecifier;

@interface PSUINetworkSelectionSubgroup : NSObject <CoreTelephonyClientSubscriberDelegate, PSSpecifierGroup>
{
    PSListController *_listController;
    PSSpecifier *_parentSpecifier;
    CoreTelephonyClient *_ctClient;
    NSMutableArray *_bundleControllers;
}

@property(retain, nonatomic) NSMutableArray *bundleControllers; // @synthesize bundleControllers=_bundleControllers;
@property(retain, nonatomic) CoreTelephonyClient *ctClient; // @synthesize ctClient=_ctClient;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (void).cxx_destruct;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)networkSelected:(id)arg1 success:(_Bool)arg2 mode:(id)arg3;
- (void)reloadCellularNetworkSpecifier;
- (id)localizedCellularNetworkName:(id)arg1;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (void)setShowsCarrierSettingsMenu:(_Bool)arg1;
- (_Bool)_showCarrier;
- (id)specifiers;
- (void)willEnterForeground;
- (void)dealloc;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

