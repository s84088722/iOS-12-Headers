//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@class NSArray, NSNumber, ProminentActionButton, RideBookingCurrencyAmount, RidesharingRatingView, RidesharingTippingView, UIImageView, UIStackView;

__attribute__((visibility("hidden")))
@interface ExtensionsFeedbackView : MKViewWithHairline
{
    _Bool _showRatingOptions;
    NSArray *_tippingOptions;
    NSArray *_constraints;
    RidesharingRatingView *_ratingView;
    RidesharingTippingView *_tippingView;
    UIStackView *_stackView;
    ProminentActionButton *_submitButton;
    UIImageView *_headerImageView;
    CDUnknownBlockType _submitHandler;
    NSNumber *_selectedRating;
    RideBookingCurrencyAmount *_selectedTip;
}

@property(retain) RideBookingCurrencyAmount *selectedTip; // @synthesize selectedTip=_selectedTip;
@property(retain) NSNumber *selectedRating; // @synthesize selectedRating=_selectedRating;
@property(copy) CDUnknownBlockType submitHandler; // @synthesize submitHandler=_submitHandler;
@property(retain) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain) ProminentActionButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) RidesharingTippingView *tippingView; // @synthesize tippingView=_tippingView;
@property(retain) RidesharingRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain) NSArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) _Bool showRatingOptions; // @synthesize showRatingOptions=_showRatingOptions;
@property(retain, nonatomic) NSArray *tippingOptions; // @synthesize tippingOptions=_tippingOptions;
- (void).cxx_destruct;
- (void)configureTippingViewWithDelegate:(id)arg1;
- (void)configureSubmitButtonTitle:(id)arg1;
- (void)configureHeaderImage:(id)arg1;
- (void)_submitTapped:(id)arg1;
- (void)_updateSubmitButton;
- (void)_updateConstraints;
- (void)_commonInit;
- (id)initWithSubmitHandler:(CDUnknownBlockType)arg1;

@end

