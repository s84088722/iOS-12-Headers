//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CDPDSecureBackupContext, CDPDSecureBackupController, NSString;

@protocol CDPDSecureBackupDelegate
- (void)promptForLocalSecretWithCompletion:(void (^)(NSString *, unsigned long long, NSError *))arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (_Bool)synchronizeCircleViewsForSecureBackupContext:(CDPDSecureBackupContext *)arg1;
- (NSString *)circlePeerIDForSecureBackupController:(CDPDSecureBackupController *)arg1;
@end

