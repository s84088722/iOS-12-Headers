//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EntryPointsCoordinatorDelegate-Protocol.h"
#import "MapsUIContext-Protocol.h"

@class AppCoordinator, AppStateManager, IOSChromeViewController, RichMapsActivity;
@protocol ActionCoordination, NavActionCoordination;

__attribute__((visibility("hidden")))
@interface MapsActionController : NSObject <MapsUIContext, EntryPointsCoordinatorDelegate>
{
    RichMapsActivity *_pendingActivityToApplyAfterNavEnd;
    _Bool _isRestoringState;
    AppCoordinator *_appCoordinator;
}

@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (void).cxx_destruct;
- (void)applyRichMapsActivity:(id)arg1;
- (void)getUserLocationIfneededFor:(id)arg1;
- (void)applyRichMapsActivityOrWaitForLocation:(id)arg1;
- (void)navigationEnded;
- (_Bool)pendingAction;
- (void)entryPointsCoordinator:(id)arg1 didMergedRichMapsActivity:(id)arg2;
- (void)entryPointsCoordinator:(id)arg1 performErrorAction:(id)arg2;
@property(readonly, nonatomic, getter=isRestoringState) _Bool isRestoringState;
@property(readonly, nonatomic) AppStateManager *appStateManager;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) id <ActionCoordination> coordinator;
@property(readonly, nonatomic) IOSChromeViewController *chrome;
- (id)init;
- (void)checkHandlersForActionClasses;

@end
