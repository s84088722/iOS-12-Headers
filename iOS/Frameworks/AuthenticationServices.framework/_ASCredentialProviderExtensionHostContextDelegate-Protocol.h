//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASPasswordCredential, NSError, _ASCredentialProviderExtensionHostContext;

@protocol _ASCredentialProviderExtensionHostContextDelegate <NSObject>

@optional
- (void)prepareToCancelRequestWithHostContext:(_ASCredentialProviderExtensionHostContext *)arg1 error:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(_ASCredentialProviderExtensionHostContext *)arg1 completion:(void (^)(void))arg2;
- (void)prepareToCompleteRequestWithHostContext:(_ASCredentialProviderExtensionHostContext *)arg1 credential:(ASPasswordCredential *)arg2 completion:(void (^)(void))arg3;
@end

