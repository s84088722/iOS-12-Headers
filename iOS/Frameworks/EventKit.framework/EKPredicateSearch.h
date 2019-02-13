//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKCancellableRemoteOperation-Protocol.h>

@class EKEventStore, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation>
{
    CDUnknownBlockType _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id _cancellationToken;
    _Bool _finished;
    _Bool _isCancelled;
    int _retryCount;
}

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (void).cxx_destruct;
- (void)disconnect;
- (void)cancel;
- (id)fetchObjectIDs;
- (id)runSynchronously;
- (id)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_fetchObjectIDsActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_startProcessingWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2 processor:(CDUnknownBlockType)arg3;
- (void)_startFetchObjectIDsActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_startActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (id)_createOSActivity;
- (void)terminate;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

