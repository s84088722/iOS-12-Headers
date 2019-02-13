//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSceneLayerManagerObserver-Protocol.h>
#import <FrontBoard/FBSceneManagerInternalObserver-Protocol.h>
#import <FrontBoard/FBSceneMonitorDelegate-Protocol.h>

@class FBSMutableSceneSettings, FBSSceneClientSettingsDiffInspector, FBSSceneSettings, FBScene, FBSceneMonitorBehaviors, NSMutableDictionary, NSMutableSet, NSString;
@protocol FBSceneMonitorDelegate;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneLayerManagerObserver, FBSceneMonitorDelegate>
{
    FBScene *_scene;
    NSString *_sceneID;
    NSMutableSet *_externalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    NSMutableDictionary *_monitorsBySceneID;
    FBSSceneClientSettingsDiffInspector *_diffInspector;
    FBSMutableSceneSettings *_sceneSettings;
    FBSMutableSceneSettings *_effectiveSettings;
    FBSceneMonitorBehaviors *_givenMonitorBehaviors;
    FBSceneMonitorBehaviors *_delegateMonitorBehaviors;
    FBSceneMonitorBehaviors *_effectiveMonitorBehaviors;
    _Bool _invalidated;
    _Bool _isSynchronizing;
    _Bool _updateSettingsAfterSync;
    _Bool _updateExternalScenesAfterSync;
    id <FBSceneMonitorDelegate> _delegate;
}

@property(copy, nonatomic) FBSceneMonitorBehaviors *behaviors; // @synthesize behaviors=_givenMonitorBehaviors;
@property(readonly, nonatomic) FBSSceneSettings *effectiveSceneSettings; // @synthesize effectiveSceneSettings=_effectiveSettings;
@property(readonly, nonatomic) FBSSceneSettings *sceneSettings; // @synthesize sceneSettings=_sceneSettings;
@property(nonatomic) __weak id <FBSceneMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (id)_effectiveBehaviors;
- (void)_updateEffectiveSceneSettings:(_Bool)arg1;
- (void)_updateSceneSettings:(_Bool)arg1;
- (void)_updateScenePairingState:(_Bool)arg1;
- (void)_updateExternalScenes:(_Bool)arg1;
- (void)_updateAllSceneStateIgnoringDelegate;
- (_Bool)isPairedWithExternalSceneID:(id)arg1;
- (void)_setEffectiveMonitorBehaviors:(id)arg1;
- (void)_evaluateEffectiveMonitorBehaviors;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithSceneID:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

