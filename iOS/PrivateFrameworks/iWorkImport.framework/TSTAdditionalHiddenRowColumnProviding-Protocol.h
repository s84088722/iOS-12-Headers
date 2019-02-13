//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSIndexSet, TSTCellRegion;

@protocol TSTAdditionalHiddenRowColumnProviding <NSObject>
- (_Bool)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)showRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned int)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)hasHiddenRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1 forAction:(unsigned char)arg2;
- (NSIndexSet *)indexesOfVisibleColumnsInColumnRange:(NSIndexSet *)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInRowRange:(NSIndexSet *)arg1;
- (NSIndexSet *)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfUserHiddenColumns;
- (unsigned int)numberOfUserHiddenRows;
- (unsigned int)numberOfHiddenColumns;
- (unsigned int)numberOfHiddenRows;
- (_Bool)hasUserHiddenColumns;
- (_Bool)hasUserHiddenRows;
- (_Bool)hasHiddenColumns;
- (_Bool)hasHiddenRows;
@end

