//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ClientTypeResolverSource.h"

@class MKLocationManager;

__attribute__((visibility("hidden")))
@interface ClientTypeResolverCurrentLocationSource : ClientTypeResolverSource
{
    MKLocationManager *_locationManager;
}

@property(retain, nonatomic) MKLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (id)cachedObject;
- (void)objectWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasObjectWithType:(int)arg1;
- (id)knownTypes;
- (id)initWithLocationManager:(id)arg1;

@end

