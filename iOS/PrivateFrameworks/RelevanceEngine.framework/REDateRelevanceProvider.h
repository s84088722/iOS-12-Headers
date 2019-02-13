//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDate, NSDateInterval;

@interface REDateRelevanceProvider : RERelevanceProvider
{
    NSDateInterval *_interval;
    NSDate *_initialRelevanceDate;
    NSDate *_irrelevantDate;
    double _recentDuration;
}

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) double recentDuration; // @synthesize recentDuration=_recentDuration;
@property(readonly, nonatomic) NSDate *irrelevantDate; // @synthesize irrelevantDate=_irrelevantDate;
@property(readonly, nonatomic) NSDate *initialRelevanceDate; // @synthesize initialRelevanceDate=_initialRelevanceDate;
@property(readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2;
- (id)initWithEventInterval:(id)arg1;
- (id)initWithEventDate:(id)arg1 duration:(double)arg2;
- (id)initWithEventDate:(id)arg1;

@end

