//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CarHairlineView, CarSearchTableViewCellModel, MKStarRatingView, NSArray, NSTimer, TwoPartDistanceLabel, UIImageView, UILabel, UIView, _MKRouteETA;

__attribute__((visibility("hidden")))
@interface CarSearchTableViewCell : UITableViewCell
{
    NSArray *_customConstraints;
    UIView *_titleContainer;
    UIView *_accessoryContainer;
    _Bool _calculatingRouteETA;
    NSTimer *_delayedCalculatingTimer;
    _Bool _destinationBehind;
    long long _style;
    CarSearchTableViewCellModel *_model;
    _MKRouteETA *_routeETA;
    double _distance;
    UILabel *_firstLineLabel;
    UILabel *_secondLineLabel;
    UILabel *_lastLineLabel;
    MKStarRatingView *_ratingView;
    UIImageView *_arrowImageView;
    TwoPartDistanceLabel *_detourDistanceLabel;
    CarHairlineView *_hairlineView;
}

+ (id)reuseIdentifier;
+ (id)distanceFormatter;
+ (id)defaultBackgroundColor;
@property(retain, nonatomic) CarHairlineView *hairlineView; // @synthesize hairlineView=_hairlineView;
@property(retain, nonatomic) TwoPartDistanceLabel *detourDistanceLabel; // @synthesize detourDistanceLabel=_detourDistanceLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MKStarRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UILabel *lastLineLabel; // @synthesize lastLineLabel=_lastLineLabel;
@property(retain, nonatomic) UILabel *secondLineLabel; // @synthesize secondLineLabel=_secondLineLabel;
@property(retain, nonatomic) UILabel *firstLineLabel; // @synthesize firstLineLabel=_firstLineLabel;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool destinationBehind; // @synthesize destinationBehind=_destinationBehind;
@property(retain, nonatomic) _MKRouteETA *routeETA; // @synthesize routeETA=_routeETA;
@property(retain, nonatomic) CarSearchTableViewCellModel *model; // @synthesize model=_model;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (double)_detourDistanceToMapItem:(id)arg1;
- (_Bool)_shouldShowDetourDistance;
- (_Bool)_shouldShowArrow;
- (void)setRouteETA:(id)arg1 animated:(_Bool)arg2;
- (void)_refreshRouteETAIfCalculating;
- (void)expectUpdatedRouteETA;
- (void)setDestinationBehind:(_Bool)arg1 atDistance:(double)arg2 animated:(_Bool)arg3;
- (void)_showOrHideAccessoryAnimated:(_Bool)arg1;
- (_Bool)_shouldShowAccessory;
- (void)_setAccessoryView:(id)arg1;
- (void)_setStyle:(long long)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_refreshForCurrentState;
- (void)updateConstraints;
- (id)composedSubtitle;
- (void)updateFromModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

