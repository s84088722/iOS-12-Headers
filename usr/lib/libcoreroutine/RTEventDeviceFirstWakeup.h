/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventDevice.h>

@interface RTEventDeviceFirstWakeup : RTEventDevice {

	long long _wakeupState;

}

@property (nonatomic,readonly) long long wakeupState;              //@synthesize wakeupState=_wakeupState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDeviceWakeupState:(long long)arg1 source:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(long long)wakeupState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

