//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTEventStore-Protocol.h>
#import <coreroutine/RTEventStoreAppLaunch-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface RTEventStore : NSObject <RTEventStore, RTEventStoreAppLaunch, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_applicableEventClasses;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *applicableEventClasses; // @synthesize applicableEventClasses=_applicableEventClasses;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)setUnderlyingQueue:(id)arg1;
@property(readonly, copy) NSString *description;
- (double)getConfidence;
- (_Bool)storesEventOfClass:(Class)arg1;
- (void)fetchAllPredictionsWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addAppLaunchEvent:(id)arg1;
- (void)clearAllEvents;
- (unsigned long long)countOfEvents;
- (void)removeEvents:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicableEventClasses:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

