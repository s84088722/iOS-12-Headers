//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTTableDataObject : NSObject <TSPCopying>
{
    unsigned int _refCount;
}

@property(readonly, nonatomic) unsigned int refCount; // @synthesize refCount=_refCount;
- (id)copyWithContext:(id)arg1;
- (void)addReferencesFromObject:(id)arg1;
- (_Bool)dropReference;
- (void)takeReference;
- (id)initWithRefCount:(unsigned int)arg1;

@end
