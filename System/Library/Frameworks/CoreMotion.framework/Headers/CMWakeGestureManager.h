/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMWakeGestureDelegate;
@interface CMWakeGestureManager : NSObject {

	id<CMWakeGestureDelegate> _delegate;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isWakeGestureOverrideEnabled;
+(BOOL)isWakeGestureAvailable;
+(id)sharedManager;
-(BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
-(void)logAssert;
-(void)stopWakeGestureUpdates;
-(void)startWakeGestureUpdates;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(id<CMWakeGestureDelegate>)delegate;
@end
