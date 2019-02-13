//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXDataTableCellStyle, SXDataTableColumnStyle, SXDataTableRowStyle, SXDataTableStyle;

@protocol SXDataTableStyleFactory <NSObject>
- (SXDataTableCellStyle *)cellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (SXDataTableColumnStyle *)columnStyleForColumnIndex:(unsigned long long)arg1;
- (SXDataTableRowStyle *)rowStyleForRowIndex:(unsigned long long)arg1;
- (SXDataTableCellStyle *)headerCellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (SXDataTableColumnStyle *)headerColumnStyleForColumnIndex:(unsigned long long)arg1;
- (SXDataTableRowStyle *)headerRowStyleForRowIndex:(unsigned long long)arg1;
- (SXDataTableStyle *)dataTableStyle;
@end

