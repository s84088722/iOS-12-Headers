//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep, NavSignManeuverGuidanceInfo;

__attribute__((visibility("hidden")))
@interface NavSignViewModel : NSObject
{
    GEOComposedRouteStep *_step;
    NavSignManeuverGuidanceInfo *_maneuverInfo;
    struct _NSRange _stepIndexRange;
}

@property(retain, nonatomic) NavSignManeuverGuidanceInfo *maneuverInfo; // @synthesize maneuverInfo=_maneuverInfo;
@property(nonatomic) struct _NSRange stepIndexRange; // @synthesize stepIndexRange=_stepIndexRange;
@property(retain, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
- (void).cxx_destruct;

@end

