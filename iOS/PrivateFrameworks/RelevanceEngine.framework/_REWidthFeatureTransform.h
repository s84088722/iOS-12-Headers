//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REWidthFeatureTransform : REFeatureTransformer
{
    unsigned long long _mask;
    unsigned long long _width;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (id)_transform:(id)arg1;
- (unsigned long long)_featureCount;
- (long long)_bitCount;
- (unsigned long long)_outputType;
- (id)initWithWidth:(unsigned long long)arg1;

@end

