//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchCallHistoryIntentExport-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>
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
- (void)setUnseen:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *unseen;
@property(nonatomic) long long preferredCallProvider;
- (void)setCallTypes:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long callTypes;
- (void)setCallCapabilities:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long callCapabilities;
- (void)setRecipient:(id)arg1;
@property(readonly, copy, nonatomic) INPerson *recipient;
- (void)setDateCreated:(id)arg1;
@property(readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 unseen:(id)arg5;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
@property(readonly, nonatomic) long long callType;
- (id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

