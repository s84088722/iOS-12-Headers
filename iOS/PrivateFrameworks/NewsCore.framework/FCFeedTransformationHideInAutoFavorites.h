//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationHideInAutoFavorites : NSObject <FCFeedTransforming>
{
    NSDictionary *_feedContextByFeedID;
    NSSet *_autoFavoriteTagIDs;
}

+ (id)transformationWithFeedContextByFeedID:(id)arg1 autoFavoriteTagIDs:(id)arg2;
@property(copy, nonatomic) NSSet *autoFavoriteTagIDs; // @synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs;
@property(copy, nonatomic) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

