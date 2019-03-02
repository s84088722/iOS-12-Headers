/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAccessorySetting.h>

@class NSNumber;

@interface HMAccessoryNumberSetting : HMAccessorySetting

@property (readonly) NSNumber * minimumValue; 
@property (readonly) NSNumber * maximumValue; 
@property (readonly) NSNumber * stepValue; 
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 stepValue:(id)arg6 ;
-(Class)valueClass;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(NSNumber *)stepValue;
@end
