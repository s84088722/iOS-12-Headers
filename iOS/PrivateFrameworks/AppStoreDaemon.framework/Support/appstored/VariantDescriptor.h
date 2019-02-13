//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, OSVersion;

@interface VariantDescriptor : NSObject <NSCopying>
{
    NSArray *_components;
    long long _version;
}

+ (id)_findCompatibleDescriptor:(id)arg1;
+ (id)_filterAndSortDescriptors:(id)arg1 compatibleWithProductType:(id)arg2;
+ (_Bool)hasCompatibleDescriptorFromDictionary:(id)arg1 usingKeyProfile:(long long)arg2;
+ (_Bool)hasCompatibleDescriptorFromArray:(id)arg1;
+ (id)findCompatibleDescriptorFromDictionary:(id)arg1 usingKeyProfile:(long long)arg2;
+ (id)findCompatibleDescriptorFromArray:(id)arg1;
+ (id)descriptorForString:(id)arg1;
+ (id)descriptorsForDictionary:(id)arg1 usingKeyProfile:(long long)arg2;
- (void).cxx_destruct;
- (id)_valueForComponent:(CDStruct_4bcfbbae)arg1;
- (_Bool)_isValid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToDescriptor:(id)arg1;
@property(readonly, copy) NSString *productType;
@property(readonly, copy) OSVersion *osVersion;
@property(readonly, copy) NSString *canonicalIdentifier;
- (id)_initWithComponents:(id)arg1;
- (id)initWithString:(id)arg1;

@end

