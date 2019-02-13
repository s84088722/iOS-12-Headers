//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSString, Route;

__attribute__((visibility("hidden")))
@interface RouteAnnotationsConfiguration : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _selectPolyline;
    _Bool _alternateRoutesEnabled;
    _Bool _routeTrafficFeaturesActive;
    NSArray *_routes;
    unsigned long long _selectedRouteIndex;
    unsigned long long _style;
    NSString *_selectedRouteCustomText;
    unsigned long long _routeMarkerOptions;
}

@property(nonatomic) _Bool routeTrafficFeaturesActive; // @synthesize routeTrafficFeaturesActive=_routeTrafficFeaturesActive;
@property(nonatomic) _Bool alternateRoutesEnabled; // @synthesize alternateRoutesEnabled=_alternateRoutesEnabled;
@property(nonatomic, getter=selectsPolyline) _Bool selectPolyline; // @synthesize selectPolyline=_selectPolyline;
@property(nonatomic) unsigned long long routeMarkerOptions; // @synthesize routeMarkerOptions=_routeMarkerOptions;
@property(copy, nonatomic) NSString *selectedRouteCustomText; // @synthesize selectedRouteCustomText=_selectedRouteCustomText;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void).cxx_destruct;
- (void)_copyPropertiesTo:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) Route *selectedRoute;
- (void)_setRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (id)initWithRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (id)initWithRoute:(id)arg1;
- (id)init;

@end

