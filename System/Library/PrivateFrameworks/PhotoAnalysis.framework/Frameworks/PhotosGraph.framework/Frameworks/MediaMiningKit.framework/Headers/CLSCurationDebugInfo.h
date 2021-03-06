/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSCurationDebugCluster, NSMapTable, NSString;

@interface CLSCurationDebugInfo : NSObject {

	CLSCurationDebugCluster* _rootCluster;
	NSMapTable* _debugItemByItem;
	NSMapTable* _debugClusterByCluster;
	NSString* _agent;
	NSString* _stage;

}

@property (nonatomic,copy) NSString * agent;              //@synthesize agent=_agent - In the implementation block
@property (nonatomic,copy) NSString * stage;              //@synthesize stage=_stage - In the implementation block
-(void)beginTentativeSection;
-(void)endTentativeSectionWithSuccess:(BOOL)arg1 ;
-(void)chooseItems:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItem:(id)arg1 inItems:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItem:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3 ;
-(void)setState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3 ;
-(void)setState:(unsigned long long)arg1 ofCluster:(id)arg2 withReason:(id)arg3 ;
-(void)setUnclusteredItemsState:(unsigned long long)arg1 withReason:(id)arg2 ;
-(id)debugClusterForCluster:(id)arg1 ;
-(id)initWithDebugCluster:(id)arg1 ;
-(id)debugItemsForItems:(id)arg1 ;
-(id)debugItemForItem:(id)arg1 ;
-(void)chooseItems:(id)arg1 inItems:(id)arg2 withReason:(id)arg3 ;
-(void)dedupItems:(id)arg1 toItem:(id)arg2 withDedupingType:(unsigned long long)arg3 ;
-(void)setState:(unsigned long long)arg1 ofItems:(id)arg2 withReason:(id)arg3 ;
-(id)debugInfoForCluster:(id)arg1 ;
-(void)setClusters:(id)arg1 withReason:(id)arg2 ;
-(NSString *)agent;
-(void)setAgent:(NSString *)arg1 ;
-(void)resetWithReason:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)stage;
-(void)setStage:(NSString *)arg1 ;
@end

