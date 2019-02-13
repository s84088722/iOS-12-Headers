//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSString, SAMLSignature, SAMLStatus;

__attribute__((visibility("hidden")))
@interface SAMLResponseElement : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
- (id)authnStatement;
- (_Bool)assertionMeetsConditions:(id *)arg1;
@property(readonly, nonatomic) NSArray *assertions;
@property(readonly, nonatomic) SAMLStatus *status;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(readonly, nonatomic) NSString *issuer;
@property(readonly, nonatomic) NSString *consent;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(readonly, nonatomic) NSString *relatedRequest;
@property(readonly, nonatomic) NSString *identifier;

@end

