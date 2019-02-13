//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentCamera/DCDocumentCameraViewController.h>

#import <DocumentCamera/BKSAccelerometerDelegate-Protocol.h>
#import <DocumentCamera/DCDocumentCameraPublicViewController-Protocol.h>

@class BKSAccelerometer, DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceSession, NSString, _UIResilientRemoteViewContainerViewController;
@protocol DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewController_ViewService : DCDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController>
{
    _UIResilientRemoteViewContainerViewController *_childViewController;
    DCDocumentCameraViewServiceSession *_viewServiceSession;
    BKSAccelerometer *_accelerometer;
}

@property(retain, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property(retain, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession; // @synthesize viewServiceSession=_viewServiceSession;
@property(retain, nonatomic, setter=setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void).cxx_destruct;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)didCancel;
- (void)dismiss;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
@property(readonly, nonatomic, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property(readonly, nonatomic, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;
- (void)viewDidLoad;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
