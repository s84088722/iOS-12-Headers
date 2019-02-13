//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SBSStatusBarStyleOverridesCoordinator;
@protocol SBSStatusBarTapContext;

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate <NSObject>
- (void)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 invalidatedRegistrationWithError:(NSError *)arg2;

@optional
- (_Bool)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 receivedTapWithContext:(id <SBSStatusBarTapContext>)arg2 completionBlock:(void (^)(void))arg3;
@end

