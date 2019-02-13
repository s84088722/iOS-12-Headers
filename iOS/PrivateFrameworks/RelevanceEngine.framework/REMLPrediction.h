//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@interface REMLPrediction : NSObject <NSCopying>
{
    float _actionProbability;
    float _mean;
    float _variance;
    float _probability;
    float _pessimistic;
}

+ (id)predictionWithProbability:(float)arg1 mean:(float)arg2 variance:(float)arg3 pessimistic:(float)arg4;
@property(readonly, nonatomic) float pessimistic; // @synthesize pessimistic=_pessimistic;
@property(readonly, nonatomic) float probability; // @synthesize probability=_probability;
@property(readonly, nonatomic) float variance; // @synthesize variance=_variance;
@property(readonly, nonatomic) float mean; // @synthesize mean=_mean;
@property(nonatomic) float actionProbability;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

