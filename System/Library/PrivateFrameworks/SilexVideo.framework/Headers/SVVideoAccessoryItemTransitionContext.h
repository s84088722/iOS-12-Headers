/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol SVVideoAccessoryItemTransitionContext <NSObject>
@property (nonatomic,readonly) UIView * fromView; 
@property (nonatomic,readonly) UIView * toView; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@required
-(UIView *)containerView;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1;
-(UIView *)toView;
-(UIView *)fromView;

@end

