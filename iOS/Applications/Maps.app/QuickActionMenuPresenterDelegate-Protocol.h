//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOMapServiceTraits, QuickActionMenuPresenter, UIView, VKLabelMarker;
@protocol PersonalizedItem;

@protocol QuickActionMenuPresenterDelegate <NSObject>
- (_Bool)shouldQuickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 showDirectionsToPlace:(id <PersonalizedItem>)arg2;
- (void)quickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 selectedViewTransitLinesOnMap:(VKLabelMarker *)arg2;
- (void)quickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 selectedRemoveDroppedPinOf:(id <PersonalizedItem>)arg2;
- (GEOMapServiceTraits *)mapServiceTraitsForQuickActionPresenter:(QuickActionMenuPresenter *)arg1;
- (_Bool)shouldQuickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 presentAtLocation:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (void)quickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 selectedShowPlaceCard:(id <PersonalizedItem>)arg2;
- (void)quickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 selectedShareLocationOf:(id <PersonalizedItem>)arg2;
- (void)quickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 selectedViewWebsiteFor:(id <PersonalizedItem>)arg2;
- (void)quickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 selectedCall:(id <PersonalizedItem>)arg2;
- (void)quickActionMenuPresenter:(QuickActionMenuPresenter *)arg1 selectedDirectionsTo:(id <PersonalizedItem>)arg2;

@optional
- (void)quickActionMenuWillPresent:(QuickActionMenuPresenter *)arg1;
@end
