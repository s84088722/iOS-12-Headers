//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RTKeychainManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)statusToError:(int)arg1 error:(id *)arg2;
- (id)saltString:(id)arg1 withSaltData:(id)arg2 error:(id *)arg3;
- (_Bool)_deleteValueWithKey:(id)arg1 error:(id *)arg2;
- (_Bool)_setObject:(id)arg1 forKey:(id)arg2 existence:(_Bool)arg3 error:(id *)arg4;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)_objectForKey:(id)arg1 error:(id *)arg2;
- (id)objectForKey:(id)arg1 defaultHandler:(CDUnknownBlockType)arg2;
- (id)encryptionKeyWithSize:(long long)arg1 identifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeEncryptionKeyWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)createSymmetricKeyWithSize:(long long)arg1 identifier:(id)arg2 storeInKeychain:(_Bool)arg3 error:(id *)arg4;
- (id)defaultSymmetricKeyAttributes;
- (id)init;

@end

