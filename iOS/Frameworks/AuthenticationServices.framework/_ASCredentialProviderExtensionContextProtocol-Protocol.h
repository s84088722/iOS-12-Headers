//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASPasswordCredentialIdentity, NSArray;

@protocol _ASCredentialProviderExtensionContextProtocol <NSObject>
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)prepareCredentialListForServiceIdentifiers:(NSArray *)arg1;
@end

