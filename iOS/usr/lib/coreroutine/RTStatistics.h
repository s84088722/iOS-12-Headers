//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTStatistics : NSObject
{
}

+ (double)betaDistributionCdfAtX:(double)arg1 paramA:(double)arg2 paramB:(double)arg3;
+ (double)calculateModelConfidenceWithCorrectPredictions:(double)arg1 incorrectPredictions:(double)arg2 iterations:(unsigned long long)arg3 minimumConfidence:(double)arg4;
+ (double)calculateModelConfidenceWithCorrectPredictions:(double)arg1 incorrectPredictions:(double)arg2;

@end

