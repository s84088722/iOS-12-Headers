//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSKeychainSyncViewController.h>

#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class NSString, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate>
{
    double _cellTextWidth;
    UIFont *_cellFont;
    _Bool _showsDisableRecoveryOption;
}

@property(nonatomic) _Bool showsDisableRecoveryOption; // @synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)nextPressed;
- (void)_finishedWithSpecifier:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

