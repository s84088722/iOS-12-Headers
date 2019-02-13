//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMessageKeychainManager : NSObject
{
}

+ (id)newTrustManager;
+ (int)actionForEncryptionCertificate:(struct __SecCertificate *)arg1 address:(id)arg2;
+ (int)actionForSigningIdentity:(struct __SecIdentity *)arg1 address:(id)arg2;
+ (int)_actionForCertificate:(struct __SecCertificate *)arg1 policy:(struct __SecPolicy *)arg2 uncommentedAddress:(id)arg3;
+ (id)saveEncryptionCertificate:(struct __SecCertificate *)arg1 forAddress:(id)arg2;
+ (id)_removeCertificateForPersistent:(id)arg1;
+ (id)_addPersistentMapping:(id)arg1 forAddress:(id)arg2;
+ (struct __SecCertificate *)_copyCertificateForPersistent:(id)arg1 error:(id *)arg2;
+ (id)_addCertificate:(struct __SecCertificate *)arg1 persistent:(id *)arg2;
+ (struct __SecCertificate *)copyEncryptionCertificateForAddress:(id)arg1 error:(id *)arg2;
+ (_Bool)_validateIdentity:(struct __SecIdentity *)arg1 forAddress:(id)arg2 policy:(struct __SecPolicy *)arg3 usage:(unsigned int)arg4 error:(id *)arg5;
+ (_Bool)validateEncryptionIdentity:(struct __SecIdentity *)arg1 forAddress:(id)arg2 error:(id *)arg3;
+ (_Bool)validateSigningIdentity:(struct __SecIdentity *)arg1 forAddress:(id)arg2 error:(id *)arg3;
+ (id)_copyAllIdentitiesWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)copyAllEncryptionIdentitiesForAddress:(id)arg1 error:(id *)arg2;
+ (id)copyAllSigningIdentitiesForAddress:(id)arg1 error:(id *)arg2;
+ (struct __SecIdentity *)copyClientSSLIdentityForHostName:(id)arg1 error:(id *)arg2;
+ (_Bool)_matchSSLClientIdentity:(struct __SecIdentity *)arg1 withHostname:(id)arg2;
+ (id)persistentReferenceForIdentity:(struct __SecIdentity *)arg1 error:(id *)arg2;
+ (struct __SecIdentity *)copyIdentityForPersistentReference:(id)arg1 error:(id *)arg2;
+ (struct __SecPolicy *)copySMIMEEncryptionPolicyForAddress:(id)arg1;
+ (struct __SecPolicy *)copySMIMESigningPolicyForAddress:(id)arg1;
+ (void)removePasswordForServiceName:(id)arg1 accountName:(id)arg2;
+ (void)setPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3 keychainAccessibility:(void *)arg4;
+ (_Bool)addPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3 keychainAccessibility:(void *)arg4 synchronizable:(_Bool)arg5 error:(id *)arg6;
+ (id)passwordForServiceName:(id)arg1 accountName:(id)arg2;
+ (id)passwordForServiceName:(id)arg1 accountName:(id)arg2 error:(id *)arg3;
+ (id)passwordForServiceName:(id)arg1 accountName:(id)arg2 synchronizable:(_Bool)arg3 error:(id *)arg4;
+ (id)_passwordForGenericAccount:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (void)removePasswordForHost:(id)arg1 username:(id)arg2 port:(int)arg3 keychainProtocol:(void *)arg4;
+ (void)setPassword:(id)arg1 forHost:(id)arg2 username:(id)arg3 port:(int)arg4 keychainProtocol:(void *)arg5 keychainAccessibility:(void *)arg6;
+ (id)passwordForHost:(id)arg1 username:(id)arg2 port:(int)arg3 keychainProtocol:(void *)arg4;
+ (id)_passwordForHost:(id)arg1 username:(id)arg2 port:(int)arg3 keychainProtocol:(struct __CFString *)arg4;
+ (void)initialize;

@end

