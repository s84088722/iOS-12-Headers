/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PSUIFingerprintController : PSListController {

	id _effectiveSettingsChangedNotificationObserver;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)canBeShownFromSuspendedState;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(id)representedBiometricIdentity;
-(void)setFingerprintName:(id)arg1 ;
-(id)fingerprintName;
-(void)deleteFingerprint:(id)arg1 ;
-(id)passcodeController;
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

