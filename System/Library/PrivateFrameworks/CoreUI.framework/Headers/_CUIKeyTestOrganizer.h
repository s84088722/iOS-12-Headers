//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CUIKeyTestOrganizer : NSObject
{
    struct _renditionkeytoken originalKey[18];
    NSArray *orderedNonZeroFlexibleAttributes;
    unsigned long long flexAttributesCount;
    struct _renditionkeytoken testKey[18];
    unsigned long long chooseCount;
    unsigned long long subchooseCount;
}

- (struct _renditionkeytoken *)nextKey;
- (void)dealloc;
- (id)initWithRenditionKey:(const struct _renditionkeytoken *)arg1;
- (void)_bumpTestKey;
- (_Bool)_bumpTestKeyAttributeIndex:(unsigned long long)arg1;
- (unsigned long long)_attributeToBumpIndex;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken *)arg1;

@end
