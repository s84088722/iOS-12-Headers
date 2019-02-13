//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

#import <HealthKit/HKFeatureAvailabilityRule-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityCompoundRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule>
{
    NSString *_grouping;
    NSMutableArray *_rules;
}

+ (id)ruleIdentifier;
@property(retain, nonatomic) NSMutableArray *rules; // @synthesize rules=_rules;
@property(retain, nonatomic) NSString *grouping; // @synthesize grouping=_grouping;
- (void).cxx_destruct;
- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

