//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, _SFDialogController;

@protocol _SFDialogViewControllerPresenting <NSObject>
- (void)dialogController:(_SFDialogController *)arg1 dismissViewController:(UIViewController *)arg2 withAdditionalAnimations:(void (^)(void))arg3;
- (void)dialogController:(_SFDialogController *)arg1 presentViewController:(UIViewController *)arg2 withAdditionalAnimations:(void (^)(void))arg3;
@end

