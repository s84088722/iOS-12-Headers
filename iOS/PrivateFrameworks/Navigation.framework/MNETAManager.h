//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOETAUpdaterDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOETATrafficUpdateResponse, GEOETAUpdater, NSArray, NSMapTable, NSString;
@protocol MNETAManagerDelegate;

@interface MNETAManager : NSObject <GEOETAUpdaterDelegate>
{
    id <MNETAManagerDelegate> _delegate;
    GEOETAUpdater *_etaUpdater;
    NSArray *_routes;
    NSMapTable *_etaRoutesTable;
    double _requestInterval;
    double _debugInitialRequestDelay;
    GEOETATrafficUpdateResponse *_currentResponse;
    GEOApplicationAuditToken *_auditToken;
}

@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) double debugInitialRequestDelay; // @synthesize debugInitialRequestDelay=_debugInitialRequestDelay;
@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) __weak id <MNETAManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (_Bool)_updateRouteWithETATrafficUpdateResponse:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3;
- (id)etaRouteForRoute:(id)arg1;
- (void)updateUserLocation:(id)arg1 routeMatch:(id)arg2;
- (void)stopUpdateRequests;
- (void)startUpdateRequests;
@property(nonatomic) unsigned long long maxAlternateRoutesCount;
@property(nonatomic) double debugBackgroundTimeWindow;
@property(copy, nonatomic) NSString *requestingAppIdentifier;
- (void)reset;
- (void)dealloc;
- (id)initWithDestination:(id)arg1 routeAttributes:(id)arg2 tracePlayer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

