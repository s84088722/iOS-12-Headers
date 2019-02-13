//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBClient;

@interface AXBBlueLightManager : NSObject
{
    CBClient *_brightnessClient;
    _Bool _blueLightStatusEnabled;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)supportsAdaptation;
- (_Bool)adaptationEnabled;
- (void)restoreCachedBrightnessFilters;
- (_Bool)blueLightStatusEnabled;
- (_Bool)brightnessFiltersEnabled;
- (void)disableBrightnessFilters;
- (_Bool)supportsBlueLightReduction;
- (void)dealloc;
- (id)init;

@end
