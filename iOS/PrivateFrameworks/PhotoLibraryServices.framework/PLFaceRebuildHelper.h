//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject
{
    NSManagedObjectContext *_context;
}

- (void).cxx_destruct;
- (id)findExistingDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (id)insertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (id)findOrInsertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (void)rebuildHiddenFace:(id)arg1 onAsset:(id)arg2;
- (void)rebuildRejectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3;
- (void)_updateAnalysisStateForAsset:(id)arg1;
- (void)rebuildDetectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3;
- (id)initWithContext:(id)arg1;

@end

