//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMAccessorySetting.h>

@class NSNumber;

@interface HMAccessoryNumberSetting : HMAccessorySetting
{
}

@property(readonly) NSNumber *stepValue;
@property(readonly) NSNumber *maximumValue;
@property(readonly) NSNumber *minimumValue;
- (Class)valueClass;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 stepValue:(id)arg6;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;

@end

