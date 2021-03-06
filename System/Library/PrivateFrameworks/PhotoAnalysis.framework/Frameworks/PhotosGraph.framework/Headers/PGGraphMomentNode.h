//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGEventEnrichment-Protocol.h>
#import <PhotosGraph/PGGraphPhotoEvent-Protocol.h>
#import <PhotosGraph/PLMomentProtocol-Protocol.h>

@class CLLocation, CLSHolidayCalendarEventRuleTraits, NSDate, NSSet, NSString, PGGraph;

@interface PGGraphMomentNode : PGGraphNode <PLMomentProtocol, PGGraphPhotoEvent, PGEventEnrichment>
{
}

+ (id)collectionNodesForMomentNodes:(id)arg1;
+ (id)sceneEdgesForMomentNodes:(id)arg1;
+ (id)addressEdgesForMomentNodes:(id)arg1;
+ (id)addressNodesForMomentNodes:(id)arg1;
+ (id)firstAndLastMomentNodesInMomentNodes:(id)arg1;
+ (id)contentScoreSortDescriptors;
+ (id)scoreSortDescriptors;
- (_Bool)_isMePresent;
- (unsigned long long)_eventRuleLocationTrait;
- (unsigned long long)_eventRulePeopleTrait;
@property(readonly, nonatomic) CLSHolidayCalendarEventRuleTraits *holidayCalendarEventRuleTraits;
- (id)associatedNodesForRemoval;
- (id)sortedMomentNodes;
- (id)assetCollection;
- (id)anniversaryPersonNode;
- (id)birthdayPersonNode;
@property(readonly, nonatomic) NSString *uuid;
- (id)naturalLanguageFeatures;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2;
- (id)laterMomentNode:(id)arg1;
- (id)earlierMomentNode:(id)arg1;
- (id)meaningNodes;
- (id)publicEventNodes;
- (id)businessNodes;
- (id)addressNodes;
- (id)searchConfidenceSceneNodes;
- (id)highConfidenceSceneNodes;
- (id)sceneNodes;
- (id)roiNodes;
- (id)poiNodes;
- (id)celebratedHolidayNodes;
- (id)holidayNodes;
- (id)seasonNodes;
- (id)dateNodes;
- (id)socialGroupNodes;
- (id)personNodes;
@property(readonly, nonatomic) NSSet *frequentLocationNodes;
- (void)enumerateFrequentLocationNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentNodes;
- (void)enumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePublicEventNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateSceneNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateROINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumeratePOINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCollectionNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *collectionNodes;
- (void)momentEnumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)remoteAddressEdges;
- (void)enumerateConsolidatedAddressesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateRemoteAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)addressEdges;
- (void)momentEnumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateDateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)endsBeforeLocalDate:(id)arg1;
- (_Bool)startsAfterLocalDate:(id)arg1;
@property(readonly) NSDate *universalEndDate;
@property(readonly) NSDate *universalStartDate;
@property(readonly) NSDate *localEndDate;
@property(readonly) NSDate *localStartDate;
@property(readonly, nonatomic) unsigned long long locationMobilityType;
@property(readonly) _Bool isInterestingForMemories;
@property(readonly) _Bool isHighlyInteresting;
@property(readonly) _Bool happensPartiallyAtMyHomeOrWork;
@property(readonly) _Bool happensPartiallyAtMyWork;
@property(readonly) _Bool happensPartiallyAtMyHome;
@property(readonly) unsigned long long numberOfAssetsWithPeople;
- (id)meaningLabels;
@property(readonly) NSString *localIdentifier;
@property(readonly, nonatomic) unsigned long long pl_numberOfAssets;
@property(readonly, nonatomic) CLLocation *pl_location;
@property(readonly, nonatomic) NSDate *pl_endDate;
@property(readonly, nonatomic) NSDate *pl_startDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PGGraph *graph;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

