/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXApp2VecMapping;

@interface ATXApp2VecClustering : NSObject {

	ATXApp2VecMapping* _clusterCentroids;
	ATXApp2VecMapping* _appEmbeddings;
	long long _vectorLength;
	BOOL _loaded;

}
+(void)resetSharedInstance;
+(id)sharedInstance;
-(id)getClusterCentroidsForBundleIds:(id)arg1 ;
-(id)_mergeClusterCentroids:(id)arg1 forBundleIds:(id)arg2 ;
-(id)getClosestClusterCentroidForBundleId:(id)arg1 ;
-(id)_getClosestClusterCentroidForVector:(const float*)arg1 ;
-(float)_getL2DistanceFrom:(const float*)arg1 to:(float*)arg2 ;
-(id)init;
@end
