//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAppleIDAuthenticationClientProtocol-Protocol.h>

@class AKAppleIDAuthenticationController, NSMutableDictionary, NSString;
@protocol AKAppleIDAuthenticationDelegate, OS_dispatch_queue;

@interface _AKAppleIDAuthenticationContextManager : NSObject <AKAppleIDAuthenticationClientProtocol>
{
    NSMutableDictionary *_authContextsByUUID;
    AKAppleIDAuthenticationController *_authController;
    NSObject<OS_dispatch_queue> *_authContextsQueue;
    id <AKAppleIDAuthenticationDelegate> _delegate;
}

@property(nonatomic) __weak id <AKAppleIDAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_clientSideContextForServerContext:(id)arg1;
- (void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)eraseAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)provisionAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerSurrogateForContext:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissNativeRecoveryUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissServerProvidedUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentServerProvidedUIForContext:(id)arg1 withConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dismissSecondFactorUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSecondFactorUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dismissBasicLoginUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentBasicLoginUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unregisterContext:(id)arg1;
- (void)registerContext:(id)arg1;
- (id)initWithAuthenticationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

