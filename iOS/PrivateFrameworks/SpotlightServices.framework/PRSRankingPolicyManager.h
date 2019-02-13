//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRSRankingPolicyManager : NSObject
{
}

+ (double)termFrequencyComponentForWord:(id)arg1 inString:(id)arg2;
+ (double)termFrequencyComponentFor:(id)arg1 matchingString:(id)arg2 weighted:(_Bool)arg3;
+ (id)getSharedRankingPolicyManager;
- (id)cookSQFOnClientWithServerProbabilities:(id)arg1 qiCEPValues:(id)arg2 localResultOrder:(id)arg3 poorTextMatchCategories:(id)arg4 minimumBagCEP:(double)arg5 cook_sqf_topdown:(_Bool)arg6 cook_sqf_fallback_qi_cep:(_Bool)arg7;
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double *)arg3 qr_prop_query_norm_min_unordered_span:(double *)arg4 qr_query_min_pair_dist_in_title:(double *)arg5 prefix_match_norm_count:(double *)arg6 ordered_first_term_position:(double *)arg7 prefixMatch:(_Bool)arg8 queryBreakDown:(id)arg9 isVirtualField:(_Bool)arg10 locale:(id)arg11;
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double *)arg3 qr_prop_query_norm_min_unordered_span:(double *)arg4 qr_query_min_pair_dist_in_title:(double *)arg5 prefix_match_norm_count:(double *)arg6 prefixMatch:(_Bool)arg7;
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double *)arg3 qr_prop_query_norm_min_unordered_span:(double *)arg4 qr_query_min_pair_dist_in_title:(double *)arg5 prefix_match_norm_count:(double *)arg6;
- (_Bool)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long *)arg5;
- (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long *)arg6 minimumDistancePair:(long long *)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9;
- (id)cosineComponentsUsingWordMatches:(id)arg1 withField:(id)arg2 withCorpusCount:(double)arg3 prefixVersion:(_Bool)arg4;

@end

