//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAESKeyManager : NSObject
{
}

+ (id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (_Bool)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (_Bool)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3;
+ (id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1;
+ (id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(_Bool)arg4;
+ (id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+ (id)getVoiceTriggerProfilesAESKey;

@end

