//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TransitRouteOptions;
@protocol GEOSurchargeOption, GEOSurchargeType;

__attribute__((visibility("hidden")))
@interface TransitOptionsViewControllerDataSource : NSObject
{
    NSArray *_allTransitPrioritizations;
    id <GEOSurchargeOption> _surchargeOptions;
    id <GEOSurchargeType> _userSelectedSurcharge;
    _Bool _showICFareOption;
    NSArray *_sections;
    TransitRouteOptions *_options;
}

- (void).cxx_destruct;
- (_Bool)_compareOptionWithOriginal:(id)arg1 changedDisabledModes:(out _Bool *)arg2 sortOption:(out _Bool *)arg3 surchargeOption:(out _Bool *)arg4 showICFare:(out _Bool *)arg5;
- (_Bool)_isCurrentSelectedTransitModeIndividual;
- (int)_surchargeOptionValueToDisplayAsSelected;
- (id)_localizedNameForPriorityOption:(int)arg1;
- (id)_surchargeForIndexPath:(id)arg1;
- (int)_sortForIndexPath:(id)arg1;
- (long long)_modeForIndexPath:(id)arg1;
- (id)titleForFooterInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (long long)mumberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)normalizedSectionIndex:(long long)arg1;
- (void)setUserSelectedSurcharge:(id)arg1;
@property(retain, nonatomic) TransitRouteOptions *options; // @synthesize options=_options;
- (void)configureWithDisplayHints:(id)arg1;

@end

