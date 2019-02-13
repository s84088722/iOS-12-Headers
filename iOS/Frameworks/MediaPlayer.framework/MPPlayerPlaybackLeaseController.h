//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPPlayerPlaybackLeaseController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasDoneInitialSetup;
    _Bool _isAutomaticLeaseRefreshEnabled;
    _Bool _isObservingSubscriptionNotifications;
    _Bool _isPlayerEffectivelyPlaying;
    _Bool _isStartingLeaseForPlaybackResumption;
    NSMutableArray *_players;
    unsigned long long _preventionState;
    _Bool _shouldStartLeaseForAssets;
    _Bool _shouldStartLeaseForUserAction;
    NSMutableArray *_startLeaseForPlaybackResumptionCompletionHandlers;
    _Bool _usesSubscriptionLease;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_updateUsesSubscriptionLease;
- (void)_updatePlayerEffectivelyPlaying;
- (void)_startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startLeaseIfNeededForCurrentPlayerItemsFromUserAction:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldPausePlaybackReturningWasLeaseTaken:(_Bool *)arg1;
- (void)_pausePlayersForLeaseEndWithNotification:(_Bool)arg1;
- (_Bool)_pausePlayerForLeaseEnd:(id)arg1;
- (_Bool)_calculateEffectivelyPlayingForPlayer:(id)arg1;
- (void)_acquireSubscriptionLeaseForCurrentItemIfNeededWithPlayer:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_subscriptionLeaseDidEndNotification:(id)arg1;
- (void)_subscriptionLeaseDidBeginNotification:(id)arg1;
- (void)_shouldPlaybackRequireSubscriptionLeaseDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerStateDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerItemReadyToPlayNotification:(id)arg1;
- (void)startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerPlayer:(id)arg1;
- (void)handleLeaseForErrorResolutionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getFinalSubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acquireShouldStartLeaseForAssetCreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

