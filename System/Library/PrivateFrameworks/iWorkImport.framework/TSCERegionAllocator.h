//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCERegionAllocator : NSObject
{
    struct TSCERegionNode *_head;
    struct TSCERegionNode *_curBlock;
    unsigned int _blockOffset;
    struct vector<TSCEASTNodeArrayChunk *, std::__1::allocator<TSCEASTNodeArrayChunk *>> _nodeArrayChunks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void *)calloc:(unsigned long long)arg1;
- (void *)malloc:(unsigned long long)arg1;
- (struct TSCEASTNodeArray *)managedNodeArrayWithCapacity:(unsigned long long)arg1;
- (id)initWithInitialCapacity:(unsigned long long)arg1;

@end

