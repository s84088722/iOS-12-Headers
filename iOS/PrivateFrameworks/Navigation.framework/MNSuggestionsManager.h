//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationManagerObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSString;

@interface MNSuggestionsManager : NSObject <MNLocationManagerObserver>
{
    _Bool _locationsAvailable;
    _Bool _changingState;
    unsigned long long _state;
    NSMutableDictionary *_suggestionsStorage;
    NSHashTable *_observers;
}

@property _Bool changingState; // @synthesize changingState=_changingState;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableDictionary *suggestionsStorage; // @synthesize suggestionsStorage=_suggestionsStorage;
@property(nonatomic) _Bool locationsAvailable; // @synthesize locationsAvailable=_locationsAvailable;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_stopListenForDebugTestNotifications;
- (void)_startListenForDebugTestNotifications;
- (void)_addFakeSuggestion:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updateLocationsAvailable;
- (void)_verifyHaveObservers;
- (void)_notifyObserversDidAddSuggestion:(id)arg1;
- (void)_notifyObserversDidUpdateSuggestions;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addSuggestions:(id)arg1;
@property(readonly) NSArray *allSuggestions;
- (_Bool)refreshSuggestions;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

