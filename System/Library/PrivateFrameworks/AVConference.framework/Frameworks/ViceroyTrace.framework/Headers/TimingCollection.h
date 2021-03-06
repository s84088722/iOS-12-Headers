/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TimingCollection : NSObject {

	NSMutableDictionary* timings;
	NSObject*<OS_dispatch_queue> queue;

}
-(BOOL)isValidTimingForKey:(int)arg1 ;
-(float)timingForKey:(int)arg1 ;
-(void)setTiming:(float)arg1 forKey:(int)arg2 ;
-(float)totalTimeForKey:(int)arg1 ;
-(void)removeTimingForKey:(int)arg1 ;
-(BOOL)hasKey:(int)arg1 ;
-(void)setStartTime:(float)arg1 forKey:(int)arg2 ;
-(void)setStopTime:(float)arg1 forKey:(int)arg2 ;
-(void)startTimingForKey:(int)arg1 ;
-(void)stopTimingForKey:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

