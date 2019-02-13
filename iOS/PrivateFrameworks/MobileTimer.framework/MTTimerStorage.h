//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTTimerSchedulerDelegate-Protocol.h>
#import <MobileTimer/MTTimerStorage-Protocol.h>

@class MTTimer, MTTimerMigrator, MTTimerScheduler, NSArray, NSDate, NSMutableArray, NSPointerArray, NSString;
@protocol MTPersistence, NAScheduler;

@interface MTTimerStorage : NSObject <MTTimerSchedulerDelegate, MTAgentDiagnosticDelegate, MTTimerStorage>
{
    MTTimerScheduler *_scheduler;
    NSMutableArray *_orderedTimers;
    NSDate *_lastModifiedDate;
    CDUnknownBlockType _currentDateProvider;
    MTTimerMigrator *_migrator;
    id <NAScheduler> _serializer;
    NSPointerArray *_observers;
    id <MTPersistence> _persistence;
}

+ (id)_diagnosticDictionaryForTimer:(id)arg1;
@property(retain, nonatomic) id <MTPersistence> persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTTimerMigrator *migrator; // @synthesize migrator=_migrator;
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSMutableArray *orderedTimers; // @synthesize orderedTimers=_orderedTimers;
@property(nonatomic) __weak MTTimerScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)scheduler:(id)arg1 didFireTimer:(id)arg2;
- (void)scheduler:(id)arg1 didChangeNextTimer:(id)arg2;
- (id)_diagnosticTimerDictionary;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (void)handleF5Reset;
- (void)_queue_sortTimers;
- (void)_queue_persistTimers;
- (_Bool)_queue_hasMatchingTimer:(id)arg1;
- (id)_queue_timerMatchingTimerIdentifier:(id)arg1;
- (void)_queue_notifyObserversForNextTimerChange:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerFire:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerDismiss:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerRemoval:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerUpdate:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerAdd:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_applyNecessaryChangesFromOldTimer:(id)arg1 currentTimer:(id)arg2;
- (id)_queuePersistTimer:(id)arg1 replacingTimer:(id)arg2;
- (void)_queue_removeAllTimersForSource:(id)arg1;
- (void)_queue_repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (id)_queue_updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)getTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2 persist:(_Bool)arg3 notify:(_Bool)arg4;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2;
- (void)setAllTimers:(id)arg1 source:(id)arg2;
- (void)registerObserver:(id)arg1;
@property(readonly, nonatomic) MTTimer *nextTimer;
@property(readonly, nonatomic) NSArray *timers;
- (void)_createDefaultTimerIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadTimersSync;
- (void)loadTimers;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 scheduler:(id)arg3 currentDateProvider:(CDUnknownBlockType)arg4;
- (id)initWithPersistence:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

