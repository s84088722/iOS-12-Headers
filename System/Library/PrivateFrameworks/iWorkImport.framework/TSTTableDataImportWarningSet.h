//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTImportWarningSet;

__attribute__((visibility("hidden")))
@interface TSTTableDataImportWarningSet : TSTTableDataObject
{
    TSTImportWarningSet *_importWarningSet;
}

@property(readonly, nonatomic) TSTImportWarningSet *importWarningSet; // @synthesize importWarningSet=_importWarningSet;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithImportWarningSet:(id)arg1 refCount:(unsigned int)arg2;

@end

