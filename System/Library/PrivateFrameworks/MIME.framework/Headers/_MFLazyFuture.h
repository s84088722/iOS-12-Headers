//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFFuture.h>

@class MFPromise, NSConditionLock;
@protocol MFScheduler;

@interface _MFLazyFuture : MFFuture
{
    NSConditionLock *_stateLock;
    id <MFScheduler> _scheduler;
    CDUnknownBlockType _block;
    MFPromise *_promise;
}

- (void).cxx_destruct;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)onScheduler:(id)arg1 addFailureBlock:(CDUnknownBlockType)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)onScheduler:(id)arg1 addSuccessBlock:(CDUnknownBlockType)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (_Bool)tryCancel;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)run;
- (id)initWithScheduler:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

