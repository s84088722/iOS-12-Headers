//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface AgentQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _keepAlive;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (void)suspend;
- (void)setName:(id)arg1;
- (void)resume;
- (_Bool)isEmpty;
- (void)cancelAllAssociatedWithState:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

