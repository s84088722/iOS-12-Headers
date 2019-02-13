//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDRowBlock;

__attribute__((visibility("hidden")))
@interface EMRowMapper : CMMapper
{
    EDRowBlock *mRowBlock;
    struct EDRowInfo *mRowInfo;
    double *columnGrid;
    unsigned long long columnCount;
}

+ (void)mapEmptyRowAt:(id)arg1 colspan:(unsigned long long)arg2 height:(double)arg3;
- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned long long)arg3 lastColumn:(unsigned long long)arg4;
- (_Bool)isColumnHidden:(unsigned long long)arg1;
- (id)initWithEDRowBlock:(id)arg1 rowInfo:(struct EDRowInfo *)arg2 parent:(id)arg3;
- (void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned long long)arg2 height:(double)arg3;
- (_Bool)isMergedCell:(struct EDCellHeader *)arg1;
- (struct EDCellHeader *)cellWithColumnNumber:(unsigned long long)arg1;

@end

