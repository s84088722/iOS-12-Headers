//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@class REFeatureValue;

@interface _REBucketFeatureTransformer : REFeatureTransformer
{
    unsigned long long _count;
    REFeatureValue *_min;
    REFeatureValue *_max;
    long long _bitCount;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (id)_transform:(id)arg1;
- (unsigned long long)_featureCount;
- (long long)_bitCount;
- (unsigned long long)_outputType;
- (id)initWithBucketCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3;

@end

