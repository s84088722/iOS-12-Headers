//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString;

@interface MTDateFormatting : NSObject
{
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
    _Bool _use24HourTime;
    _Bool _timeDesignatorAppearsBeforeTime;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool timeDesignatorAppearsBeforeTime; // @synthesize timeDesignatorAppearsBeforeTime=_timeDesignatorAppearsBeforeTime;
@property(readonly, nonatomic) _Bool use24HourTime; // @synthesize use24HourTime=_use24HourTime;
- (void).cxx_destruct;
- (id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2;
- (id)timeDesignatorForDate:(id)arg1;
- (id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id *)arg3;
- (id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id *)arg2;
@property(readonly, nonatomic) __weak NSString *pmString;
@property(readonly, nonatomic) __weak NSString *amString;
- (id)_timeOnlyFormatter;
- (id)_dateOnlyFormatter;
- (void)_loadLocaleInfo;
- (void)_reloadLocaleInfo;
- (void)_clearLocaleDependentState;
- (void)dealloc;
- (id)init;

@end

