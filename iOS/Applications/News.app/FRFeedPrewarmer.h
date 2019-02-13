//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLFeedSettings, NSMutableDictionary, TSImageCache;
@protocol FRFeedCollectionViewLayoutBlueprintProviderType, FRFeldsparContext;

@interface FRFeedPrewarmer : NSObject
{
    NFLFeedSettings *_feedSettings;
    id <FRFeldsparContext> _feldsparContext;
    id <FRFeedCollectionViewLayoutBlueprintProviderType> _blueprintProvider;
    NSMutableDictionary *_coverArtProviders;
    TSImageCache *_publisherLogoImageCache;
}

@property(retain, nonatomic) TSImageCache *publisherLogoImageCache; // @synthesize publisherLogoImageCache=_publisherLogoImageCache;
@property(retain, nonatomic) NSMutableDictionary *coverArtProviders; // @synthesize coverArtProviders=_coverArtProviders;
@property(nonatomic) __weak id <FRFeedCollectionViewLayoutBlueprintProviderType> blueprintProvider; // @synthesize blueprintProvider=_blueprintProvider;
@property(nonatomic) __weak id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
- (void).cxx_destruct;
- (void)prewarmPublisherLogoForTopStoriesWithBlueprint:(id)arg1;
- (id)coverArtProviderForLayoutTileInfo:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithBlueprintProvider:(id)arg1 feedSettings:(id)arg2 feldsparContext:(id)arg3 publisherLogoImageCache:(id)arg4;

@end

