//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SSSDittoRootViewController, SSSViewControllerManager;

@protocol SSSDittoViewController
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager;
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)stopBeingParentOfDittoRootViewController:(SSSDittoRootViewController *)arg1;
- (void)becomeParentOfDittoRootViewController:(SSSDittoRootViewController *)arg1;
@end

