//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDScheduledActivityClient-Protocol.h>

@class NSMutableArray, NSString, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject <PDScheduledActivityClient>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
}

@property(readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
- (void).cxx_destruct;
- (_Bool)_shouldAttemptBackgroundPeerPaymentRegistration;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1;
- (void)_performDeviceRegistrationWithReason:(id)arg1;
- (void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notePasscodeChanged;
- (void)dealloc;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

