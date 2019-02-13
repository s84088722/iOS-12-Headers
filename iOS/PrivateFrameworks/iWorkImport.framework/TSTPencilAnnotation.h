//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKPencilAnnotation-Protocol.h>

@class NSString, TSDPencilAnnotationStorage, TSTInfo;

__attribute__((visibility("hidden")))
@interface TSTPencilAnnotation : TSPObject <TSKPencilAnnotation>
{
    TSDPencilAnnotationStorage *_pencilAnnotationStorage;
    TSTInfo *_table;
    unsigned long long _index;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak TSTInfo *table; // @synthesize table=_table;
@property(readonly, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
- (void).cxx_destruct;
- (void)saveToArchive:(struct PencilAnnotationArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSUCellRect)_cellRange;
@property(readonly, nonatomic) NSString *uuid;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2 pencilAnnotationStorage:(id)arg3;
- (id)initWithTableInfo:(id)arg1 pencilAnnotationStorage:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

