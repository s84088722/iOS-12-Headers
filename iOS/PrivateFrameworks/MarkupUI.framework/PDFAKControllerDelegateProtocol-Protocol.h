//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MarkupUI/NSObject-Protocol.h>

@class AKController, NSArray, NSUndoManager, UIView, UIViewController;

@protocol PDFAKControllerDelegateProtocol <NSObject>

@optional
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)controllerDidExitToolMode:(AKController *)arg1;
- (void)controllerWillExitToolMode:(AKController *)arg1;
- (void)controllerDidEnterToolMode:(AKController *)arg1;
- (void)controllerWillEnterToolMode:(AKController *)arg1;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (struct CGRect)positioningRectForCandidatePicker;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (NSUndoManager *)undoManagerForAnnotationController:(AKController *)arg1;
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (void)positionSketchOverlay:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (NSArray *)controller:(AKController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
@end

