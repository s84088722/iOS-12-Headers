//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPConfiguration : NSObject
{
    _PASLock *_lock;
}

+ (id)_loadConfigPlist;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)portraitAnalyticsSamplingRate;
- (double)getTopicsMultiplierForSource:(id)arg1 andAlgorithm:(id)arg2;
- (double)nonReaderTextWeight;
- (double)halfValuePosition;
- (id)portraitVariantName;
- (unsigned long long)maxNumberOfTopicRecords;
- (unsigned long long)minNumberOfTopicRecords;
- (double)scalingFactorForMappingId:(id)arg1;
- (double)remoteTopicsMultiplier;
- (id)resourceForMappingId:(id)arg1;
- (double)topicsSigmoidPeakValue;
- (double)topicsScalingFactor;
- (double)topicsSigmoidWidth;
- (id)init;
- (void)_loadConfigParams;

@end

