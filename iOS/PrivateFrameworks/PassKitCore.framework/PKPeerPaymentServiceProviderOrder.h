//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKServiceProviderOrder.h>

@class NSString;

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder
{
    NSString *_sourceAccount;
    NSString *_targetAccount;
    NSString *_dpanIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property(copy, nonatomic) NSString *targetAccount; // @synthesize targetAccount=_targetAccount;
@property(copy, nonatomic) NSString *sourceAccount; // @synthesize sourceAccount=_sourceAccount;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceProviderData;
- (id)init;

@end

