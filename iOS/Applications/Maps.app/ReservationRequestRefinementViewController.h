//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UIPickerViewDelegate-Protocol.h"

@class NSDate, NSDateFormatter, NSString, NSTimeZone, ReservationAnalyticsCaptor, RestaurantReservationAnalyticsBookingSession;
@protocol ReservationRequestRefinementViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ReservationRequestRefinementViewController : UITableViewController <UIPickerViewDelegate>
{
    id <ReservationRequestRefinementViewControllerDelegate> _refinementDelegate;
    NSDateFormatter *_dateFormatter;
    unsigned long long _defaultPartySize;
    NSDate *_defaultDate;
    unsigned long long _minimumPartySize;
    unsigned long long _maximumPartySize;
    unsigned long long _previousPartySize;
    ReservationAnalyticsCaptor *_analyticsCaptor;
    NSTimeZone *_timeZone;
    RestaurantReservationAnalyticsBookingSession *_analyticsBookingSession;
}

@property(retain, nonatomic) RestaurantReservationAnalyticsBookingSession *analyticsBookingSession; // @synthesize analyticsBookingSession=_analyticsBookingSession;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) ReservationAnalyticsCaptor *analyticsCaptor; // @synthesize analyticsCaptor=_analyticsCaptor;
@property(nonatomic) unsigned long long previousPartySize; // @synthesize previousPartySize=_previousPartySize;
@property(nonatomic) unsigned long long maximumPartySize; // @synthesize maximumPartySize=_maximumPartySize;
@property(nonatomic) unsigned long long minimumPartySize; // @synthesize minimumPartySize=_minimumPartySize;
@property(retain, nonatomic) NSDate *defaultDate; // @synthesize defaultDate=_defaultDate;
@property(nonatomic) unsigned long long defaultPartySize; // @synthesize defaultPartySize=_defaultPartySize;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) __weak id <ReservationRequestRefinementViewControllerDelegate> refinementDelegate; // @synthesize refinementDelegate=_refinementDelegate;
- (void).cxx_destruct;
- (id)date;
- (unsigned long long)partySize;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)datePickerChanged;
- (void)stepperChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)configureNavBar;
- (void)configureTableView;
- (void)viewDidLoad;
- (id)initWithDate:(id)arg1 partySize:(unsigned long long)arg2 minimumPartySize:(unsigned long long)arg3 maximumPartySize:(unsigned long long)arg4 analyticsCaptor:(id)arg5 timeZone:(id)arg6 analyticsBookingSession:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

