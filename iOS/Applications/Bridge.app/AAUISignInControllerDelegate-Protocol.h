//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UINavigationControllerDelegate-Protocol.h"

@class AAUISignInController, NSError;

@protocol AAUISignInControllerDelegate <UINavigationControllerDelegate>

@optional
- (void)signInControllerDidCancel:(AAUISignInController *)arg1;
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

