//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDTableCell;

__attribute__((visibility("hidden")))
@interface WMTableCellMapper : CMMapper
{
    WDTableCell *mWdTableCell;
    unsigned int mColSpan;
    double mHeight;
    double mWidth;
    double mLeftPadding;
    double mRightPadding;
}

- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (unsigned int)colSpan;
- (id)initWithWDTableCell:(id)arg1 atIndex:(unsigned int)arg2 parent:(id)arg3;
- (id)tableMapper;
- (void)mapCellStyleAt:(id)arg1;

@end

