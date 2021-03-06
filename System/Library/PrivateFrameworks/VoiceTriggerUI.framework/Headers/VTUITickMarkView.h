/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CADisplayLink, NSTimer, NSLock;

@interface VTUITickMarkView : UIView {

	CADisplayLink* _displayLink;
	BOOL _shown;
	long long _currentPreferredFrameRate;
	long long _currentFrame;
	int _animState;
	NSTimer* _safetyTimer;
	BOOL _completionCalled;
	/*^block*/id _completionBlock;
	NSLock* _completionLock;
	long long _fadeInFrames;
	long long _pauseFrames;
	long long _fadeOutFrames;

}
+(void)initialize;
-(void)startAnimationsForTickMark:(BOOL)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)setUpDisplayLink;
-(CGImageRef)imageMask:(BOOL)arg1 ;
-(void)handleSafetyTimer:(id)arg1 ;
-(void)tearDownDisplayLink;
-(id)init;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)drawRect:(CGRect)arg1 ;
@end

