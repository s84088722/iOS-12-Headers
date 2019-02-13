//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, UIView, UIViewController;

@protocol _SSSScreenshotContentOverlayControllerDelegate <NSObject>
@property(readonly, nonatomic) UIViewController *viewControllerForOverlayPresentations;
@property(readonly, nonatomic) UIView *viewContainingScreenshotContents;
- (void)requireGestureRecognizerToFailBeforeAllOtherGestureRecognizers:(UIGestureRecognizer *)arg1;
- (void)requireAllOtherGestureRecognizersToFailBeforeGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)uninstallInterstitialGesture:(UIGestureRecognizer *)arg1;
- (void)installInterstitialGesture:(UIGestureRecognizer *)arg1;
@end

