//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface MPAssistantAnalyticsReportingController : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSString *_lastSiriReferenceIdentifierForPlaybackStart;
    NSString *_lastSiriReferenceIdentifierForWillReload;
    NSString *_lastSiriReferenceIdentifierWithLikelyToKeepUp;
    NSHashTable *_players;
    NSMapTable *_playerToObservedTimebase;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_timebaseEffectiveRateChangedNotification;
- (id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg1 siriWHAMetricsInfo:(id)arg2;
- (void)_attemptPlaybackStartReportingEventWithPlayer:(id)arg1;
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1;
- (void)_willReloadWithPlaybackContextNotification:(id)arg1;
- (void)_itemTimebaseDidChangeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)logAssistantEvent:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)unregisterPlayer:(id)arg1;
- (void)registerPlayer:(id)arg1;
- (id)_init;

@end

