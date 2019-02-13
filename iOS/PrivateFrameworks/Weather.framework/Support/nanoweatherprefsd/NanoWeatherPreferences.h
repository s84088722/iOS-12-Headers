//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSUserDefaults;

@interface NanoWeatherPreferences : NSObject
{
    NSUserDefaults *_sharedDefaults;
    NSMutableSet *_keysToSync;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(retain) NSMutableSet *keysToSync; // @synthesize keysToSync=_keysToSync;
@property(retain) NSUserDefaults *sharedDefaults; // @synthesize sharedDefaults=_sharedDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSDate *lastUpdated;
- (id)nanoPreferencesDictionaryForCity:(id)arg1;
- (id)cityObjectsListFromNanoPreferences;
- (id)cityList;
- (void)setCity:(id)arg1 atIndex:(unsigned long long)arg2 lastUpdated:(id)arg3;
- (void)setCityList:(id)arg1 lastUpdated:(id)arg2;
- (void)setCityListFromCityObjs:(id)arg1 lastUpdated:(id)arg2;
- (void)syncPreferencesWithDisk;
- (void)syncPreferencesToNano;
- (id)init;

@end

