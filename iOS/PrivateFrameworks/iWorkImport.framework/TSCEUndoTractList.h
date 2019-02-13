//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCEUndoTractList : NSObject <NSCopying, NSFastEnumeration>
{
    struct TSUPreserveFlags _preserveFlags;
    NSMutableArray *_tracts;
}

@property(nonatomic) struct TSUPreserveFlags preserveFlags; // @synthesize preserveFlags=_preserveFlags;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)remapUsingColumnUidMap:(const UUIDMap_b66c2694 *)arg1 rowUidMap:(const UUIDMap_b66c2694 *)arg2 clearIfMissing:(_Bool)arg3;
- (_Bool)remapUsingUidMap:(const UUIDMap_b66c2694 *)arg1;
- (id)description;
- (void)pruneMergeUidTractsAtAndAboveIndex:(unsigned char)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)uidTractAtIndex:(unsigned char)arg1;
- (void)appendUidTract:(id)arg1;
- (void)dropTract:(id)arg1;
- (id)firstTractWithPurpose:(unsigned char)arg1;
- (void)addTractAtFront:(id)arg1;
- (void)removeFromExcludedUidsTractRowUids:(const vector_4dc5f307 *)arg1;
- (void)removeFromExcludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1;
- (void)removeFromExcludedUidsTractRowUidsSet:(const UUIDSet_bcc2db41 *)arg1;
- (void)removeFromExcludedUidsTractColumnUidsSet:(const UUIDSet_bcc2db41 *)arg1;
- (void)addToExcludedTractUids:(const vector_4dc5f307 *)arg1 isRows:(_Bool)arg2;
- (void)addToExcludedUidsTractRowUids:(const vector_4dc5f307 *)arg1;
- (void)addToExcludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1;
- (void)addToIncludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1 rowUids:(const vector_4dc5f307 *)arg2;
- (void)addToIncludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1 rowUids:(const vector_4dc5f307 *)arg2 isRangeRef:(_Bool)arg3 preserveRectangularRange:(_Bool)arg4;
- (void)addToIncludedUidsTractColumnUid:(const UUIDData_5fbc143e *)arg1 rowUid:(const UUIDData_5fbc143e *)arg2;
- (id)activeUidTract;
- (id)preMoveRegionUidTract;
- (id)preMergeUidTract;
- (id)excludedUidsTract;
- (id)includedUidsTract;
- (unsigned char)tractCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTractList *)arg1;
- (id)initWithArchive:(const struct ASTNodeArrayArchive_ASTUidTractList *)arg1;

@end

