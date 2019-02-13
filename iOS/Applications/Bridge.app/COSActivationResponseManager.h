//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RUILoaderDelegate-Protocol.h"
#import "RUIObjectModelDelegate-Protocol.h"

@class COSSetupController, NSString, RUIObjectModel;

@interface COSActivationResponseManager : NSObject <RUILoaderDelegate, RUIObjectModelDelegate>
{
    _Bool _awaitingActivation;
    _Bool _didPresentFlow;
    _Bool _hasStashedALFlow;
    _Bool _isFlowOnHold;
    COSSetupController *_setupController;
    RUIObjectModel *_rootObjectModel;
}

@property(nonatomic) _Bool isFlowOnHold; // @synthesize isFlowOnHold=_isFlowOnHold;
@property(retain, nonatomic) RUIObjectModel *rootObjectModel; // @synthesize rootObjectModel=_rootObjectModel;
@property(readonly, nonatomic) _Bool hasStashedALFlow; // @synthesize hasStashedALFlow=_hasStashedALFlow;
@property(readonly, nonatomic) _Bool didPresentFlow; // @synthesize didPresentFlow=_didPresentFlow;
@property(nonatomic) _Bool awaitingActivation; // @synthesize awaitingActivation=_awaitingActivation;
@property(nonatomic) __weak COSSetupController *setupController; // @synthesize setupController=_setupController;
- (void).cxx_destruct;
- (void)clearActivationState;
- (id)viewControllerForAlertPresentation;
- (void)presentFlow;
- (void)awaitActivationWhileHoldingFlow:(_Bool)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

