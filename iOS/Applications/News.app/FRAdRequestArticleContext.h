//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRAdRequestArticleRelatedContext.h"

@class NSArray, NSDictionary, NSString;
@protocol FCFeedAdMetadataProviding;

@interface FRAdRequestArticleContext : FRAdRequestArticleRelatedContext
{
    _Bool _autoPlacedAdMarkers;
    NSString *_ANFComponentIdentifier;
    NSDictionary *_ANFComponentMetadata;
    NSDictionary *_campaignData;
    id <FCFeedAdMetadataProviding> _referralGroupFeedDescriptor;
    Class _referralGroupSectionDescriptorClass;
    NSArray *_additionalReferralGroupCategories;
    NSArray *_additionalReferralGroupKeywords;
    double _aspectRatioOfVideoPlayer;
}

@property(nonatomic) double aspectRatioOfVideoPlayer; // @synthesize aspectRatioOfVideoPlayer=_aspectRatioOfVideoPlayer;
@property(copy, nonatomic) NSArray *additionalReferralGroupKeywords; // @synthesize additionalReferralGroupKeywords=_additionalReferralGroupKeywords;
@property(copy, nonatomic) NSArray *additionalReferralGroupCategories; // @synthesize additionalReferralGroupCategories=_additionalReferralGroupCategories;
@property(nonatomic) Class referralGroupSectionDescriptorClass; // @synthesize referralGroupSectionDescriptorClass=_referralGroupSectionDescriptorClass;
@property(retain, nonatomic) id <FCFeedAdMetadataProviding> referralGroupFeedDescriptor; // @synthesize referralGroupFeedDescriptor=_referralGroupFeedDescriptor;
@property(copy, nonatomic) NSDictionary *campaignData; // @synthesize campaignData=_campaignData;
@property(copy, nonatomic) NSDictionary *ANFComponentMetadata; // @synthesize ANFComponentMetadata=_ANFComponentMetadata;
@property(copy, nonatomic) NSString *ANFComponentIdentifier; // @synthesize ANFComponentIdentifier=_ANFComponentIdentifier;
@property(nonatomic) _Bool autoPlacedAdMarkers; // @synthesize autoPlacedAdMarkers=_autoPlacedAdMarkers;
- (void).cxx_destruct;

@end

