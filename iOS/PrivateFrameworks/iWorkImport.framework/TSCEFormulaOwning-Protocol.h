//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSCECalculationEngine;
@protocol TSCEReferenceResolving;

@protocol TSCEFormulaOwning <NSObject>
- (UUIDData_5fbc143e)ownerUID;
- (void)invalidateForCalcEngine:(TSCECalculationEngine *)arg1;
- (void)writeResultsForCalcEngine:(TSCECalculationEngine *)arg1;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(TSCECalculationEngine *)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id <TSCEReferenceResolving>)linkedResolver;
- (int)ownerKind;
@end

