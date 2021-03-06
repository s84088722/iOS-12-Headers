/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray;

@interface UIInteractionProgress : NSObject {

	NSPointerArray* _observers;
	double _previousPercentComplete;
	double _previousUpdateTime;
	double _mostRecentUpdateTime;
	long long _atLeastTwoUpdates;
	double _percentComplete;

}

@property (nonatomic,readonly) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) double velocity; 
-(id)init;
-(id)description;
-(void)addProgressObserver:(id)arg1 ;
-(double)percentComplete;
-(double)velocity;
-(void)removeProgressObserver:(id)arg1 ;
-(void)endInteraction:(BOOL)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(unsigned long long)_indexOfObserver:(id)arg1 ;
-(void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2 ;
-(long long)numberOfObservers;
@end

