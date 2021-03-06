/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIView {

	UISelectionGrabber* m_grabber;

}

@property (assign,nonatomic,__weak) UISelectionGrabber * grabber; 
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(UISelectionGrabber *)grabber;
-(CGRect)_extendedHitTestingRectIncludingCalloutBarAdjustments:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 container:(id)arg2 ;
-(void)setGrabber:(UISelectionGrabber *)arg1 ;
@end

