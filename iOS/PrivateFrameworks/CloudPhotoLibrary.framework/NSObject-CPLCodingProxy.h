//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (CPLCodingProxy)
+ (id)cplAllPropertyNames;
+ (void)cplDumpProperties;
+ (id)_cplPropertyAttributeMap;
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
- (unsigned long long)cplSpecialHash;
- (_Bool)cplSpecialIsEqual:(id)arg1;
- (id)cplFullDescription;
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)cplHash;
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 differingProperty:(id *)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;
- (_Bool)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;
- (_Bool)cplIsEqual:(id)arg1;
- (void)cplDecodePropertiesFromCoder:(id)arg1;
- (void)cplEncodePropertiesWithCoder:(id)arg1;
- (id)cplDeepCopy;
@end

