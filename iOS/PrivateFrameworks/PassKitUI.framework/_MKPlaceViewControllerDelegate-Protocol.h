//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class CNContact, CNLabeledValue, GEOComposedWaypoint, GEOMapServiceTraits, GEOSearchCategory, GEOTransitDecoderData, GEOTransitSuggestedRoute, MKActivityViewController, MKMapItem, NSArray, NSNumber, NSString, _MKPlaceViewController;
@protocol GEOTransitConnectionInfo, MKTransitLineMarker, _MKPlaceItem;

@protocol _MKPlaceViewControllerDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)placeViewControllerDidUpdateHeight:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectParent:(MKMapItem *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectSearchCategory:(GEOSearchCategory *)arg2;
- (int)mapTypeForPlaceViewController:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRemoveMarker:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 hasFavoriteForPlaceItem:(id <_MKPlaceItem>)arg2 result:(void (^)(_Bool))arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 removeFavoriteForPlaceItem:(id <_MKPlaceItem>)arg2 result:(void (^)(NSArray *, NSError *))arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 addFavoriteForPlaceItem:(id <_MKPlaceItem>)arg2 result:(void (^)(NSArray *, NSError *))arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 showTransitIncidents:(NSArray *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)placeViewControllerDidDismiss:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(_Bool))arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didBecomeContact:(CNContact *)arg2;
- (void)placeViewControllerDidSelectMoreInfo:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectWriteAReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOneReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOnePhoto:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedHomePage:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedPhoneNumber:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectShowBrandCard:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectInlineMap:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedAddress:(_MKPlaceViewController *)arg1;
- (_Bool)placeViewController:(_MKPlaceViewController *)arg1 shouldOpenHomePage:(CNLabeledValue *)arg2;
- (void)placeViewControllerDidSelectShareLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectReportAProblem:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectFlyover:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectReroute:(GEOTransitSuggestedRoute *)arg2 withDecoderData:(GEOTransitDecoderData *)arg3 withOrigin:(GEOComposedWaypoint *)arg4;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(NSNumber *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
- (double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
- (GEOMapServiceTraits *)traitsForPlaceViewController:(_MKPlaceViewController *)arg1;
- (MKActivityViewController *)activityViewControllerForPlaceViewController:(_MKPlaceViewController *)arg1;
@end

