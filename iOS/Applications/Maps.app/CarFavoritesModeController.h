//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarChromeModeController-Protocol.h"

@class CarChromeViewController, CarFavoritesViewController, ChromeViewController, NSString;

__attribute__((visibility("hidden")))
@interface CarFavoritesModeController : UIViewController <CarChromeModeController>
{
    CarChromeViewController *_chromeViewController;
    CarFavoritesViewController *_favoritesViewController;
}

@property(retain, nonatomic) CarFavoritesViewController *favoritesViewController; // @synthesize favoritesViewController=_favoritesViewController;
@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (_Bool)shouldTimeoutAfterDisconnect;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)showsMapView;
- (id)viewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

