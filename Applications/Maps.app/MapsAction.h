//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsAction : NSObject
{
    _Bool _needsUserLocation;
    double _userLocationDesiredAccuracy;
}

@property(readonly, nonatomic) double userLocationDesiredAccuracy; // @synthesize userLocationDesiredAccuracy=_userLocationDesiredAccuracy;
@property(readonly, nonatomic) _Bool needsUserLocation; // @synthesize needsUserLocation=_needsUserLocation;
@property(readonly, nonatomic) _Bool shouldResetUI;
@property(readonly, nonatomic) _Bool forceEndNavigation;
@property(readonly, nonatomic) _Bool isCompatibleWithNavigation;
- (void)setUserLocationAccuracy:(double)arg1;

@end

