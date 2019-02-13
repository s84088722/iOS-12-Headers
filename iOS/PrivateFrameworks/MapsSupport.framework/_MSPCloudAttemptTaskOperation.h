//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <MapsSupport/MSPCloudRepeatableTaskToken-Protocol.h>

@class MSPCloudRepeatableTask, NSDate, NSOperationQueue;
@protocol MSPCloudAccess;

__attribute__((visibility("hidden")))
@interface _MSPCloudAttemptTaskOperation : NSOperation <MSPCloudRepeatableTaskToken>
{
    id <MSPCloudAccess> _access;
    MSPCloudRepeatableTask *_task;
    NSDate *_minimumAttemptDate;
    CDUnknownBlockType _completion;
    NSOperationQueue *_cloudOperationsQueue;
    _Bool _attempting;
    _Bool _executing;
    _Bool _finished;
    _Bool _success;
    NSDate *_startedAt;
    NSDate *_finishedAt;
    _Bool _didFetchNewData;
    unsigned long long _attemptCount;
}

@property(readonly, nonatomic) _Bool didFetchNewData; // @synthesize didFetchNewData=_didFetchNewData;
@property(readonly, nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(readonly, nonatomic) MSPCloudRepeatableTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) id <MSPCloudAccess> access; // @synthesize access=_access;
- (void).cxx_destruct;
- (void)_noteDidFetchNewData;
- (void)cancel;
- (void)_endWithError:(id)arg1 canReattempt:(_Bool)arg2 maxAttempts:(unsigned long long)arg3 minimumReattemptDate:(id)arg4;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)_beginAttempting;
- (void)start;
- (void)_setExecuting:(_Bool)arg1 finished:(_Bool)arg2;
- (id)description;
- (id)initWithTask:(id)arg1 access:(id)arg2 attemptCount:(unsigned long long)arg3 minimumAttemptDate:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

