//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTCellDictionary : NSObject
{
    struct os_unfair_lock_s _lock;
    struct map<TSUCellCoord, TSTCell *, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTCell *>>> _cellsByCoord;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyBlockToAllCells:(CDUnknownBlockType)arg1;
- (struct TSCECellCoordSet)allCellCoords;
- (id)allCells;
- (vector_38b190b0)removeAllCells;
- (id)cellAtCellID:(struct TSUCellCoord)arg1;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (id)init;

@end

