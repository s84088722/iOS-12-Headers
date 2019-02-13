//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface RMStoreComparer : NSObject
{
    NSArray *_storesToCompare;
    NSSet *_entityNamesWhitelist;
    NSMutableDictionary *_entityNameToAttributeNamesToCompare;
}

@property(readonly, nonatomic) NSSet *entityNamesWhitelist; // @synthesize entityNamesWhitelist=_entityNamesWhitelist;
- (void).cxx_destruct;
- (id)uniqueIdentifierForObject:(id)arg1;
- (id)uniquedPropertiesToFetchForEntity:(id)arg1;
- (_Bool)validateValue:(id)arg1 againstOtherValue:(id)arg2 forIgnoredAttribute:(id)arg3;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2 forAttribute:(id)arg3;
- (_Bool)compareAttributes:(id)arg1 onObject:(id)arg2 toObject:(id)arg3 error:(id *)arg4;
- (_Bool)compareContentOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;
- (_Bool)ensureContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id *)arg3;
- (_Bool)ensureContentsMatch:(id *)arg1;
- (void)setAttributeNamesToCompare:(id)arg1 forEntityWithName:(id)arg2;
- (id)attributesToCompareForObjects:(id)arg1 error:(id *)arg2;
- (id)initWithStoresToCompare:(id)arg1 entityNames:(id)arg2;

@end

