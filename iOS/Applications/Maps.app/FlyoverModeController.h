//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StackedChromeModeController-Protocol.h"

@class FlyoverContainerViewController, IOSChromeViewController, MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface FlyoverModeController : NSObject <StackedChromeModeController>
{
    _Bool _wasShowingCompass;
    _Bool _wasShowingScale;
    _Bool _wasShowingUserLocation;
    MKMapItem *_mapItem;
    IOSChromeViewController *_chromeViewController;
    FlyoverContainerViewController *_containerViewController;
}

@property(nonatomic) _Bool wasShowingUserLocation; // @synthesize wasShowingUserLocation=_wasShowingUserLocation;
@property(nonatomic) _Bool wasShowingScale; // @synthesize wasShowingScale=_wasShowingScale;
@property(nonatomic) _Bool wasShowingCompass; // @synthesize wasShowingCompass=_wasShowingCompass;
@property(retain, nonatomic) FlyoverContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak IOSChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)modeWillDisappear:(_Bool)arg1;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (id)viewController;
- (_Bool)showsMapView;
- (id)mapViewDelegate;
- (id)transitionControllerForPopToMode:(id)arg1;
- (id)transitionControllerForPushFromMode:(id)arg1;
- (_Bool)usesDefaultTransitions;
- (id)actionCoordinator;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

