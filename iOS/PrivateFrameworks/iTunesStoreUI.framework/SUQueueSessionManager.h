//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SUQueueSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_downloadManagers;
    NSMutableArray *_preorderManagers;
}

- (id)_queueSessionWithQueue:(id)arg1 fromArray:(id)arg2;
- (id)_queueSessionWithManagerOptions:(id)arg1 fromArray:(id)arg2;
- (id)_queueSessionWithDownloadKinds:(id)arg1 fromArray:(id)arg2;
- (void)_endQueueSession:(id)arg1 fromArray:(id)arg2;
- (void)endPreorderManagerSessionWithManager:(id)arg1;
- (void)endDownloadManagerSessionForManager:(id)arg1;
- (id)beginPreorderManagerSessionWithItemKinds:(id)arg1;
- (id)beginDownloadManagerSessionWithManagerOptions:(id)arg1;
- (id)beginDownloadManagerSessionWithDownloadKinds:(id)arg1;
- (id)beginDownloadManagerSessionForDownloadKind:(id)arg1;
- (void)dealloc;
- (id)init;

@end

