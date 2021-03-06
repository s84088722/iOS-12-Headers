//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPeerPaymentDocumentSubmissionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentDocumentSubmissionViewControllerResponder-Protocol.h>

@class NSString, NSTimer, PKCameraCaptureInstructionView, PKPeerPaymentDocumentSubmissionController, UIBarButtonItem, UIView;

@interface PKPeerPaymentDocumentSubmissionIDCaptureViewController : UIViewController <PKPeerPaymentDocumentSubmissionControllerDelegate, PKPeerPaymentDocumentSubmissionViewControllerResponder>
{
    PKPeerPaymentDocumentSubmissionController *_captureController;
    UIView *_cameraView;
    UIView *_cameraInstructionContainerView;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    _Bool _reachedTimeout;
    NSTimer *_timerTryAgain;
    UIBarButtonItem *_buttonCancel;
    long long _context;
}

- (void).cxx_destruct;
- (void)captureController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)captureController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)updateUIWithState:(long long)arg1;
- (void)cancel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithController:(id)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

