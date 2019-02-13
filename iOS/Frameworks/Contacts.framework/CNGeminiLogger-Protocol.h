//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class CNGeminiInteraction, CTXPCServiceSubscriptionContext, NSArray, NSError;
@protocol CNGeminiUpdateRegistrationToken;

@protocol CNGeminiLogger <NSObject>
- (void)fetchSortedResultsForInteraction:(CNGeminiInteraction *)arg1 error:(NSError *)arg2;
- (void)fetchedSortedResults:(NSArray *)arg1 forInteraction:(CNGeminiInteraction *)arg2;
- (void)updateSubscriptionInfoError:(NSError *)arg1;
- (void)updatedSubscriptionInfo:(NSArray *)arg1;
- (void)unregisteredForContextUpdatesWithToken:(id <CNGeminiUpdateRegistrationToken>)arg1;
- (void)registeredForContextUpdatesWithToken:(id <CNGeminiUpdateRegistrationToken>)arg1;
- (void)recordInteractionError:(NSError *)arg1;
- (void)recordedInteraction:(CNGeminiInteraction *)arg1 forContext:(CTXPCServiceSubscriptionContext *)arg2;
- (void)fetchingBestResultForDestinationHandle:(void (^)(void (^)(void)))arg1;
- (void)updatingSubscriptionInfo:(void (^)(void (^)(void)))arg1;
@end

