/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject {

	NSMutableDictionary* _motionActivityTypeBins;

}

@property (nonatomic,retain) NSMutableDictionary * motionActivityTypeBins;              //@synthesize motionActivityTypeBins=_motionActivityTypeBins - In the implementation block
-(NSMutableDictionary *)motionActivityTypeBins;
-(void)addMotionActivityType:(unsigned long long)arg1 ;
-(unsigned long long)getDominantMotionActivityType;
-(void)setMotionActivityTypeBins:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)show;
@end

