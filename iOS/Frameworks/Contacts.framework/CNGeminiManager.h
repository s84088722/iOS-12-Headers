//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CoreTelephonyClientDelegate-Protocol.h>
#import <Contacts/TUCallProviderManagerDelegate-Protocol.h>

@class CNContactsEnvironment, CoreTelephonyClient, NSMapTable, NSString, TUCallProviderManager;
@protocol OS_dispatch_queue;

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate>
{
    CNContactsEnvironment *_environment;
    CoreTelephonyClient *_coreTelephonyClient;
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
}

+ (_Bool)useFakeData;
+ (id)cellularPlanManager;
+ (id)channelStringFromSenderIdentity:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (_Bool)deviceSupportsGemini;
@property(retain, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)badgeLabelForSubscription:(id)arg1 error:(id *)arg2;
- (id)fetchedSubscriptionForSenderIdentity:(id)arg1;
- (id)fetchedSubscriptionsWithError:(id *)arg1;
- (id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)bestSubscriptionForContact:(id)arg1 error:(id *)arg2;
- (id)fakeSenderIdentities;
- (void)danglingPlansDidUpdate:(id)arg1;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)notifyDelegateOfChannelUpdates;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (_Bool)isReferencedByCallHistoryForSenderLabelIdentifier:(id)arg1;
- (_Bool)isReferencedByMessagesForSenderLabelIdentifier:(id)arg1;
- (_Bool)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2;
- (_Bool)isReferencedSenderLabelIdentifier:(id)arg1;
- (_Bool)remapMessagesHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)remapRecentCallsHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id *)arg3;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;
- (_Bool)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id *)arg4;
- (_Bool)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id *)arg3;
- (id)badgeLabelForSenderIdentity:(id)arg1 error:(id *)arg2;
- (id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id *)arg2;
- (id)channelForFavoritesEntry:(id)arg1 error:(id *)arg2;
- (id)channelForFavoritesEntry:(id)arg1 includeDanglingChannels:(_Bool)arg2 error:(id *)arg3;
- (id)channelIdentifierForMostRecentSMSFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)channelIdentifierForMostRecentCallFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)defaultSenderIdentityForInteractionsFromSenderIdentities:(id)arg1;
- (id)senderIdentityMatchingPhoneNumber:(id)arg1 fromSenderIdentities:(id)arg2;
- (id)senderIdentityMatchingUUID:(id)arg1 fromSenderIdentities:(id)arg2;
- (id)mostRecentChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)bestChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2 defaultChannelIdentifier:(id)arg3;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 substituteDefaultForDangling:(_Bool)arg3 error:(id *)arg4;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)contactForPhoneString:(id)arg1 contactStore:(id)arg2;
- (id)channelForPreferredChannelString:(id)arg1 fromChannels:(id)arg2;
- (id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(_Bool)arg2 error:(id *)arg3;
- (id)geminiResultForContact:(id)arg1 error:(id *)arg2;
- (id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(_Bool)arg2 error:(id *)arg3;
- (id)bestSenderIdentityForContact:(id)arg1 error:(id *)arg2;
- (id)channelForContact:(id)arg1 error:(id *)arg2;
- (id)fetchedSenderIdentitiesWithError:(id *)arg1;
- (id)channelsByIdentifierIncludingDanglingPlans:(_Bool)arg1 defaultChannel:(id *)arg2 availableChannels:(id *)arg3;
- (id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3;
- (id)initWithCallProviderManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

