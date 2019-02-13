//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class VSAccount, VSFailable, VSIdentityProviderRequest, VSIdentityProviderViewController;

@protocol VSIdentityProviderViewControllerDelegate <NSObject>
- (void)identityProviderViewControllerDidCancel:(VSIdentityProviderViewController *)arg1;
- (void)dismissIdentityProviderViewController:(VSIdentityProviderViewController *)arg1;
- (void)identityProviderViewController:(VSIdentityProviderViewController *)arg1 didFinishRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;

@optional
- (void)identityProviderViewController:(VSIdentityProviderViewController *)arg1 didAuthenticateAccount:(VSAccount *)arg2 forRequest:(VSIdentityProviderRequest *)arg3;
- (void)identityProviderViewControllerDidFinishLoading:(VSIdentityProviderViewController *)arg1;
@end

