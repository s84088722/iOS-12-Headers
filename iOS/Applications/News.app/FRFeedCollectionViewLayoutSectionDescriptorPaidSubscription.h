//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRFeedCollectionViewLayoutSectionDescriptorForYou.h"

@interface FRFeedCollectionViewLayoutSectionDescriptorPaidSubscription : FRFeedCollectionViewLayoutSectionDescriptorForYou
{
    _Bool _subscriptionExpired;
    struct CGSize _subcriptionLabelSize;
}

@property(nonatomic) _Bool subscriptionExpired; // @synthesize subscriptionExpired=_subscriptionExpired;
@property(nonatomic) struct CGSize subcriptionLabelSize; // @synthesize subcriptionLabelSize=_subcriptionLabelSize;
- (id)subtitle;
- (id)subtitleFont;
- (id)titleFont;
- (long long)layoutType;

@end

