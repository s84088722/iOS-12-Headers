//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>
#import <CloudDocsDaemon/BRItemNotificationReceiving-Protocol.h>

@class BRCAccountSession, BRCNotificationPipe, NSString, NSURL, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCEvictItemOperation : _BRCFrameworkOperation <BRItemNotificationReceiving, BRCOperationSubclass>
{
    BRCAccountSession *_session;
    unsigned long long _section;
    NSURL *_url;
    brc_task_tracker *_tracker;
    BRCNotificationPipe *_pipe;
    _Bool _isFinished;
    CDUnknownBlockType _evictionCompletionBlock;
}

@property(copy) CDUnknownBlockType evictionCompletionBlock; // @synthesize evictionCompletionBlock=_evictionCompletionBlock;
- (void).cxx_destruct;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)invalidate;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)main;
- (void)cancel;
- (id)initWithSession:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

