//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutSnapshot.h>

@class NSArray, PXLayoutPageMap;

@interface PXSectionedLayoutSnapshot : PXLayoutSnapshot
{
    NSArray *_sections;
    PXLayoutPageMap *_pageMap;
}

+ (id)emptyLayoutSnapshot;
- (void).cxx_destruct;
- (struct CGRect)frameForSectionAtIndex:(unsigned long long)arg1;
- (void)enumerateFramesForSectionsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateGeometriesForItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _PXLayoutGeometry)geometryForItem:(id)arg1;
- (id)description;
- (id)initWithContentRect:(struct CGRect)arg1 forSections:(id)arg2;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)init;

@end

