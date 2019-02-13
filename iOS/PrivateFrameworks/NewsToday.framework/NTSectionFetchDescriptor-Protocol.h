//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSObject-Protocol.h>

@class NSArray, NTCatchUpOperation, NTCatchUpOperationResults;
@protocol FCFeedPersonalizing, NTFeedTransforming;

@protocol NTSectionFetchDescriptor <NSObject, NSCopying>
- (id <NTFeedTransforming>)incrementalLimitTransformationWithFeedPersonalizer:(id <FCFeedPersonalizing>)arg1 limit:(unsigned long long)arg2 priorFeedItems:(NSArray *)arg3;
- (id <NTFeedTransforming>)incrementalSortTransformationWithFeedPersonalizer:(id <FCFeedPersonalizing>)arg1;
- (NTCatchUpOperationResults *)assembleResultsWithCatchUpOperation:(NTCatchUpOperation *)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(NTCatchUpOperation *)arg1;
@end

