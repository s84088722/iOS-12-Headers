//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding>
{
    float _score;
    id _predictedItem;
}

+ (id)bundleIdsFrom:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)predictionsFrom:(id)arg1;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) id predictedItem; // @synthesize predictedItem=_predictedItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) id bundleId;
- (void)setScore:(float)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqualToScoredPredictionItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleId:(id)arg1 score:(float)arg2;
- (id)initWithPredictedItem:(id)arg1 score:(float)arg2;
- (id)init;

@end
