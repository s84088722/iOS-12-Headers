//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/AMSLookupBagContract-Protocol.h>

@class AMSBag, AMSBagValue, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface FCAMSBag : NSObject <AMSLookupBagContract>
{
    AMSBag *_bag;
}

+ (id)_keySet;
@property(retain, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSBagValue *unpersonalizedLookupURL;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *personalizedLookupURL;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly) Class superclass;

@end

