//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UISegmentedControl, _MKPlaceReservationInfo;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView
{
    UISegmentedControl *_openTimesControl;
    UIButton *_buttonMakeReservation;
    UIButton *_buttonAttribution;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_constraintButtonTopMargin;
    NSLayoutConstraint *_constraintButtonBottomMargin;
    _MKPlaceReservationInfo *_reservationInfo;
}

@property(readonly, nonatomic) _MKPlaceReservationInfo *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)tintColorDidChange;
- (void)_updateTintColor;
- (void)_updateButtonTitleAttributes;
- (void)_updateMutableConstraints;
- (void)_setupImmutableConstraints;
- (void)_updateWithReservationInfo;
- (id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(_Bool)arg2;
- (double)_buttonBottomMargin;
- (double)_buttonTopMargin;
- (id)_buttonFontSmall;
- (id)_buttonFontLarge;
- (void)_actionMakeReservation;
- (id)_newButtonForAttribution:(_Bool)arg1;
@property(retain, nonatomic) NSString *selectedTimeString;
@property(nonatomic) unsigned long long selectedTimeIndex;
- (id)initWithReservationInfo:(id)arg1;

@end

