//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFStatusItem.h>

@interface HFAbstractRangeStatusItem : HFStatusItem
{
}

+ (id)_defaultValueFormatter;
+ (id)_localizedRangeStringForKey:(id)arg1;
+ (id)displayTitleStringForService:(id)arg1 withResponse:(id)arg2 multipleServices:(_Bool)arg3 updateOptions:(id)arg4;
+ (_Bool)isPercentRange;
+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (id)customValueFormatter;
+ (CDUnknownBlockType)displayValueComparator;
+ (id)localizationKeyPrefix;
+ (id)targetModeCharacteristicTypes;
+ (id)currentModeCharacteristicTypes;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)currentValueCharacteristicType;
+ (id)sensorServiceTypes;
+ (id)controllableServiceTypes;
- (id)_subclass_updateWithOptions:(id)arg1;

@end

