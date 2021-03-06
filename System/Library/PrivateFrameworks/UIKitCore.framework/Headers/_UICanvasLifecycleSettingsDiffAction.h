/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:43 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICanvasSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UICanvasLifecycleSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsLifecycleEventDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsLifecycleEventDiffInspector;              //@synthesize sceneSettingsLifecycleEventDiffInspector=_sceneSettingsLifecycleEventDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureInitialDeactivationReasons:(unsigned long long)arg1 ;
-(void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsLifecycleEventDiffInspector;
-(void)setSceneSettingsLifecycleEventDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

