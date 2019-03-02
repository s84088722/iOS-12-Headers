//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

@class NSMutableDictionary, NSObject, TSKCustomFormatList, TSPLazyReference, TSTMergeRegionMap, TSTTableDataList, TSTTableHeaderStorage, TSTTableHeaderStorageBucket, TSTTileIDKeyDict;
@protocol TSDContainerInfo><TSWPStorageParent;

__attribute__((visibility("hidden")))
@interface TSTTableDataStore : TSPContainedObject
{
    // Error parsing type: Ai, name: _iteratorRunningCount
    vector_e87daf7b _mergedRects;
    _Bool _upgrading;
    _Bool _cellCountValid;
    unsigned char _storageVersionPreBNC;
    _Bool _missingPostBNCDatalists;
    unsigned short _nextRowStripID;
    unsigned int _cellCount;
    TSKCustomFormatList *_pasteboardCustomFormatList;
    struct TSTTableRBTreeNode_s *_rowTileIndex;
    TSTTileIDKeyDict *_tileStorage;
    TSTTableHeaderStorage *_rowHeaderStorage;
    TSTTableHeaderStorageBucket *_columnHeaderStorage;
    TSPLazyReference *_styleTableReference;
    TSPLazyReference *_conditionalStyleSetTableReference;
    TSPLazyReference *_stringTableReference;
    TSPLazyReference *_formulaTableReference;
    TSPLazyReference *_controlCellSpecTableReference;
    TSPLazyReference *_formulaErrorTableReference;
    TSPLazyReference *_richTextTableReference;
    TSPLazyReference *_formatTableReference;
    TSPLazyReference *_commentStorageTableReference;
    TSPLazyReference *_importWarningSetTableReference;
    TSPLazyReference *_preBNCFormatTableReference;
    TSTTableDataList *_multipleChoiceListFormatDataList;
    NSObject<TSDContainerInfo><TSWPStorageParent> *_richTextParentInfo;
    NSMutableDictionary *_pasteboardCustomFormatMap;
    TSTMergeRegionMap *_mergedCellRanges;
}

@property(nonatomic) _Bool missingPostBNCDatalists; // @synthesize missingPostBNCDatalists=_missingPostBNCDatalists;
@property(nonatomic) unsigned char storageVersionPreBNC; // @synthesize storageVersionPreBNC=_storageVersionPreBNC;
@property(nonatomic) _Bool cellCountValid; // @synthesize cellCountValid=_cellCountValid;
@property(nonatomic) unsigned int cellCount; // @synthesize cellCount=_cellCount;
@property(retain, nonatomic) TSTMergeRegionMap *mergedCellRanges; // @synthesize mergedCellRanges=_mergedCellRanges;
@property(nonatomic) unsigned short nextRowStripID; // @synthesize nextRowStripID=_nextRowStripID;
@property(retain, nonatomic) NSMutableDictionary *pasteboardCustomFormatMap; // @synthesize pasteboardCustomFormatMap=_pasteboardCustomFormatMap;
@property(nonatomic) __weak NSObject<TSDContainerInfo><TSWPStorageParent> *richTextParentInfo; // @synthesize richTextParentInfo=_richTextParentInfo;
@property(readonly, nonatomic) TSTTableDataList *multipleChoiceListFormatDataList; // @synthesize multipleChoiceListFormatDataList=_multipleChoiceListFormatDataList;
@property(retain, nonatomic) TSPLazyReference *preBNCFormatTableReference; // @synthesize preBNCFormatTableReference=_preBNCFormatTableReference;
@property(retain, nonatomic) TSPLazyReference *importWarningSetTableReference; // @synthesize importWarningSetTableReference=_importWarningSetTableReference;
@property(retain, nonatomic) TSPLazyReference *commentStorageTableReference; // @synthesize commentStorageTableReference=_commentStorageTableReference;
@property(retain, nonatomic) TSPLazyReference *formatTableReference; // @synthesize formatTableReference=_formatTableReference;
@property(retain, nonatomic) TSPLazyReference *richTextTableReference; // @synthesize richTextTableReference=_richTextTableReference;
@property(retain, nonatomic) TSPLazyReference *formulaErrorTableReference; // @synthesize formulaErrorTableReference=_formulaErrorTableReference;
@property(retain, nonatomic) TSPLazyReference *controlCellSpecTableReference; // @synthesize controlCellSpecTableReference=_controlCellSpecTableReference;
@property(retain, nonatomic) TSPLazyReference *formulaTableReference; // @synthesize formulaTableReference=_formulaTableReference;
@property(retain, nonatomic) TSPLazyReference *stringTableReference; // @synthesize stringTableReference=_stringTableReference;
@property(retain, nonatomic) TSPLazyReference *conditionalStyleSetTableReference; // @synthesize conditionalStyleSetTableReference=_conditionalStyleSetTableReference;
@property(retain, nonatomic) TSPLazyReference *styleTableReference; // @synthesize styleTableReference=_styleTableReference;
@property(retain, nonatomic) TSTTableHeaderStorageBucket *columnHeaderStorage; // @synthesize columnHeaderStorage=_columnHeaderStorage;
@property(retain, nonatomic) TSTTableHeaderStorage *rowHeaderStorage; // @synthesize rowHeaderStorage=_rowHeaderStorage;
@property(retain, nonatomic) TSTTileIDKeyDict *tileStorage; // @synthesize tileStorage=_tileStorage;
@property(nonatomic) struct TSTTableRBTreeNode_s *rowTileIndex; // @synthesize rowTileIndex=_rowTileIndex;
@property(nonatomic) _Bool upgrading; // @synthesize upgrading=_upgrading;
@property(retain, nonatomic) TSKCustomFormatList *pasteboardCustomFormatList; // @synthesize pasteboardCustomFormatList=_pasteboardCustomFormatList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)auditRowInfoCellCountsReturningResult:(id *)arg1;
- (_Bool)auditDatalistDuplicationReturningResult:(id *)arg1;
- (_Bool)confirmRefCountsReturningResult:(id *)arg1;
- (multimap_672c207c)_makeCellMapFromTiles;
- (id)copyWithOwner:(id)arg1;
- (void)assertIsNotIterating;
- (void)endIteration;
- (void)beginIteration;
- (void)saveToArchive:(struct DataStore *)arg1 archiver:(id)arg2 isInTheDocument:(_Bool)arg3;
- (id)p_cellMapForUpgradingToBraveNewCell;
- (void)upgradeDataStoreCellStorageIfNeededWithTableUID:(const UUIDData_5fbc143e *)arg1 conditionalStyleOwner:(id)arg2;
- (_Bool)needToUpgradeCellStorage;
- (void)setStorageParentToInfo:(id)arg1;
- (id)initWithArchive:(const struct DataStore *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)replaceConditionalStyleSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (void)reassignPasteboardCustomFormatKeys;
- (id)setupEmptyPasteboardCustomFormatList;
- (void)makePasteboardCustomFormatList;
- (void)clearPasteboardCustomFormatMap;
- (void)copyPasteboardCustomFormatsFromDataStore:(id)arg1;
- (id)p_pasteboardCustomFormatMap;
- (id)p_pasteboardCustomFormatList;
@property(readonly, nonatomic) _Bool hasPasteboardCustomFormats; // @dynamic hasPasteboardCustomFormats;
- (id)addPasteboardCustomFormat:(id)arg1 toDocument:(id)arg2 updatingPasteboardFormat:(_Bool)arg3;
- (id)importWarningSetDataList;
- (id)commentStorageDataList;
- (void)resetAlmostEverything;
- (id)p_makeALazyDatalistOfType:(int)arg1 isNewForBNC:(_Bool)arg2;
- (id)p_makeALazyDatalistOfType:(int)arg1;
- (_Bool)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 result:(id *)arg2;
- (id)preBNCFormatDataList;
- (id)formatDataList;
- (id)richTextDataList;
- (id)formulaErrorDataList;
- (id)controlCellSpecDataList;
- (id)formulaDataList;
- (id)styleDataList;
- (id)stringDataList;
- (id)conditionalStyleSetDataList;
- (id)p_datalistForLazyReference:(id)arg1;
- (vector_e87daf7b)mergedRects;
- (id)formulaSpecAtCellID:(struct TSUCellCoord)arg1;
- (struct TSCEFormula *)formulaAtCellID:(struct TSUCellCoord)arg1;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (void)removeColumns:(struct _NSRange)arg1;
- (void)removeRows:(struct _NSRange)arg1;
- (void)insertColumns:(struct _NSRange)arg1;
- (void)insertRows:(struct _NSRange)arg1;
- (void)p_clearDataListEntriesForStorageRef:(struct TSTCellStorage *)arg1 cellID:(struct TSUCellCoord)arg2;
- (void)p_clearDataListEntriesInRange:(struct TSUCellRect)arg1;
- (void)resolveDataListKeysForCell:(id)arg1 suppressTransmutation:(_Bool)arg2 sourceStorageVersion:(unsigned char)arg3;
- (void)resolveDataListKeysForPreBNCCell:(id)arg1 suppressTransmutation:(_Bool)arg2 sourceStorageVersion:(unsigned char)arg3;
- (id)p_populatedMultipleChoiceListFormat:(id)arg1;
- (id)populatedCustomFormat:(id)arg1 value:(double)arg2;
- (void)upgradeCellFormatsU2_0;
- (CDStruct_c8ca99d5)p_preBNCKeysForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)setCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2 calculationEngine:(id)arg3 conditionalStyleOwner:(id)arg4 ignoreFormulas:(_Bool)arg5 skipDirtyingNonFormulaCells:(_Bool)arg6 doRichTextDOLC:(_Bool)arg7;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3 calculationEngine:(id)arg4 conditionalStyleOwner:(id)arg5 ignoreFormula:(_Bool)arg6 clearImportWarnings:(_Bool)arg7 doRichTextDOLC:(_Bool)arg8;
- (id)allRichTextStorages;
- (_Bool)containsControlCellSpecs;
- (_Bool)containsImportWarnings;
- (_Bool)containsFormulas;
- (_Bool)hasFormulaAtCellID:(struct TSUCellCoord)arg1;
- (int)valueTypeAtCellID:(struct TSUCellCoord)arg1;
- (id)richTextStorageForCalcEngineAtCellID:(struct TSUCellCoord)arg1 refIfAvailable:(struct TSTCellStorage *)arg2;
- (id)stringForCalcEngineAtCellID:(struct TSUCellCoord)arg1 refIfAvailable:(struct TSTCellStorage *)arg2;
- (id)formatForCalcEngineAtCellID:(struct TSUCellCoord)arg1 formatIsExplicitOut:(_Bool *)arg2 refIfAvailable:(struct TSTCellStorage *)arg3;
- (id)textStyleAtCellID:(struct TSUCellCoord)arg1;
- (id)conditionalStyleSetAtCellID:(struct TSUCellCoord)arg1;
- (id)cellStyleAtCellID:(struct TSUCellCoord)arg1;
- (void)enumerateCellStoragesRowByRowToMaxID:(struct TSUCellCoord)arg1 getPreBNC:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCellStoragesInRange:(struct TSUCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)stringAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)cellExistsAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)getCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (struct TSTCellStorage *)cellStorageRefAtCellID:(struct TSUCellCoord)arg1;
- (void)p_enumerateTilesConcurrentlyUsingBlock:(CDUnknownBlockType)arg1 andWaitForAsyncBlocks:(_Bool)arg2;
- (void)enumerateTilesAtNode:(struct TSTTableRBTreeNode_s *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)i_tileAtOrAfterRow:(unsigned int)arg1 startingTileRowIndex:(unsigned int *)arg2;
- (id)i_tileForRow:(unsigned int)arg1 startingTileRowIndex:(unsigned int *)arg2;
- (void)upgradeConditionalStylesToLinkedRefWithTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)commentStorageAtCellID:(struct TSUCellCoord)arg1;
@property(readonly, nonatomic) unsigned long long numberOfComments;
@property(readonly, nonatomic) unsigned int numberOfConditionalStyles;
@property(readonly, nonatomic) unsigned int numberOfPopulatedCells;
- (void)p_updateNumberOfPopulatedCells;
- (void)removeColumnHeaderAtIndex:(unsigned short)arg1;
- (void)removeRowHeaderAtIndex:(unsigned int)arg1;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(unsigned short)arg2;
- (void)setHeight:(double)arg1 ofRowAtIndex:(unsigned int)arg2;
- (double)widthOfColumnAtIndex:(unsigned short)arg1;
- (double)heightOfRowAtIndex:(unsigned int)arg1;
- (void)enumerateColumnHeaderInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowHeaderInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)headerInfoForColumn:(unsigned short)arg1 willModify:(_Bool)arg2 createIfNotThere:(_Bool)arg3;
- (id)headerInfoForRow:(unsigned int)arg1 willModify:(_Bool)arg2 createIfNotThere:(_Bool)arg3;

@end
