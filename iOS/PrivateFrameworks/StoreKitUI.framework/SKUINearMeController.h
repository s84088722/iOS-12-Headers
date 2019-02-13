//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/CLLocationManagerDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>

@class CLLocationManager, NSArray, NSDictionary, NSString, SKUIClientContext, SSLookupRequest;
@protocol OS_dispatch_source;

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver>
{
    NSArray *_items;
    long long _status;
    _Bool _isMonitoring;
    SSLookupRequest *_lookupRequest;
    CLLocationManager *_locationManager;
    int _authorizationStatus;
    NSObject<OS_dispatch_source> *_locationTimeoutTimer;
    long long _locationTimeoutCount;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSDictionary *_responseDictionary;
    SKUIClientContext *_clientContext;
}

+ (id)sharedController;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)_disableNearMe;
- (void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(long long)arg4;
- (void)_refreshTimeout;
- (void)_stopRefreshTimer;
- (void)_startRefreshTimer;
- (void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_lookupItemsForLocation:(id)arg1;
- (void)_monitorLocationTimeout;
- (void)_stopMonitoringLocation;
- (void)_startMonitoringLocation;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (_Bool)isNearMeLocationStatusEnabled;
@property(readonly, nonatomic) NSArray *items;
- (void)disable;
- (void)getItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
