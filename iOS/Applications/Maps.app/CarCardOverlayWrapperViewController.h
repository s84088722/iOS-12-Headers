//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardStyleProviding-Protocol.h"
#import "CarFocusOrderCollection-Protocol.h"

@class CarCardOverlayContainerView, NSArray, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface CarCardOverlayWrapperViewController : UIViewController <CarFocusOrderCollection, CarCardStyleProviding>
{
    NSArray *_overlayItems;
    CarCardOverlayContainerView *_primaryContainerView;
    CarCardOverlayContainerView *_secondaryContainerView;
    NSLayoutConstraint *_constraintSecondaryViewVisible;
    NSLayoutConstraint *_constraintSecondaryViewHidden;
    _Bool _reloading;
    _Bool _needsReload;
    _Bool _reloadAnimated;
    _Bool _transitioning;
}

@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (void).cxx_destruct;
- (CDStruct_87f3a021)validateCarCardLayout:(CDStruct_87f3a021)arg1;
- (id)maskImageForCarCardLayout:(CDStruct_87f3a021)arg1 scale:(double)arg2;
- (id)backgroundImageForCarCardLayout:(CDStruct_87f3a021)arg1 controlState:(unsigned long long)arg2 scale:(double)arg3 nightMode:(_Bool)arg4;
- (id)focusOrderSubItems;
- (id)preferredFocusEnvironments;
- (void)_applyTransitioningAttributesIfNeeded;
- (void)_reloadItems;
- (void)_reloadItemsAnimated:(_Bool)arg1;
- (void)setOverlayItems:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithOverlayItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

