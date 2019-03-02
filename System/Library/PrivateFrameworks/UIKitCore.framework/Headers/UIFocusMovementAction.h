/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class _UIFocusMovementInfo, _UIFocusInputDeviceInfo;

@interface UIFocusMovementAction : BSAction

@property (nonatomic,readonly) _UIFocusMovementInfo * focusMovementInfo; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
-(BOOL)shouldPerformHapticFeedback;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(BOOL)arg3 ;
-(long long)UIActionType;
-(id)initWithFocusMovementInfo:(id)arg1 ;
-(_UIFocusMovementInfo *)focusMovementInfo;
@end
