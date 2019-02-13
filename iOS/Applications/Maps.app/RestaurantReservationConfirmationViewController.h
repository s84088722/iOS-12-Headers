//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ExtensionFlowViewControllerChildController-Protocol.h"
#import "RestaurantReservationsConfirmationHeaderCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ExtensionsActionsFooterView, ExtensionsPrimaryDetailsView, ExtensionsSecondaryDetailsView, INRestaurantReservationUserBooking, MKMapItem, NSArray, NSDateFormatter, NSNumberFormatter, NSString, ReservationAnalyticsCaptor, UITableView;
@protocol RestaurantReservationConfirmationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface RestaurantReservationConfirmationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RestaurantReservationsConfirmationHeaderCellDelegate, ExtensionFlowViewControllerChildController>
{
    INRestaurantReservationUserBooking *_userBooking;
    id <RestaurantReservationConfirmationViewControllerDelegate> _reservationDelegate;
    UITableView *_tableView;
    ExtensionsPrimaryDetailsView *_primaryDetailsView;
    ExtensionsSecondaryDetailsView *_secondaryDetailsView;
    ExtensionsActionsFooterView *_openAppView;
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
    MKMapItem *_mapItem;
    ReservationAnalyticsCaptor *_analyticsCaptor;
    NSString *_appName;
    NSArray *_buttons;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) ReservationAnalyticsCaptor *analyticsCaptor; // @synthesize analyticsCaptor=_analyticsCaptor;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) ExtensionsActionsFooterView *openAppView; // @synthesize openAppView=_openAppView;
@property(retain, nonatomic) ExtensionsSecondaryDetailsView *secondaryDetailsView; // @synthesize secondaryDetailsView=_secondaryDetailsView;
@property(retain, nonatomic) ExtensionsPrimaryDetailsView *primaryDetailsView; // @synthesize primaryDetailsView=_primaryDetailsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <RestaurantReservationConfirmationViewControllerDelegate> reservationDelegate; // @synthesize reservationDelegate=_reservationDelegate;
@property(retain, nonatomic) INRestaurantReservationUserBooking *userBooking; // @synthesize userBooking=_userBooking;
- (void).cxx_destruct;
- (_Bool)useAvailableHeight;
- (_Bool)useExtensionFlowHeader;
- (void)requestRefresh;
- (void)checkUserBookingForRefresh:(id)arg1;
- (id)tableDescriptionForUserBooking:(id)arg1;
- (id)dayAndRestaurantDescriptionForUserBooking:(id)arg1;
- (id)timeAndTableDescriptionForUserBooking:(id)arg1;
- (id)confirmationSubtitleTextForUserBooking:(id)arg1;
- (id)userInfoStringForGuest:(id)arg1;
- (id)headerTextForUserBookingStatus:(unsigned long long)arg1;
- (void)reservationConfirmationHeaderCellAccessoryButtonWasTapped:(id)arg1;
- (void)updateTheme;
- (void)configureHeaderCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)buildSections;
- (void)setupConstraints;
- (void)registerCellClasses;
- (void)configureTableView;
- (void)viewDidLoad;
- (id)initWithUserBooking:(id)arg1 mapItem:(id)arg2 appName:(id)arg3 analyticsCaptor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

