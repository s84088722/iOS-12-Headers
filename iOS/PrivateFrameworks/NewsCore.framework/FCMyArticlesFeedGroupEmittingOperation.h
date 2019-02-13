//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSSet;
@protocol FCHeadlineClusterOrdering, FCHeadlineClustering;

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    id <FCHeadlineClustering> _headlineClusterer;
    id <FCHeadlineClusterOrdering> _headlineClusterOrderer;
    NSSet *_emittableGroupTypes;
}

@property(retain, nonatomic) NSSet *emittableGroupTypes; // @synthesize emittableGroupTypes=_emittableGroupTypes;
@property(retain, nonatomic) id <FCHeadlineClusterOrdering> headlineClusterOrderer; // @synthesize headlineClusterOrderer=_headlineClusterOrderer;
@property(retain, nonatomic) id <FCHeadlineClustering> headlineClusterer; // @synthesize headlineClusterer=_headlineClusterer;
- (void).cxx_destruct;
- (id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4;
- (id)_joinedFeedTransformation;
- (id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 feedItemScores:(id)arg2 showStoriesOnlyFromFavorites:(_Bool)arg3;
- (void)performOperation;
- (id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2;

@end

