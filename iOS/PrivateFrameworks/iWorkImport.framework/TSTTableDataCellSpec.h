//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTCellSpec;

__attribute__((visibility("hidden")))
@interface TSTTableDataCellSpec : TSTTableDataObject
{
    TSTCellSpec *_cellSpec;
}

@property(readonly, nonatomic) TSTCellSpec *cellSpec; // @synthesize cellSpec=_cellSpec;
- (void).cxx_destruct;
- (void)setCellSpec:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithCellSpec:(id)arg1 refCount:(unsigned int)arg2;

@end

