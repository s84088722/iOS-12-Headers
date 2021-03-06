//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreDataStoreMaintenance-Protocol.h>

@protocol AVTEventCoalescer, AVTUILogger, OS_dispatch_queue;

@interface AVTCoreDataStoreMaintenance : NSObject <AVTCoreDataStoreMaintenance>
{
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <AVTEventCoalescer> _eventCoalescer;
    CDUnknownBlockType _mocFactory;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType mocFactory; // @synthesize mocFactory=_mocFactory;
@property(readonly, nonatomic) id <AVTEventCoalescer> eventCoalescer; // @synthesize eventCoalescer=_eventCoalescer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)duplicatedIdentifiersInManagedObjectContext:(id)arg1 error:(id *)arg2;
- (id)fetchDuplicatedRecordsForIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (_Bool)fixDuplicateRecordIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (_Bool)mitigateDuplicatesWithManagedObjectContext:(id)arg1 error:(id *)arg2;
- (void)runMaintenanceTasks;
- (void)storeDidChange;
- (id)initWithWorkQueue:(id)arg1 managedObjectContextFactory:(CDUnknownBlockType)arg2 eventCoalescer:(id)arg3 logger:(id)arg4;
- (id)initWithEnvironment:(id)arg1 managedObjectContextFactory:(CDUnknownBlockType)arg2;

@end

