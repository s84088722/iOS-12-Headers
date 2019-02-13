//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, UIViewController, _UIRotatingAlertController;

@protocol _UIRotatingAlertControllerDelegate <NSObject>
- (struct CGRect)presentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;
- (UIView *)hostViewForSheet:(_UIRotatingAlertController *)arg1;

@optional
- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerDidChange:(UIViewController *)arg2;
- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerWillChange:(UIViewController *)arg2;
@end

