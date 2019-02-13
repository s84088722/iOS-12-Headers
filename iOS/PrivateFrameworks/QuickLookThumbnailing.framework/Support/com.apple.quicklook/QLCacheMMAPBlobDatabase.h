//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, QLCacheFragHandler;

@interface QLCacheMMAPBlobDatabase : NSObject
{
    NSString *_path;
    QLCacheFragHandler *_fragHandler;
    int _file;
    unsigned long long _maxSize;
    void *_vmFile;
    NSMutableArray *_reservedBuffers;
}

@property(readonly) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
- (void).cxx_destruct;
- (void)validateReservedBufferWithBlobInfo:(id)arg1;
- (void)discardReservedBufferWithBlobInfo:(id)arg1;
- (void *)bufferPointedToByBlobInfo:(id)arg1;
- (id)reserveBufferWithLength:(unsigned long long)arg1;
- (void)reset;
- (void)close;
- (void)save;
- (_Bool)isOpen;
- (id)checkConsistency:(id)arg1;
- (_Bool)isValid;
- (void)open;
@property(readonly) unsigned long long size;
@property(readonly) float fragmentation;
- (_Bool)doesExist;
- (_Bool)deleteBlobsWithArray:(id)arg1;
- (_Bool)deleteBlobWithInfo:(id)arg1;
- (id)copyBlobWithInfo:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

