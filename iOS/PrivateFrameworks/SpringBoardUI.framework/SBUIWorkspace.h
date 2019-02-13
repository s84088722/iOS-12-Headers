//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>
#import <SpringBoardUI/FBSceneClientProvider-Protocol.h>

@class FBSSerialQueue, FBSceneClientProviderInvalidationAction, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface SBUIWorkspace : NSObject <FBSceneClientProvider, BSDescriptionProviding>
{
    _Bool _valid;
    NSString *_identifier;
    FBSSerialQueue *_clientQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_scenes;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)endTransaction;
- (void)beginTransaction;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)_performSynchronouslyOnMainThread:(CDUnknownBlockType)arg1;
- (void)_queue_invalidate;
- (void)invalidate;
- (void)destroyScene:(id)arg1;
- (id)createSceneWithIdentifier:(id)arg1 initialClientSettings:(id)arg2;
- (id)sceneWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *scenes;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

