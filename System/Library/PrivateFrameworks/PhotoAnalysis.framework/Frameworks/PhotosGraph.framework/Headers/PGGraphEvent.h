/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PGGraphEvent <NSObject>
@property (readonly) BOOL happensPartiallyAtMyHome; 
@property (readonly) BOOL happensPartiallyAtMyWork; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDate * universalStartDate; 
@property (readonly) NSDate * universalEndDate; 
@required
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(id)momentNodes;
-(id)addressNodes;
-(id)meaningLabels;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(id)personNodes;
-(void)enumerateMeaningNodesUsingBlock:(/*^block*/id)arg1;
-(BOOL)endsBeforeLocalDate:(id)arg1;
-(id)seasonNodes;
-(BOOL)startsAfterLocalDate:(id)arg1;
-(id)dateNodes;
-(id)sceneNodes;
-(id)roiNodes;
-(id)poiNodes;
-(id)meaningNodes;
-(id)businessNodes;
-(id)holidayNodes;
-(id)publicEventNodes;
-(id)socialGroupNodes;
-(BOOL)happensPartiallyAtMyHome;
-(BOOL)happensPartiallyAtMyWork;
-(void)enumerateBusinessesUsingBlock:(/*^block*/id)arg1;
-(id)highConfidenceSceneNodes;
-(id)searchConfidenceSceneNodes;

@end

