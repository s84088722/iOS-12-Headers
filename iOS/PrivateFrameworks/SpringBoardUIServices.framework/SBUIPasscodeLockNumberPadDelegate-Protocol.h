//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class SBUIPasscodeLockNumberPad, UIControl;
@protocol SBUIPasscodeNumberPadButton;

@protocol SBUIPasscodeLockNumberPadDelegate <NSObject>

@optional
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPadBackspaceButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyCancelled:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyUp:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyDown:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
@end

