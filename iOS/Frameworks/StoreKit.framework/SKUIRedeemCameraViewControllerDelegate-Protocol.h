//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSString, SKUIRedeem, SKUIRedeemCameraViewController;

@protocol SKUIRedeemCameraViewControllerDelegate <NSObject>

@optional
- (void)overrideRedeemOperationWithCode:(NSString *)arg1 cameraRecognized:(_Bool)arg2 completion:(void (^)(SKUIRedeem *, NSError *))arg3;
- (void)redeemCameraViewController:(SKUIRedeemCameraViewController *)arg1 didFinishWithRedeem:(SKUIRedeem *)arg2;
@end

