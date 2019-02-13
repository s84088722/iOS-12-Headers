//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet, UIViewController;

@interface TRProxyAuthOperation : TROperation
{
    ACAccount *_account;
    NSSet *_targetedServices;
    UIViewController *_presentingViewController;
}

@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSSet *targetedServices; // @synthesize targetedServices=_targetedServices;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_handleProxyAuthenticationResponse:(id)arg1;
- (void)_performProxyAuthenticationWithProxiedDevice:(id)arg1;
- (void)_handleProxyDeviceResponse:(id)arg1;
- (void)_sendProxyDeviceRequest;
- (void)execute;

@end

