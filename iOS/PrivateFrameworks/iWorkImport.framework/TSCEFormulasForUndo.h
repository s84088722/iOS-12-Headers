//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulasForUndo : NSObject
{
    struct unordered_map<TSCEFormulaOwnerKind, TSCEFormulasForUndoForOwnerKind *, std::__1::hash<TSCEFormulaOwnerKind>, std::__1::equal_to<TSCEFormulaOwnerKind>, std::__1::allocator<std::__1::pair<const TSCEFormulaOwnerKind, TSCEFormulasForUndoForOwnerKind *>>> _formulasForOwnerKind;
    struct unordered_map<TSCECellRef, NSString *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, NSString *>>> _formulaStringsForCellRefs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)formulaStringAtCellRef:(const struct TSCECellRef *)arg1;
- (void)addFormulaString:(id)arg1 atCellRef:(const struct TSCECellRef *)arg2;
- (void)saveToArchive:(struct FormulasForUndoArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FormulasForUndoArchive *)arg1;
- (id)description;
- (void)foreachFormulaInOwnerKind:(int)arg1 performBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countForOwnerKind:(int)arg1;
- (id)subsetForOwnerKind:(int)arg1;
- (vector_79ca7eec)allOwnerKinds;
- (unordered_set_c6a929bd)ownerUIDsForOwnerKind:(int)arg1;
- (_Bool)isEmpty;
- (unsigned long long)count;
- (void)addFormula:(struct TSCEFormula *)arg1 atCellRef:(const struct TSCECellRef *)arg2 forOwnerKind:(int)arg3;

@end

