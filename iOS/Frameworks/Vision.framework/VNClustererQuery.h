//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNClustererModelQuerying-Protocol.h>

@protocol VNClustererModelQuerying;

@interface VNClustererQuery : NSObject <VNClustererModelQuerying>
{
    id <VNClustererModelQuerying> _context;
}

+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id *)arg3;
+ (id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;
+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id *)arg3;
+ (id)representativenessForFaces:(id)arg1 error:(id *)arg2;
+ (id)clustererQueryWithOptions:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id *)arg4;
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id *)arg2;
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id *)arg2;
- (id)allClusteredFaceIdsAndReturnError:(id *)arg1;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 error:(id *)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 error:(id *)arg5;

@end

