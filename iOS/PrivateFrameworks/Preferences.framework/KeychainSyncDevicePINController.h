//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSKeychainSyncTextEntryController.h>

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController
{
    DevicePINController *_devicePINController;
    _Bool _showingBlockedMessage;
    NSString *_enterPasscodeTitle;
    NSString *_enterPasscodeReason;
    UIKeyboard *_disabledKeyboard;
}

@property(retain, nonatomic) UIKeyboard *disabledKeyboard; // @synthesize disabledKeyboard=_disabledKeyboard;
@property(retain, nonatomic) NSString *enterPasscodeReason; // @synthesize enterPasscodeReason=_enterPasscodeReason;
@property(retain, nonatomic) NSString *enterPasscodeTitle; // @synthesize enterPasscodeTitle=_enterPasscodeTitle;
- (void).cxx_destruct;
- (void)didFinishEnteringText:(id)arg1;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (id)specifiers;
- (void)updateBlockedState:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

