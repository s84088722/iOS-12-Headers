//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriterInputPassDescription;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputPassDescriptionResponder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    _Bool _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    CDUnknownBlockType _callbackBlock;
}

- (_Bool)_hasStoppedResponding;
- (void)stopRespondingToPassDescriptions;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)respondToNewPassDescription:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

