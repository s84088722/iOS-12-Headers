//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBSSceneSettings, FBSSceneTransitionContext, NSSet, UIView;

@protocol FBUISceneUpdater
- (UIView *)contentView;
- (void)sendActions:(NSSet *)arg1;
- (void)updateSettings:(FBSSceneSettings *)arg1 withTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(_Bool))arg3;
@end

