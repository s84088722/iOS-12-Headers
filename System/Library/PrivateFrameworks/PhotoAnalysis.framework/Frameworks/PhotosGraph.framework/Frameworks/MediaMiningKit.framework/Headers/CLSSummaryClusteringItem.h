/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject {

	PLDataCluster* _cluster;
	unsigned long long _numberOfItemsToElect;

}

@property (readonly) PLDataCluster * cluster;                              //@synthesize cluster=_cluster - In the implementation block
@property (readonly) unsigned long long numberOfItemsToElect;              //@synthesize numberOfItemsToElect=_numberOfItemsToElect - In the implementation block
-(PLDataCluster *)cluster;
-(id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsToElect;
@end

