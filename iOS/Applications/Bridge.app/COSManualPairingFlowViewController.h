//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COSNavigationController.h"

@class COSManualPairingViewController;
@protocol COSManualPairingDelegate;

@interface COSManualPairingFlowViewController : COSNavigationController
{
    id <COSManualPairingDelegate> _pairingDelegate;
    COSManualPairingViewController *_securePairingController;
}

@property(readonly, nonatomic) COSManualPairingViewController *securePairingController; // @synthesize securePairingController=_securePairingController;
@property(nonatomic) __weak id <COSManualPairingDelegate> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
- (void).cxx_destruct;
- (Class)pairingControllerClass;
- (void)controllerCancelled:(id)arg1;
- (id)init;

@end

