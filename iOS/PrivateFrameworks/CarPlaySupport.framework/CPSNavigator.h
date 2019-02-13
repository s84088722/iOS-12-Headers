//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/CARNavigationOwnershipManagerDelegate-Protocol.h>
#import <CarPlaySupport/CPNavigationSessionProviding-Protocol.h>

@class CARNavigationOwnershipManager, CPTrip, NSHashTable, NSString;
@protocol CARNavigationOwnershipManagerDelegate;

@interface CPSNavigator : NSObject <CARNavigationOwnershipManagerDelegate, CPNavigationSessionProviding>
{
    _Bool _completed;
    CPTrip *_trip;
    id <CARNavigationOwnershipManagerDelegate> _navigationOwnershipDelegate;
    NSHashTable *_displayDelegates;
    CARNavigationOwnershipManager *_navigationOwnershipManager;
}

@property(retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager; // @synthesize navigationOwnershipManager=_navigationOwnershipManager;
@property(retain, nonatomic) NSHashTable *displayDelegates; // @synthesize displayDelegates=_displayDelegates;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) __weak id <CARNavigationOwnershipManagerDelegate> navigationOwnershipDelegate; // @synthesize navigationOwnershipDelegate=_navigationOwnershipDelegate;
@property(readonly, nonatomic) CPTrip *trip; // @synthesize trip=_trip;
- (void).cxx_destruct;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2;
- (void)removeDisplayDelegate:(id)arg1;
- (void)addDisplayDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

