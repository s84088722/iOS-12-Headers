//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface StoreKitClientIdentity : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;
    _Bool _allowsBootstrapCellularData;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    _Bool _hidesConfirmationDialogs;
    _Bool _ignoresInAppPurchaseRestriction;
    NSString *_receiptDirectoryPath;
    _Bool _requiresAuthenticationForPayment;
    NSNumber *_storeIdentifier;
    NSNumber *_storeVersion;
    _Bool _sandboxed;
    _Bool _usesIdentityAttributes;
    NSString *_vendorIdentifier;
}

@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(nonatomic) _Bool usesIdentityAttributes; // @synthesize usesIdentityAttributes=_usesIdentityAttributes;
@property(copy, nonatomic) NSNumber *storeVersion; // @synthesize storeVersion=_storeVersion;
@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(nonatomic) _Bool requiresAuthenticationForPayment; // @synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment;
@property(copy, nonatomic) NSString *receiptDirectoryPath; // @synthesize receiptDirectoryPath=_receiptDirectoryPath;
@property(nonatomic) _Bool ignoresInAppPurchaseRestriction; // @synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction;
@property(nonatomic) _Bool hidesConfirmationDialogs; // @synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValuesWithSoftwareApplicationProxy:(id)arg1;
- (void)setValuesWithPaymentQueueClient:(id)arg1;
- (void)dealloc;

@end

