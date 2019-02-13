//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray, REMLModel;

@interface REMLElementComparator : NSObject <NSCopying>
{
    REMLModel *_model;
    NSArray *_filteringRules;
    NSArray *_rankingRules;
}

+ (id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;
@property(copy, nonatomic) NSArray *rankingRules; // @synthesize rankingRules=_rankingRules;
@property(copy, nonatomic) NSArray *filteringRules; // @synthesize filteringRules=_filteringRules;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long comparisonLevels;
- (_Bool)shouldHideElement:(id)arg1;
- (id)model;
- (id)initWithModel:(id)arg1;

@end

