//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKRTree : NSObject
{
    struct GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))> *_cRTree;
    unsigned long long _queryReserve;
}

+ (id)treeWithMaxNumberOfChildren:(unsigned long long)arg1;
@property unsigned long long queryReserve; // @synthesize queryReserve=_queryReserve;
- (id)elementsInBoundingRectMin:rectMax: /* Error: Ran out of types for this method. */;
- (void)removeElement:(id)arg1 boundingRectMin:boundingRectMax: /* Error: Ran out of types for this method. */;
- (void)addElement:(id)arg1 boundingRectMin:(long long)arg2 boundingRectMax:splitStrategy: /* Error: Ran out of types for this method. */;
- (id)initWithMaxNumberOfChildren:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

