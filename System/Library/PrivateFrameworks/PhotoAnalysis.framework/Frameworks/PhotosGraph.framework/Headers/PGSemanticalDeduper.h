//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGDeduper.h>

@class VNCreateSceneprintRequest, VNSequenceRequestHandler;

@interface PGSemanticalDeduper : PGDeduper
{
    VNSequenceRequestHandler *_sequenceRequestHandler;
    VNCreateSceneprintRequest *_sceneprintRequest;
}

- (void).cxx_destruct;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)sceneprintByItemIdentifierWithItems:(id)arg1;
- (float)_cosineSimilarityBetweenSceneprint:(id)arg1 andSceneprint:(id)arg2;
- (float)_euclidianDistanceBetweenSceneprint:(id)arg1 andSceneprint:(id)arg2;
- (id)sceneprintWithItem:(id)arg1;
- (id)imageDataWithItem:(id)arg1;
- (void)cleanup;
- (void)dealloc;

@end
