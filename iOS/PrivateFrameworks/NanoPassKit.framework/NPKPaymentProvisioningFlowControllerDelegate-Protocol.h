//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKPaymentProvisioningFlowController, NPKPaymentProvisioningFlowStepContext;

@protocol NPKPaymentProvisioningFlowControllerDelegate <NSObject>
- (void)paymentProvisioningFlowController:(NPKPaymentProvisioningFlowController *)arg1 didTransitionFromStep:(unsigned long long)arg2 toStep:(unsigned long long)arg3 withContext:(NPKPaymentProvisioningFlowStepContext *)arg4;
@end

