//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject
{
    AMSPromiseCompletionBlocks *_completionBlocks;
    AMSPromiseResult *_promiseResult;
    NSConditionLock *_stateLock;
}

+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (void)_finishPromise:(id)arg1 withPromise:(id)arg2;
+ (_Bool)_errorIsCanceledError:(id)arg1;
+ (void)_configureAnyPromise:(id)arg1 withPomises:(id)arg2 currentPromiseIndex:(unsigned long long)arg3;
+ (void)_configureAllPromise:(id)arg1 withResults:(id)arg2 promises:(id)arg3 currentPromiseIndex:(unsigned long long)arg4;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithResult:(id)arg1;
+ (id)promiseWithError:(id)arg1;
@property(retain, nonatomic) NSConditionLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) AMSPromiseResult *promiseResult; // @synthesize promiseResult=_promiseResult;
@property(retain, nonatomic) AMSPromiseCompletionBlocks *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void).cxx_destruct;
- (_Bool)_isFinished;
- (void)_addBlock:(CDUnknownBlockType)arg1 orCallWithResult:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)nilValueCompletionHandlerAdapter;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (CDUnknownBlockType)boolCompletionHandlerAdapter;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)cancel;
- (id)thenWithBlock:(CDUnknownBlockType)arg1;
- (id)catchWithBlock:(CDUnknownBlockType)arg1;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (void)waitUntilFinished;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultWithError:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)init;

@end

