//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _CPSearchResultForFeedback;

@protocol _CPResultRankingFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) double personalizationScore;
@property(nonatomic) unsigned int localResultPosition;
@property(copy, nonatomic) NSArray *duplicateResults;
@property(copy, nonatomic) NSArray *hiddenResults;
@property(retain, nonatomic) _CPSearchResultForFeedback *result;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)duplicateResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateResultsCount;
- (void)addDuplicateResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearDuplicateResults;
- (_CPSearchResultForFeedback *)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (void)addHiddenResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearHiddenResults;
@end

