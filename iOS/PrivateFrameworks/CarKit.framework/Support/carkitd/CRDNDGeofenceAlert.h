//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRBulletin.h"

@interface CRDNDGeofenceAlert : CRBulletin
{
    _Bool _geofenceEnter;
}

@property(nonatomic) _Bool geofenceEnter; // @synthesize geofenceEnter=_geofenceEnter;
- (unsigned long long)maxDisplayedBulletins;
- (id)defaultAction;
- (id)message;
- (id)title;
- (id)initWithEnterGeofence:(_Bool)arg1;

@end

