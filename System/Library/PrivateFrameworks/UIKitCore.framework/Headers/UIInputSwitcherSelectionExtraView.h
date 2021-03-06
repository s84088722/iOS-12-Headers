/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:56 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherSelectionExtraView : UIView {

	double m_pointerOffset;
	int _roundedCorners;
	UIKeyboardMenuView* _menu;
	CGRect _keyRect;

}

@property (assign,nonatomic) double pointerOffset; 
@property (assign,nonatomic) CGRect keyRect;                         //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) int roundedCorners;                     //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRoundedCorners:(int)arg1 ;
-(int)roundedCorners;
-(UIKeyboardMenuView *)menu;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(CGRect)keyRect;
-(double)pointerOffset;
-(void)setPointerOffset:(double)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
@end

