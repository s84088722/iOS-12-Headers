//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface RCDurationFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_positionalParameterFormatStrings;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}

+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1;
+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1;
+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1;
+ (id)sharedFormatter;
- (void).cxx_destruct;
- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueuePositionalFormatStringForStyle:(long long)arg1;
- (id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2;
- (id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3;
- (void)reloadLocalizedFormatStrings;
- (id)stringFromDuration:(double)arg1 style:(long long)arg2;
- (id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

