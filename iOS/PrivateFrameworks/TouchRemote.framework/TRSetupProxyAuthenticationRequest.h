//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSSet, NSString;

@interface TRSetupProxyAuthenticationRequest : TRRequestMessage
{
    ACAccount *_account;
    NSString *_rawPassword;
    NSSet *_targetedAccountServices;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *targetedAccountServices; // @synthesize targetedAccountServices=_targetedAccountServices;
@property(retain, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

