/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPrintFormatter.h>

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {

	UIView* _view;

}

@property (nonatomic,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_initWithView:(id)arg1 ;
@end

