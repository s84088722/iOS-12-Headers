//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class NSError, PKAuthorizedPeerPaymentQuote, PKPaymentAuthorizationCoordinator, PKServiceProviderPurchase;

@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate <NSObject>

@optional
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePurchase:(PKServiceProviderPurchase *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 willFinishWithError:(NSError *)arg2;
@end

