//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue, NSString, VUIMediaLibrary;
@protocol OS_dispatch_queue;

@interface VUIMediaLibraryFetchController : NSObject
{
    VUIMediaLibrary *_mediaLibrary;
    NSString *_identifier;
    NSString *_logName;
    NSString *_logNameSuffix;
    long long _state;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSOperationQueue *_serialFetchOperationQueue;
    NSOperation *_fetchOperation;
    unsigned long long _mediaLibraryRevision;
    unsigned long long _pauseCount;
}

+ (id)_logStringWithFetchControllers:(id)arg1;
@property(nonatomic) unsigned long long pauseCount; // @synthesize pauseCount=_pauseCount;
@property(nonatomic) unsigned long long mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(retain, nonatomic) NSOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSOperationQueue *serialFetchOperationQueue; // @synthesize serialFetchOperationQueue=_serialFetchOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *logNameSuffix; // @synthesize logNameSuffix=_logNameSuffix;
@property(copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;
- (void)_enqueueSyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueProcessingQueueBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_fetchOperationCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_enqueueFetchWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startFetchIfNeededWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelFetch;
- (void)_moveToPausedState;
- (_Bool)_shouldFetchForMediaLibraryRevision:(unsigned long long)arg1;
- (_Bool)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changeSet:(id)arg3 updateOnNoChanges:(_Bool)arg4;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)cancelFetch;
- (void)beginFetchWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)resume;
- (void)pause;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

@end
