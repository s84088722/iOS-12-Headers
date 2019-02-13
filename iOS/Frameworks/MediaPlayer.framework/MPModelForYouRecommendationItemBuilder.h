//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelForYouRecommendationGroupBuilder, MPModelStoreBrowseContentItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDictionary;

@interface MPModelForYouRecommendationItemBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int itemType:1;
        unsigned int backedByStoreItemMetadata:1;
        unsigned int album:1;
        unsigned int playlist:1;
        unsigned int subgroup:1;
    } _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationGroupBuilder *_subgroupBuilder;
    MPPropertySet *_requestedPropertySet;
    NSDictionary *_storeItemMetadataResults;
    MPMutableSectionedCollection *_flatSectionedItems;
}

+ (id)allSupportedProperties;
@property(readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // @synthesize flatSectionedItems=_flatSectionedItems;
@property(readonly, nonatomic) NSDictionary *storeItemMetadataResults; // @synthesize storeItemMetadataResults=_storeItemMetadataResults;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (void).cxx_destruct;
- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3;
- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3;

@end

