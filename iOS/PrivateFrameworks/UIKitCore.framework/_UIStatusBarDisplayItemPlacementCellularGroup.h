//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementCellularGroup : _UIStatusBarDisplayItemPlacementGroup
{
    _UIStatusBarDisplayItemPlacement *_signalStrengthPlacement;
    _UIStatusBarDisplayItemPlacement *_warningPlacement;
    _UIStatusBarDisplayItemPlacement *_typePlacement;
    _UIStatusBarDisplayItemPlacement *_namePlacement;
    _UIStatusBarDisplayItemPlacement *_callForwardingPlacement;
    _UIStatusBarDisplayItemPlacement *_badgePlacement;
    NSArray *_placementsAffectedByAirplaneMode;
}

@property(retain, nonatomic) NSArray *placementsAffectedByAirplaneMode; // @synthesize placementsAffectedByAirplaneMode=_placementsAffectedByAirplaneMode;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *badgePlacement; // @synthesize badgePlacement=_badgePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *callForwardingPlacement; // @synthesize callForwardingPlacement=_callForwardingPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *namePlacement; // @synthesize namePlacement=_namePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *typePlacement; // @synthesize typePlacement=_typePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *warningPlacement; // @synthesize warningPlacement=_warningPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement; // @synthesize signalStrengthPlacement=_signalStrengthPlacement;
- (void).cxx_destruct;

@end
