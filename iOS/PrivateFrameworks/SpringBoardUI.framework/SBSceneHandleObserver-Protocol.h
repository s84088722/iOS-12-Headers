//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class FBSSceneClientSettingsDiff, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, FBScene, NSSet, SBSceneHandle;

@protocol SBSceneHandleObserver <NSObject>

@optional
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(NSSet *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateSettingsWithDiff:(FBSSceneSettingsDiff *)arg2 previousSettings:(FBSSceneSettings *)arg3;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didDestroyScene:(FBScene *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didCreateScene:(FBScene *)arg2;
@end

