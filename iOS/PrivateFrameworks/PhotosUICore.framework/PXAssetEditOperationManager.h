//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface PXAssetEditOperationManager : NSObject
{
    NSMutableDictionary *_pendingPerformersByAsset;
    NSMutableDictionary *_operationStatusByAsset;
    NSMapTable *_observersWithContexts;
    NSMutableArray *_predicateRecords;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSMutableArray *predicateRecords; // @synthesize predicateRecords=_predicateRecords;
@property(readonly, nonatomic) NSMapTable *observersWithContexts; // @synthesize observersWithContexts=_observersWithContexts;
@property(readonly, nonatomic) NSMutableDictionary *operationStatusByAsset; // @synthesize operationStatusByAsset=_operationStatusByAsset;
@property(readonly, nonatomic) NSMutableDictionary *pendingPerformersByAsset; // @synthesize pendingPerformersByAsset=_pendingPerformersByAsset;
- (void).cxx_destruct;
- (void)_handleCompletionOfPerformer:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3 externalCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_signalPendingPerformersChangeForAsset:(id)arg1;
- (void)_signalStatusChangeForAsset:(id)arg1;
- (void)_updateOperationStatusForAsset:(id)arg1;
- (void)_removePendingPerformer:(id)arg1;
- (void)_addPendingPerformer:(id)arg1;
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1 context:(void *)arg2;
- (void)registerObserver:(id)arg1 context:(void *)arg2;
- (void)enumerateEditOperationsPerformedOnAsset:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (Class)_performerClassForEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (id)_performerForEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (long long)editOperationStatusForAsset:(id)arg1;
- (void)registerPerformerClass:(Class)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (id)performEditOperationWithType:(id)arg1 asset:(id)arg2 delay:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)performEditOperationWithType:(id)arg1 asset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPerformEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (id)init;

@end

