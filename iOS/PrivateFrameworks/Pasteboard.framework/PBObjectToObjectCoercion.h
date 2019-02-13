//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PBObjectToObjectCoercion : NSObject
{
    Class _theClass;
    NSMutableDictionary *_blockByClass;
    NSMutableOrderedSet *_classOrder;
}

@property(retain, nonatomic) NSMutableOrderedSet *classOrder; // @synthesize classOrder=_classOrder;
@property(retain, nonatomic) NSMutableDictionary *blockByClass; // @synthesize blockByClass=_blockByClass;
@property(retain, nonatomic) Class theClass; // @synthesize theClass=_theClass;
- (void).cxx_destruct;
- (id)coerceObject:(id)arg1 toObjectOfClass:(Class)arg2 outError:(id *)arg3;
- (_Bool)canCoerceToObjectOfClass:(Class)arg1;
- (id)availableClasses;
- (void)addCoercionToClass:(Class)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithClass:(Class)arg1;

@end

