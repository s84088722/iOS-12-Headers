//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ReservationLabelLayoutDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, ReservationLabel, UIButton, UILabel;
@protocol RestaurantReservationsConfirmationHeaderCellDelegate;

__attribute__((visibility("hidden")))
@interface RestaurantReservationsConfirmationHeaderCell : UITableViewCell <ReservationLabelLayoutDelegate>
{
    _Bool _automaticallyHidesChevron;
    unsigned long long _subtitleType;
    UILabel *_mainLabel;
    ReservationLabel *_subLabel;
    id <RestaurantReservationsConfirmationHeaderCellDelegate> _actionDelegate;
    NSLayoutConstraint *_buttonBottomConstraint;
    NSLayoutConstraint *_mainToSublabelConstraint;
    UIButton *_accessoryButton;
}

@property(readonly, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) NSLayoutConstraint *mainToSublabelConstraint; // @synthesize mainToSublabelConstraint=_mainToSublabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonBottomConstraint; // @synthesize buttonBottomConstraint=_buttonBottomConstraint;
@property(nonatomic) _Bool automaticallyHidesChevron; // @synthesize automaticallyHidesChevron=_automaticallyHidesChevron;
@property(nonatomic) __weak id <RestaurantReservationsConfirmationHeaderCellDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) ReservationLabel *subLabel; // @synthesize subLabel=_subLabel;
@property(readonly, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) unsigned long long subtitleType; // @synthesize subtitleType=_subtitleType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessoryButtonTitle;
- (void)updateConstraints;
- (void)accessoryButtonTapped:(id)arg1;
- (void)initConstraints;
- (void)updateSubtitleLabel;
- (_Bool)shouldBeSelectable;
- (void)reservationLabelDidLayout:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

