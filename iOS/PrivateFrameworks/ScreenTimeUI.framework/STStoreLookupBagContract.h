//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/AMSLookupBagContract-Protocol.h>
#import <ScreenTimeUI/AMSMetricsBagContract-Protocol.h>

@class AMSBag, AMSBagValue, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface STStoreLookupBagContract : NSObject <AMSMetricsBagContract, AMSLookupBagContract>
{
    AMSBag *_bag;
}

+ (id)sharedLookupContract;
@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *unpersonalizedLookupURL;
@property(readonly, nonatomic) AMSBagValue *personalizedLookupURL;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *metricsUrl;
@property(readonly) Class superclass;

@end
