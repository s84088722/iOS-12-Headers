//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneSettingsDiff, FBSSceneTransitionContext;

@interface FBSWorkspaceSceneUpdateEvent : FBSWorkspaceSceneEvent
{
    FBSSceneSettingsDiff *_settings;
    FBSSceneTransitionContext *_transitionContext;
}

@property(retain, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_settings;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

