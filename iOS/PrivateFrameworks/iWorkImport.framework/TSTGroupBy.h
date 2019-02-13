//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>
#import <iWorkImport/TSTGroupByChangeProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString, TSKCustomFormatWrapper, TSTCategoryOwner, TSTGroupByChangeDistributor, TSTGroupNode, TSTInfo, TSULocale;

__attribute__((visibility("hidden")))
@interface TSTGroupBy : TSKSosBase <TSCEFormulaOwning, TSTGroupByChangeProtocol>
{
    UUIDData_5fbc143e _groupByUid;
    _Bool _isEnabled;
    NSArray *_groupingColumns;
    NSArray *_columnAggregates;
    TSTGroupNode *_groupRoot;
    NSMutableArray *_aggregators;
    TSTCategoryOwner *_categoryOwner;
    struct TSUCellCoord _indirectAggTypeChangeFormulaCoord;
    struct TSUCellCoord _groupingColumnsFormulaCoord;
    struct TSUCellCoord _groupingColumnHeadersFormulaCoord;
    struct TSUCellCoord _allAggsInGroupRootFormulaCoord;
    TSTGroupByChangeDistributor *_groupByChangeDistributor;
    struct TSUCellCoord _nextAggFormulaCoord;
    struct os_unfair_lock_s _aggValuesLock;
    struct unordered_map<TSUCellCoord, TSTAggNode *, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTAggNode *>>> _aggNodesByFormulaCoord;
    unordered_map_8a2ad1cf _groupNodesByGroupUid;
    unsigned long long _rebuildFormulasDeferredLevel;
    _Bool _needsRebuildOfAggFormulas;
    unsigned long long _deferGroupByChangeNotificationsLevel;
    NSMutableArray *_deferredGroupByChangeNotifications;
    NSMutableArray *_calcEngineGroupByChangeNotifications;
    _Bool _groupingColumnHeadersChanged;
    TSKCustomFormatWrapper *_customFormatForBlankGroup;
    TSKCustomFormatWrapper *_customFormatForErrorGroup;
}

+ (id)localizedFalseStringForBooleanGroupWithString:(id)arg1 documentLocale:(id)arg2;
+ (id)localizedTrueStringForBooleanGroupWithString:(id)arg1 documentLocale:(id)arg2;
+ (id)localizedNameForErrorGroupForDocumentLocale:(id)arg1;
+ (id)localizedNameForBlankGroupForDocumentLocale:(id)arg1;
+ (unsigned char)aggregateTypeForAggregateLabel:(id)arg1 locale:(id)arg2;
+ (_Bool)isRelativeAncestorGroupUid:(const UUIDData_5fbc143e *)arg1;
+ (int)relativeLevelOfAncestorGroupUid:(const UUIDData_5fbc143e *)arg1;
+ (UUIDData_5fbc143e)relativeAncestorGroupUid:(int)arg1;
+ (id)groupByForUID:(const UUIDData_5fbc143e *)arg1 withCalcEngine:(id)arg2;
+ (id)p_dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 inCalendar:(id)arg4;
+ (unsigned short)groupingComboForGroupingType:(int)arg1;
@property(readonly, retain, nonatomic) TSKCustomFormatWrapper *customFormatForErrorGroup; // @synthesize customFormatForErrorGroup=_customFormatForErrorGroup;
@property(readonly, retain, nonatomic) TSKCustomFormatWrapper *customFormatForBlankGroup; // @synthesize customFormatForBlankGroup=_customFormatForBlankGroup;
@property(nonatomic) _Bool needsRebuildOfAggFormulas; // @synthesize needsRebuildOfAggFormulas=_needsRebuildOfAggFormulas;
@property(readonly, nonatomic) struct TSUCellCoord allAggsInGroupRootFormulaCoord; // @synthesize allAggsInGroupRootFormulaCoord=_allAggsInGroupRootFormulaCoord;
@property(readonly, nonatomic) struct TSUCellCoord groupingColumnHeadersFormulaCoord; // @synthesize groupingColumnHeadersFormulaCoord=_groupingColumnHeadersFormulaCoord;
@property(readonly, nonatomic) struct TSUCellCoord groupingColumnsFormulaCoord; // @synthesize groupingColumnsFormulaCoord=_groupingColumnsFormulaCoord;
@property(readonly, nonatomic) struct TSUCellCoord indirectAggTypeChangeFormulaCoord; // @synthesize indirectAggTypeChangeFormulaCoord=_indirectAggTypeChangeFormulaCoord;
@property(readonly, nonatomic) NSArray *columnAggregates; // @synthesize columnAggregates=_columnAggregates;
@property(readonly, retain, nonatomic) NSMutableArray *aggregators; // @synthesize aggregators=_aggregators;
@property(readonly, retain, nonatomic) TSTGroupByChangeDistributor *groupByChangeDistributor; // @synthesize groupByChangeDistributor=_groupByChangeDistributor;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) UUIDData_5fbc143e groupByUid; // @synthesize groupByUid=_groupByUid;
@property(readonly, retain) NSArray *groupingColumns; // @synthesize groupingColumns=_groupingColumns;
@property(nonatomic) __weak TSTCategoryOwner *categoryOwner; // @synthesize categoryOwner=_categoryOwner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isErrorGroupUid:(const UUIDData_5fbc143e *)arg1;
- (_Bool)isBlankGroupUid:(const UUIDData_5fbc143e *)arg1;
- (void)p_setupCustomFormatsWithLocale:(id)arg1;
- (_Bool)analyze;
- (id)prettyStringForCategoryRef:(const struct TSCECategoryRef *)arg1 forHostCellRef:(const struct TSCECellRef *)arg2 namingContext:(id)arg3;
- (id)stringForCategoryRef:(const struct TSCECategoryRef *)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2;
- (id)viewCellTractRefForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (id)viewCellTractRefForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (vector_2431c21e)captureCategoryRefsForViewRange:(struct TSUCellRect)arg1 atLevel:(unsigned char)arg2 asSpanning:(_Bool)arg3;
- (vector_2431c21e)captureCategoryRefsForViewRegion:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(_Bool)arg3;
- (vector_2431c21e)captureAnyCategoryRefsForViewRegion:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(_Bool)arg3;
- (vector_2431c21e)captureCategoryLabelRefsForViewRegion:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(_Bool)arg3 forRows:(_Bool)arg4;
- (vector_2431c21e)p_promoteSpanningReferences:(vector_2431c21e)arg1 withCaptured:(id)arg2 atLevel:(unsigned char)arg3;
- (vector_2431c21e)promoteSpanningReferences:(vector_2431c21e)arg1;
- (vector_2431c21e)captureCategoryRefsFromIterator:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(_Bool)arg3;
- (vector_2431c21e)expandSpanningCategoryRef:(struct TSCECategoryRef)arg1;
- (id)uidRectRefForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_a1208d01)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_a1208d01)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (vector_4dc5f307)bodyRowUidsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (id)groupNodeForGroupValueHierarchyFromSplitter:(id)arg1 startAtComponent:(unsigned long long)arg2 startAtWord:(unsigned long long)arg3 preserveFlags:(struct TSUPreserveFlags *)arg4;
- (id)groupValueHierarchyStringForCategoryRef:(const struct TSCECategoryRef *)arg1 forHostCellRef:(const struct TSCECellRef *)arg2 namingContext:(id)arg3;
- (id)labelForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (unsigned char)aggregateTypeForAggregateLabel:(id)arg1;
- (id)aggregateLabelForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (id)p_columnNameForColumnUid:(const UUIDData_5fbc143e *)arg1;
- (id)columnNameForCategoryLevel:(unsigned char)arg1;
- (id)columnNameForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (_Bool)isSpanningCategoryRef:(const struct TSCECategoryRef *)arg1;
- (_Bool)isValidCategoryRef:(const struct TSCECategoryRef *)arg1;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)linkedResolver;
- (UUIDData_5fbc143e)ownerUID;
- (int)ownerKind;
- (id)aggregatorForColumn:(const UUIDData_5fbc143e *)arg1;
- (id)aggregatorForColumn:(const UUIDData_5fbc143e *)arg1 createIfMissing:(_Bool)arg2;
- (void)dropAllAggregators;
- (_Bool)createAggregatorsIfMissingAndAssert:(_Bool)arg1;
- (void)dropAggregator:(id)arg1;
- (id)createAggregatorOnColumn:(const UUIDData_5fbc143e *)arg1;
- (void)addAggregator:(id)arg1;
- (id)aggNodeForAggFormulaCoord:(const struct TSUCellCoord *)arg1;
- (void)clearAggNode:(id)arg1 forFormulaCoord:(const struct TSUCellCoord *)arg2;
- (void)setAggNode:(id)arg1 forFormulaCoord:(const struct TSUCellCoord *)arg2;
- (id)valueForFormulaCoord:(const struct TSUCellCoord *)arg1;
- (void)clearValueForFormulaCoord:(const struct TSUCellCoord *)arg1;
- (void)setValue:(id)arg1 forFormulaCoord:(const struct TSUCellCoord *)arg2;
- (void)updateAggFormulaCoord:(struct TSUCellCoord)arg1;
- (void)usedAggFormulaCoord:(const struct TSUCellCoord *)arg1;
- (struct TSUCellCoord)getNextAggFormulaCoord;
- (void)insertRowUids:(id)arg1;
- (void)resetGroupings;
- (void)rebuildAllAggFormulas;
- (void)exitCalcEngineMode;
- (void)enterCalcEngineMode;
- (_Bool)isDeferringGroupByChangeNotifications;
- (void)resumeGroupByChangeNotifications;
- (void)sendDeferredNotifictions:(id)arg1;
- (void)deferGroupByChangeNotifications;
- (_Bool)isRebuildFormulasDeferred;
- (void)endDeferringRebuildFormulas;
- (void)beginDeferringRebuildFormulas;
- (id)calcEngine;
@property(readonly, nonatomic) TSTInfo *tableInfo;
- (struct TSCECategoryRef)groupValueHierarchyRefOnValue:(id)arg1 atLevel:(unsigned char)arg2;
- (struct TSCECategoryRef)groupValueRefOnValue:(id)arg1 atLevel:(unsigned char)arg2;
- (struct TSCECategoryRef)aggregateRefOnValue:(id)arg1 forColumnUid:(const UUIDData_5fbc143e *)arg2 forType:(unsigned char)arg3 atLevel:(unsigned char)arg4;
- (id)sortedValuesAtLevel:(unsigned char)arg1;
- (id)distinctValuesAtLevel:(unsigned char)arg1;
- (id)findGroupNodeForValue:(id)arg1 atLevel:(unsigned char)arg2 createIfMissing:(_Bool)arg3;
- (void)removeRowUids:(id)arg1;
- (void)removeRowUid:(const UUIDData_5fbc143e *)arg1;
- (void)removeRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValue:(id)arg2;
- (_Bool)containsRowUid:(const UUIDData_5fbc143e *)arg1;
- (void)insertRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValue:(id)arg2;
- (void)willMakeGroupingChangesInRowUIDs:(id)arg1;
- (id)groupNodeForRowUid:(const UUIDData_5fbc143e *)arg1 atLevel:(unsigned char)arg2;
- (id)indexesOfGroupUidsInUids:(const vector_4dc5f307 *)arg1;
- (id)labelRowUidsForGroupUids:(id)arg1;
- (id)childGroupUidsForGroupUids:(id)arg1;
- (void)enumerateRowsUidsAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)rowUidsForGroupUids:(id)arg1;
- (id)rowsForGroupValue:(id)arg1 atLevel:(unsigned char)arg2;
- (id)rowUidsForGroupValue:(id)arg1 atLevel:(unsigned char)arg2;
- (id)groupsAtLevel:(unsigned char)arg1;
- (void)markAllGroupNodesDirty;
- (unsigned char)groupLevelForGroupUid:(const UUIDData_5fbc143e *)arg1 isBlank:(_Bool *)arg2 isError:(_Bool *)arg3;
- (unsigned char)groupLevelForGroupUid:(const UUIDData_5fbc143e *)arg1;
- (id)groupNodeForGroupUid:(const UUIDData_5fbc143e *)arg1;
- (void)enumerateGroupsAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAllGroupsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAggregatesAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAggregates:(CDUnknownBlockType)arg1;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(const UUIDData_5fbc143e *)arg2 atGroupLevel:(unsigned char)arg3;
- (unsigned char)anyAggregateTypeForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (unsigned char)aggregateTypeForColumnUID:(const UUIDData_5fbc143e *)arg1 atGroupLevel:(unsigned char)arg2;
- (void)markAllDependentsAsDirty;
- (id)allGroupNodeUids;
- (id)groupingColumnAtCategoryLevel:(unsigned char)arg1;
- (unsigned long long)indexOfGroupingColumn:(id)arg1;
- (vector_ae66d7ff)groupingColumnLevelsForColumn:(const UUIDData_5fbc143e *)arg1;
- (_Bool)isGroupingColumn:(const UUIDData_5fbc143e *)arg1;
- (unsigned long long)numberOfGroupsAtLevel:(unsigned char)arg1;
- (void)runChange:(id)arg1 withAggregates:(id)arg2;
- (void)_moveAggregates:(id)arg1 toLevel:(unsigned char)arg2;
- (void)_removeAggregates:(id)arg1;
- (void)_addAggregates:(id)arg1 atLevel:(unsigned char)arg2;
- (void)_addAggregates:(id)arg1;
- (id)aggregatesOnLevel:(unsigned char)arg1;
- (void)mapGroupUidsForChange:(id)arg1;
- (id)changeForSettingGroupingColumnList:(id)arg1;
- (id)changeForMovingBaseRows:(const vector_4dc5f307 *)arg1 toDestGroup:(id)arg2;
- (id)changeForUpdatingGroupValueOnNode:(const UUIDData_5fbc143e *)arg1 toValue:(id)arg2;
- (void)setGroupingColumnList:(id)arg1;
- (id)columnAggregatesOnColumnUids:(const vector_4dc5f307 *)arg1;
- (id)columnAggregateListCopy;
- (id)groupingColumnListCopy;
- (void)checkForFormulaCoordUpgrade;
- (void)updateWithDocumentRoot:(id)arg1;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive *)arg1 forCategoryOwner:(id)arg2;
- (unordered_map_8a2ad1cf *)groupNodesByGroupUid;
- (void)didChangeGroupByStructure;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e *)arg1 fromGroup:(id)arg2;
- (void)didAddRowUID:(const UUIDData_5fbc143e *)arg1 toGroup:(id)arg2;
- (void)willRemoveGroupNode:(id)arg1;
- (void)didRemoveGroup:(id)arg1;
- (void)willRemoveGroup:(id)arg1;
- (void)didAddGroupNode:(id)arg1;
- (void)didCreateGroup:(id)arg1;
- (void)resetAllAggsFormula;
- (void)resetGroupingColumnsFormula;
@property(readonly, nonatomic) __weak TSTInfo *info;
@property(readonly, nonatomic) TSTGroupNode *topLevelGroupNode;
@property(readonly, nonatomic) UUIDData_5fbc143e topLevelGroupUid;
@property(readonly) unsigned char numberOfLevels;
@property(readonly, nonatomic) _Bool isCategorized;
- (void)resetGroupBy;
@property(readonly, nonatomic) TSULocale *locale;
@property(readonly, nonatomic) UUIDData_5fbc143e baseTableUID;
- (struct TSCECategoryRef)convertCategoryRefToRelativeAncestorUid:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 inHostTable:(const UUIDData_5fbc143e *)arg3;
- (struct TSCECategoryRef)resolveCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 inHostTable:(const UUIDData_5fbc143e *)arg3;
- (UUIDData_5fbc143e)convertToRelativeAncestorUid:(const UUIDData_5fbc143e *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (UUIDData_5fbc143e)resolveRelativeAncestorUid:(const UUIDData_5fbc143e *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (void)willClose;
- (void)didInitFromSOS;
- (id)initWithGroupings:(id)arg1 categoryOwner:(id)arg2;
- (id)labelRowUIDSetForCategoryLevel:(unsigned char)arg1 labelRowVisibility:(unsigned long long)arg2;
- (id)labelRowUIDSet;
- (void)p_setCell:(id)arg1 forRoundGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forYearQuarterGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forYearWeekGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forDayGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forDayOfWeekGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forMonthGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forYearGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (id)defaultDateForGrouping;
- (void)p_setCell:(id)arg1 forUniqueGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (_Bool)p_setCell:(id)arg1 groupingCellPlan:(const struct TSTPlanForGroupingCell *)arg2 groupValue:(id)arg3 toGroup:(id)arg4 templateCell:(id)arg5;
- (void)p_setCell:(id)arg1 groupingTypeCombo:(unsigned short)arg2 groupingCellValue:(id)arg3 toBeInGroup:(id)arg4;
- (id)p_cellDiffForFinishedCell:(id)arg1;
- (id)cellDiffForCell:(id)arg1 applyingGroupCellValue:(id)arg2 groupingType:(int)arg3 toBeInGroup:(id)arg4;
- (id)changeCellDiffMapToMoveRows:(const vector_4dc5f307 *)arg1 toGroup:(id)arg2 templateRowUID:(const UUIDData_5fbc143e *)arg3;
- (_Bool)changeCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2 toBeInGroup:(id)arg3;
- (unordered_map_a2587d2e)changesPerColumnMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

