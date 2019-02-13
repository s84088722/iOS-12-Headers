//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchForTimersIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INSearchForTimersIntent : INIntent <INSearchForTimersIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setState:(long long)arg1;
@property(readonly, nonatomic) long long state;
- (void)setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
- (void)setLabel:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *label;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 state:(long long)arg3;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

