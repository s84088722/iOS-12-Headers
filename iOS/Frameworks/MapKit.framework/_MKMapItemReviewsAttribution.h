//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemReviewsAttribution, NSArray;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution
{
    GEOMapItemReviewsAttribution *_geoReviewsAttribution;
}

- (void).cxx_destruct;
- (id)urlsForSelectedItemWithItems:(id)arg1;
- (id)urlsForReview:(id)arg1;
@property(readonly, nonatomic) NSArray *addReviewURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end

