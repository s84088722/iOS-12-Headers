//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPassbookPeerPaymentSettingsDataSource-Protocol.h>
#import <PassKitUI/PKPassbookPeerPaymentSettingsDelegate-Protocol.h>

@class NSString, PKPaymentWebService, PKPeerPaymentWebService;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate>
{
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentWebService *_peerPaymentWebService;
}

- (void).cxx_destruct;
- (void)_unregisterForPeerPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerForPeerPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (void)peerPaymentRegistrationStatusHasChanged:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)peerPaymentWebService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
