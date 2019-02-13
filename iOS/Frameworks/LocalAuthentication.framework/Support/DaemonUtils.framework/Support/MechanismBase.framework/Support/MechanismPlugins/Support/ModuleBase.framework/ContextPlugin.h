//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModuleBase/LAContextExternalizationProt-Protocol.h>
#import <ModuleBase/LAContextServerEvaluationProt-Protocol.h>

@class LACachedExternalizedContext, NSDictionary, NSMutableDictionary;

@interface ContextPlugin : NSObject <LAContextExternalizationProt, LAContextServerEvaluationProt>
{
    NSMutableDictionary *_internalOperationOptions;
    _Bool _contextOwner;
    NSDictionary *_resultInfo;
    LACachedExternalizedContext *_cachedExternalizedContext;
}

+ (void)pluginWithExternalizedContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) LACachedExternalizedContext *cachedExternalizedContext; // @synthesize cachedExternalizedContext=_cachedExternalizedContext;
@property(retain, nonatomic) NSDictionary *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(readonly, nonatomic) _Bool contextOwner; // @synthesize contextOwner=_contextOwner;
- (void).cxx_destruct;
- (void)setExternalizationObserver:(id)arg1;
- (id)externalizationObserver;
- (id)externalizedContext;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;
- (void)performOp:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setCredential:(id)arg1 type:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (id)createInternalInfo:(id)arg1 skipCallerIdentification:(_Bool)arg2 callerBundleId:(id)arg3 originator:(id)arg4;
- (id)createInternalInfoWithPolicy:(long long)arg1 policyOptions:(id)arg2 originator:(id)arg3;
- (id)initWithContextOwner:(_Bool)arg1;

@end

