//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightLongNumericKeypad : SBUIPasscodeLockViewLongNumericKeypad
{
    SBUIButton *_actionButton;
}

- (void).cxx_destruct;
- (void)_actionButtonHit;
- (void)_layoutActionButton;
- (void)_sizeLabel:(id)arg1;
- (void)_configureActionButton;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (void)_setShowsCancelButton:(_Bool)arg1 fromEmergencyCallButton:(_Bool)arg2;
- (void)setShowsCancelButton:(_Bool)arg1;
- (void)_setShowsEmergencyCallButton:(_Bool)arg1 fromCancelButton:(_Bool)arg2;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (void)_layoutStatusView;
- (id)initWithLightStyle:(_Bool)arg1;

@end

