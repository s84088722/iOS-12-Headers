//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

#import <coreroutine/GEONavigationListenerDelegate-Protocol.h>

@class GEONavigationListener, GEONavigationRouteSummary, NSString, RTAuthorizationManager;

@interface RTNavigationManager : RTNotifier <GEONavigationListenerDelegate>
{
    _Bool _monitorRouteSummary;
    GEONavigationListener *_navigationListener;
    GEONavigationRouteSummary *_routeSummary;
    RTAuthorizationManager *_authorizationManager;
}

@property(retain, nonatomic) RTAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(retain, nonatomic) GEONavigationRouteSummary *routeSummary; // @synthesize routeSummary=_routeSummary;
@property(nonatomic) _Bool monitorRouteSummary; // @synthesize monitorRouteSummary=_monitorRouteSummary;
@property(retain, nonatomic) GEONavigationListener *navigationListener; // @synthesize navigationListener=_navigationListener;
- (void).cxx_destruct;
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
- (void)onAuthorizationNotification:(id)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (void)setup;
- (id)initWithAuthorizationManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

