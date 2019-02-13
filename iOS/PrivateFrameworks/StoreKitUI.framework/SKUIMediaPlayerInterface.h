//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, SKUIMediaPlayerItemStatus;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SKUIMediaPlayerInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSHashTable *_observers;
    SKUIMediaPlayerItemStatus *_onDeckItem;
    NSMapTable *_players;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (_Bool)isRadioItemIdentifier:(id)arg1;
+ (_Bool)identifierMatches:(id)arg1 item:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateTimeValuesUsingItemTime:(_Bool)arg1 player:(id)arg2 item:(id)arg3;
- (void)_updateItemForPlayer:(id)arg1 currentTime:(double)arg2;
- (void)_updateDurationForPlayerItem:(id)arg1 withMPAVItem:(id)arg2;
- (void)_startOnDeckTimer;
- (void)_onDeckTimedOut;
- (void)_cancelOnDeckItem;
- (void)_updateBufferingState:(unsigned long long)arg1 player:(id)arg2;
- (void)_unregisterForNotificationsForCurrentItem:(id)arg1;
- (void)_setCurrentTimeIfPossible:(double)arg1 player:(id)arg2;
- (void)_registerForNotificationsForCurrentItem:(id)arg1;
- (void)_itemDidChange:(id)arg1 incomingItem:(id)arg2;
- (void)_notifyFinishedItem:(id)arg1;
- (void)_notifyObserversOfItemStateChange;
- (void)_destroyPeridicTimeObseverIfNeeded:(id)arg1;
- (void)_createPeriodicTimeObserverIfNeeded:(id)arg1;
- (id)_playerForNotification:(id)arg1;
- (id)_itemFromNotification:(id)arg1;
- (void)_playerRateDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_playerItemReady:(id)arg1;
- (void)_notifiyObserversOfItemChange:(id)arg1;
- (void)_currentItemDurationAvailableNotification:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)togglePlayStateForItemWithIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)playerForItemWithIdentifier:(id)arg1;
- (void)notifyWillChangeToItemWithItemIdentifer:(id)arg1;
- (_Bool)identifierIsOnDeck:(id)arg1;
- (_Bool)isItemWithIdentifierActive:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
