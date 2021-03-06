/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextInteraction.h>

@interface UITextLoupeInteraction : UITextInteraction {

	Class _configuratorClass;

}
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loupeGestureWithState:(long long)arg1 atGesturePoint:(/*^block*/id)arg2 shouldCancel:(BOOL*)arg3 ;
-(void)loupeGesture:(id)arg1 ;
-(void)canBeginDragCursor:(id)arg1 ;
-(void)finishSetup;
-(BOOL)_isShiftKeyBeingHeldForGesture:(id)arg1 ;
-(void)loupeGestureWithState:(long long)arg1 atGesturePoint:(/*^block*/id)arg2 modifierFlags:(long long)arg3 shouldCancel:(BOOL*)arg4 ;
-(id)initWithConfigurator:(Class)arg1 ;
@end

