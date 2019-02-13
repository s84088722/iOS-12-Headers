//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSArray, NSString, TSDFill, TSDStroke, TSKDocumentRoot, TSTCell, TSTCellDictionary, TSTCellStyle, TSTTableDataStore, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle, TSWPStorage;

@interface TSTTableModel : TSPObject
{
    TSTTableDataStore *mDataStore;
    struct __CFUUID *mTableID;
    struct __CFUUID *mFromTableID;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfHeaderRows;
    unsigned short mNumberOfHeaderColumns;
    unsigned short mNumberOfFooterRows;
    _Bool mHeaderRowsFrozen;
    _Bool mHeaderColumnsFrozen;
    unsigned short mNumberOfHiddenRows;
    unsigned short mNumberOfHiddenColumns;
    unsigned short mNumberOfUserHiddenRows;
    unsigned short mNumberOfUserHiddenColumns;
    unsigned short mNumberOfFilteredRows;
    double mDefaultRowHeight;
    double mDefaultColumnWidth;
    NSString *mTableName;
    _Bool mTableNameEnabled;
    double mTableNameHeight;
    _Bool mTableNameBorderEnabled;
    _Bool mRepeatingHeaderRowsEnabled;
    _Bool mRepeatingHeaderColumnsEnabled;
    unsigned long long mPresetIndex;
    _Bool mStyleApplyClearsAll;
    struct {
        TSTTableStyle *tableStyle;
        TSTCellStyle *bodyCellStyle;
        TSTCellStyle *headerRowCellStyle;
        TSTCellStyle *headerColumnCellStyle;
        TSTCellStyle *footerRowCellStyle;
        TSWPParagraphStyle *bodyTextStyle;
        TSWPParagraphStyle *headerRowTextStyle;
        TSWPParagraphStyle *headerColumnTextStyle;
        TSWPParagraphStyle *footerRowTextStyle;
        TSWPParagraphStyle *tableNameStyle;
        TSWPShapeStyle *tableNameShapeStyle;
    } mStyles;
    struct _TSTDefaultCellBlock mDefaultCells;
    TSTCellDictionary *mCellsPendingWrite;
    TSWPStorage *mDeprecatedProvider;
    _Bool mWasUnarchivedFromAProvidedTable;
}

+ (CDStruct_5f1f7aa9)cellRangeForTableArea:(unsigned int)arg1 givenTableSize:(CDStruct_d65e47c4)arg2 numberOfHeaderRows:(unsigned short)arg3 numberOfFooterRows:(unsigned short)arg4 numberOfHeaderColumns:(unsigned short)arg5;
+ (unsigned int)tableAreaForCellID:(CDStruct_0441cfb5)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalRows:(unsigned short)arg5;
+ (id)unnamedTableString;
@property(readonly, nonatomic) TSTCellDictionary *cellsPendingWrite; // @synthesize cellsPendingWrite=mCellsPendingWrite;
@property(nonatomic) _Bool wasUnarchivedFromAProvidedTable; // @synthesize wasUnarchivedFromAProvidedTable=mWasUnarchivedFromAProvidedTable;
@property(readonly, nonatomic) unsigned short numberOfUserHiddenColumns; // @synthesize numberOfUserHiddenColumns=mNumberOfUserHiddenColumns;
@property(readonly, nonatomic) unsigned short numberOfUserHiddenRows; // @synthesize numberOfUserHiddenRows=mNumberOfUserHiddenRows;
@property(readonly, nonatomic) unsigned short numberOfHiddenColumns; // @synthesize numberOfHiddenColumns=mNumberOfHiddenColumns;
@property(readonly, nonatomic) unsigned short numberOfHiddenRows; // @synthesize numberOfHiddenRows=mNumberOfHiddenRows;
- (id)allRichTextPayloadStorages;
- (void)upgradeFromPreUFF;
- (void)transformStrokes:(struct CGAffineTransform)arg1 transformedObjects:(id)arg2 inBounds:(struct CGRect)arg3;
- (void)p_scaleStrokesOnCell:(id)arg1 atCellID:(CDStruct_0441cfb5)arg2 transformedObjects:(id)arg3 scale:(double)arg4;
- (void)p_scaleStrokeFromProperty:(int)arg1 style:(id)arg2 pmap:(id)arg3 scale:(double)arg4;
- (CDStruct_5f1f7aa9)minPopulatedCellRange;
- (void)validate;
- (void)private_validateMergeCellsPedantically;
- (void)validateStyles;
- (void)moveCalcEngineReferencesFromSourceTable:(struct __CFUUID *)arg1 sourceRange:(CDStruct_5f1f7aa9)arg2 sourceOffset:(CDStruct_79c71658)arg3;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)mapTableStylesToStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)cellRegionWithConditionalStyleMatchingCell:(CDStruct_0441cfb5)arg1;
- (void)defaultStrokesForCellID:(CDStruct_0441cfb5)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalColumns:(unsigned short)arg5 totalRows:(unsigned short)arg6 tableArea:(unsigned int)arg7 outTopStroke:(id *)arg8 outLeftStroke:(id *)arg9 outBottomStroke:(id *)arg10 outRightStroke:(id *)arg11;
- (void)defaultStrokesForCellID:(CDStruct_0441cfb5)arg1 outTopStroke:(id *)arg2 outLeftStroke:(id *)arg3 outBottomStroke:(id *)arg4 outRightStroke:(id *)arg5;
@property(readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property(readonly, nonatomic) TSDStroke *bodyRowStroke;
@property(readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *parentBorderStroke;
@property(readonly, nonatomic) TSDStroke *borderStrokeEvenIfNotVisible;
@property(readonly, nonatomic) TSDFill *footerRowsFill;
@property(readonly, nonatomic) TSDFill *headerRowsFill;
@property(readonly, nonatomic) TSDFill *headerColumnsFill;
@property(readonly, nonatomic) TSDFill *bodyFill;
@property(readonly, nonatomic) TSDFill *backgroundFill;
- (id)mergedGridIndicesForDirection:(int)arg1;
- (_Bool)hasMergeRanges;
@property(readonly, nonatomic) unsigned short numberOfVisibleBodyColumns;
@property(readonly, nonatomic) unsigned short numberOfVisibleBodyRows;
- (int)hidingStateForColumn:(unsigned char)arg1;
- (int)hidingStateForRow:(unsigned short)arg1;
- (_Bool)isColumnHidden:(unsigned char)arg1 forAction:(int)arg2;
- (_Bool)isRowHidden:(unsigned short)arg1 forAction:(int)arg2;
- (CDStruct_5f1f7aa9)footerRowRange;
- (CDStruct_5f1f7aa9)headerColumnRange;
- (CDStruct_5f1f7aa9)headerRowRange;
- (CDStruct_5f1f7aa9)bodyRowRange;
- (CDStruct_5f1f7aa9)bodyColumnRange;
- (CDStruct_5f1f7aa9)bodyRange;
- (CDStruct_5f1f7aa9)range;
@property NSArray *rowHeights;
@property NSArray *columnWidths;
- (void)setWidth:(double)arg1 ofColumn:(unsigned char)arg2;
- (void)setHeight:(double)arg1 ofRow:(unsigned short)arg2;
- (id)defaultTextStyleForTableArea:(unsigned int)arg1;
- (id)defaultCellStyleForTableArea:(unsigned int)arg1;
- (void)p_fetchCellHoldingReadLock:(void *)arg1 returnCode:(void *)arg2;
- (int)defaultCell:(id)arg1 forTableArea:(unsigned int)arg2;
- (id)defaultCellForTableArea:(unsigned int)arg1;
- (CDStruct_5f1f7aa9)cellRangeForTableArea:(unsigned int)arg1;
- (unsigned int)tableAreaForCellID:(CDStruct_0441cfb5)arg1;
- (void)setStorageParentToInfo:(id)arg1;
- (id)bandedFillObject;
- (_Bool)useBandedFill;
@property(readonly, nonatomic) TSTCell *defaultHeaderColumnCell;
@property(readonly, nonatomic) TSTCell *defaultHeaderRowCell;
@property(readonly, nonatomic) TSTCell *defaultFooterRowCell;
@property(readonly, nonatomic) TSTCell *defaultBodyCell;
@property(readonly, nonatomic) struct __CFUUID *fromTableID;
- (void)setTableID:(struct __CFUUID *)arg1;
@property(readonly, nonatomic) struct __CFUUID *tableID;
- (id)dataStore;
@property(readonly, nonatomic) TSDStroke *tableNameBorderStroke;
@property(readonly, nonatomic) _Bool hasAlternatingRows;
@property(readonly, nonatomic) _Bool hasTableBorder;
- (void)setTableNameShapeStyle:(id)arg1;
@property(readonly, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
- (void)setTableNameStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *tableNameStyle;
- (void)setFooterRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
- (void)setHeaderColumnTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
- (void)setHeaderRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
- (void)setBodyTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
- (void)setFooterRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
- (void)setHeaderColumnCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
- (void)setHeaderRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
- (void)setBodyCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *bodyCellStyle;
- (void)setTableStyle:(id)arg1;
@property(readonly, nonatomic) TSTTableStyle *tableStyle;
@property(nonatomic) _Bool headerColumnsFrozen;
@property(nonatomic) _Bool headerRowsFrozen;
@property(nonatomic) unsigned long long presetIndex;
@property(nonatomic) unsigned short numberOfHeaderColumns;
@property(nonatomic) unsigned short numberOfFooterRows;
@property(nonatomic) unsigned short numberOfHeaderRows;
@property(nonatomic) unsigned short numberOfColumns;
@property(nonatomic) unsigned short numberOfRows;
@property(nonatomic) _Bool styleApplyClearsAll;
@property(nonatomic) _Bool repeatingHeaderColumnsEnabled;
@property(nonatomic) _Bool repeatingHeaderRowsEnabled;
@property(nonatomic) double tableNameHeight;
@property(nonatomic) _Bool tableNameBorderEnabled;
@property(nonatomic) _Bool tableNameEnabled;
@property(retain, nonatomic) NSString *tableName;
- (void)setDrawableIsBeingCopied:(_Bool)arg1;
- (void)dealloc;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (id)initWithContext:(id)arg1 fromSourceModel:(id)arg2 region:(id)arg3 tableInfo:(id)arg4;
- (id)initWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3 styles:(id)arg4 tableInfo:(id)arg5;
- (void)setupDefaultCells;
- (void)resetStyles:(id)arg1;
- (void)p_releaseExistingDefaultStyles;
- (id)init;

@end

