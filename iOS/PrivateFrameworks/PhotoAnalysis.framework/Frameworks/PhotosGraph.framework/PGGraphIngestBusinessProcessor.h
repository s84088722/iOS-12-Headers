//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphIngestProcessor.h>

@class NSDictionary;

@interface PGGraphIngestBusinessProcessor : PGGraphIngestProcessor
{
    NSDictionary *_requiredCriteriaByPOIIdentifier;
}

+ (id)_spatialMapCategoriesByMeaningIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *requiredCriteriaByPOIIdentifier; // @synthesize requiredCriteriaByPOIIdentifier=_requiredCriteriaByPOIIdentifier;
- (id)_predominantVisitForMomentNode:(id)arg1 publicEventBusinessItemMuid:(unsigned long long)arg2;
- (id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)arg1;
- (_Bool)_momentNode:(id)arg1 hasValidConstraintsForLocationOfInterestVisit:(id)arg2;
- (void)_insertBusinessItemsFromMomentNodes:(id)arg1 withLocationOfInterestVisitsToResolveByMomentLocalIdentifier:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

@end

