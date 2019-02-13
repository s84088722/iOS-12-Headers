//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol ARTechniqueDelegate;

@interface ARTechnique : NSObject
{
    id <ARTechniqueDelegate> _delegate;
    unsigned long long _powerUsage;
    double _bonusLatency;
    NSNumber *_traceKey;
}

+ (id)techniqueOfClass:(Class)arg1 inArray:(id)arg2;
@property(readonly) NSNumber *traceKey; // @synthesize traceKey=_traceKey;
@property double bonusLatency; // @synthesize bonusLatency=_bonusLatency;
@property unsigned long long powerUsage; // @synthesize powerUsage=_powerUsage;
@property __weak id <ARTechniqueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)replaceTechniques:(id)arg1;
- (id)initWithParallelTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)techniques;
- (id)techniqueOfClass:(Class)arg1;
- (void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (_Bool)reconfigurableFrom:(id)arg1;
- (void)prepare;
- (id)resultDataClasses;
- (_Bool)deterministicMode;
- (long long)captureBehavior;
- (double)requiredTimeInterval;
- (unsigned long long)requiredSensorDataTypes;
- (id)init;

@end

