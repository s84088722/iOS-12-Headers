/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)isShiftRequiredForLocations:(id)arg1 ;
-(void)shiftLocations:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
@end
