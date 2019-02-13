//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSTCellUIDList : NSObject <NSCopying>
{
    vector_4dc5f307 _rowIdList;
    vector_4dc5f307 _columnIdList;
    vector_12bd641b _rowUIDIndexList;
    vector_12bd641b _columnUIDIndexList;
    vector_7670e6f2 _uncompressedCellUIDs;
    unsigned long long _compressedSize;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)cellUIDListFromRange:(const UUIDRect_d701734b *)arg1;
+ (id)cellUIDList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateCellUIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)pruneCellUIDListAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)pruneCellUIDListAgainstTable:(id)arg1 behavior:(unsigned long long)arg2;
- (void)compressUIDIndexListFrom:(const vector_12bd641b *)arg1 withUIDCount:(unsigned long long)arg2 to:(vector_12bd641b *)arg3;
- (void)p_compressUID:(const UUIDData_5fbc143e *)arg1 index:(unsigned long long)arg2 UIDtoIndexMap:(map_2cd530a9 *)arg3 UIDs:(vector_4dc5f307 *)arg4 compressedIndexes:(vector_12bd641b *)arg5 lastSameUIDIndex:(vector_06e666a8 *)arg6;
- (void)compress;
- (void)addCellRegion:(id)arg1 withColumnUIDs:(const vector_4dc5f307 *)arg2 rowUIDs:(const vector_4dc5f307 *)arg3;
- (void)addCellUID:(const struct TSTCellUID *)arg1;
- (id)iterator;
- (unsigned long long)computeValidCount;
- (unsigned long long)count;
- (vector_7670e6f2 *)uncompressedCellUIDs;
- (void)setCompressedColumnIndexes:(const vector_12bd641b *)arg1;
- (const vector_12bd641b *)compressedColumnIndexes;
- (const vector_12bd641b *)compressedRowIndexes;
- (const vector_4dc5f307 *)compressedColumnUIDs;
- (const vector_4dc5f307 *)columnUIDs;
- (const vector_4dc5f307 *)compressedRowUIDs;
- (const vector_4dc5f307 *)rowUIDs;
- (void)saveToMessage:(struct CellUIDListArchive *)arg1 archiver:(id)arg2;
- (id)initFromMessage:(const struct CellUIDListArchive *)arg1 unarchiver:(id)arg2;
- (void)dealloc;
- (id)init;

@end

