//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation
{
}

- (id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2;
- (id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2;
- (void)_produceResponseWithRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_missingContentIdentifiersInRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;

@end

