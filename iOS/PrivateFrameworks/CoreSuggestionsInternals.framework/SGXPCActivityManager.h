//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGXPCActivityManagerProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface SGXPCActivityManager : NSObject <SGXPCActivityManagerProtocol>
{
    NSMutableArray *_activities;
    NSMutableArray *_lastCriteria;
    NSMutableArray *_handlers;
    NSMutableDictionary *_currentTasks;
    _Bool _registered;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)nameForActivityId:(int)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)copyCriteria:(id)arg1;
- (_Bool)shouldDefer:(id)arg1;
- (id)_taskForActivity:(id)arg1;
- (void)setCriteria:(id)arg1 criteria:(id)arg2 forActivity:(int)arg3;
- (_Bool)setState:(id)arg1 state:(long long)arg2;
- (long long)getState:(id)arg1;
- (id)activityForActivityId:(int)arg1;
- (void)registerForActivity:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerActivitiesWithSystem;
- (void)dealloc;
- (id)init;

@end

