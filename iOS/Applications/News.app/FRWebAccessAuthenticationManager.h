//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRAppActivityObserving-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class ASWebAuthenticationSession, FRPurchaseContext, NSString, NSURL;
@protocol FRFeldsparContext, FRWebAccessAuthenticationManagerDelegate;

@interface FRWebAccessAuthenticationManager : NSObject <UIPopoverPresentationControllerDelegate, FRAppActivityObserving>
{
    _Bool _verifyingAccessTokenInProgress;
    NSString *_tagID;
    id <FRWebAccessAuthenticationManagerDelegate> _authenticationManagerDelegate;
    FRPurchaseContext *_purchaseContext;
    id <FRFeldsparContext> _feldsparContext;
    ASWebAuthenticationSession *_authenticationSession;
    NSURL *_authenticationURL;
}

@property(nonatomic) _Bool verifyingAccessTokenInProgress; // @synthesize verifyingAccessTokenInProgress=_verifyingAccessTokenInProgress;
@property(copy, nonatomic) NSURL *authenticationURL; // @synthesize authenticationURL=_authenticationURL;
@property(retain, nonatomic) ASWebAuthenticationSession *authenticationSession; // @synthesize authenticationSession=_authenticationSession;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(copy, nonatomic) FRPurchaseContext *purchaseContext; // @synthesize purchaseContext=_purchaseContext;
@property(nonatomic) __weak id <FRWebAccessAuthenticationManagerDelegate> authenticationManagerDelegate; // @synthesize authenticationManagerDelegate=_authenticationManagerDelegate;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
- (void).cxx_destruct;
- (void)onAuthenticationCallbackReceived:(id)arg1;
- (void)activityObservingApplicationWillEnterForeground;
- (void)presentAuthenticationChallenge;
- (void)dealloc;
- (id)initWithAuthenticationURL:(id)arg1 tagID:(id)arg2 feldsparContext:(id)arg3 purchaseContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

