//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSHashTable.h>

__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _callBacks;
    struct __CFBasicHash *_ht;
}

- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;
- (id)allObjects;
- (id)description;
- (unsigned long long)count;
- (void)removeItem:(const void *)arg1;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)addObject:(id)arg1;
- (void)insertItem:(const void *)arg1;
- (void *)getItem:(const void *)arg1;
- (id)copy;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeAllItems;
- (void)dealloc;
- (id)init;

@end

