//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HDAsynchronousTaskTree : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_pendingTasks;
    NSMutableArray *_queue_pendingSubtasks;
    NSMutableArray *_queue_taskErrors;
    int _canceled;
    _Bool _queue_started;
    _Bool _queue_finished;
    CDUnknownBlockType _queue_completion;
    NSObject<OS_dispatch_queue> *_default_task_queue;
    _Bool _rejectAddTask;
    NSString *_groupDescription;
}

@property(readonly, copy, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
- (void).cxx_destruct;
- (id)description;
- (void)_queue_runPendingCheckpointTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_reportResult:(long long)arg1;
- (void)_queue_insertPendingSubtasks;
- (void)_queue_beginNextTask;
- (void)_queue_completeCurrentTaskWithResult:(long long)arg1 error:(id)arg2;
- (void)cancel;
- (void)begin;
@property(readonly, nonatomic) NSArray *allErrors;
- (void)addCheckpointTask:(CDUnknownBlockType)arg1;
- (void)addTaskOnQueue:(id)arg1 timeout:(double)arg2 task:(CDUnknownBlockType)arg3;
- (void)addTaskWithTimeout:(double)arg1 task:(CDUnknownBlockType)arg2;
- (void)addTaskOnQueue:(id)arg1 task:(CDUnknownBlockType)arg2;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)initWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

