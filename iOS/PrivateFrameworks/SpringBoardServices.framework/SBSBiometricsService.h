//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSBiometricsService : SBSAbstractSystemService
{
}

- (void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(CDUnknownBlockType)arg1;

@end

