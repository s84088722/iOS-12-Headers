//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RMKeychainAccess : NSObject
{
}

+ (id)getIdentityPublicCertificateData:(struct __SecIdentity *)arg1;
+ (id)getIdentityExpirationDate:(struct __SecIdentity *)arg1;
+ (id)getCertificateExpirationDate:(struct __SecCertificate *)arg1;
+ (struct __SecIdentity *)createIdentityWithCommonName:(id)arg1 error:(id *)arg2;
+ (id)getCommonNamesForCertificate:(struct __SecCertificate *)arg1;
+ (struct __SecCertificate *)getLeafCertificateForTrust:(struct __SecTrust *)arg1;
+ (_Bool)itemExistsInKeychain:(void *)arg1;
+ (id)getCertificatesWithPersistentIDs:(id)arg1;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
+ (const void *)copyItemWithPersistentID:(id)arg1;
+ (_Bool)removeItemWithPersistentID:(id)arg1;
+ (id)addItem:(void *)arg1 toGroup:(id)arg2;

@end

