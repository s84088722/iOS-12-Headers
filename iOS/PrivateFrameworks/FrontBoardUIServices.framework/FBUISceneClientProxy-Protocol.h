//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardUIServices/NSObject-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;
@protocol FBUISceneHostProxy;

@protocol FBUISceneClientProxy <NSObject, BSDescriptionProviding>
- (void)didInvalidateSceneHost:(id <FBUISceneHostProxy>)arg1;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 destroySceneWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(_Bool, NSError *))arg5;
@end

