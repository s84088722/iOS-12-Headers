//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SSSScreenshotView, UIGestureRecognizer, UIViewController;

@protocol SSSScreenshotViewDelegate
- (void)screenshotView:(SSSScreenshotView *)arg1 noLongerHasHighPriorityGesture:(UIGestureRecognizer *)arg2;
- (void)screenshotView:(SSSScreenshotView *)arg1 hasHighPriorityGesture:(UIGestureRecognizer *)arg2;
- (UIViewController *)viewControllerForPresentationsFromScreenshotView:(SSSScreenshotView *)arg1;
- (void)screenshotViewTapped:(SSSScreenshotView *)arg1;
- (void)screenshotViewUndoStackChanged:(SSSScreenshotView *)arg1;
@end
