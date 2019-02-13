//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKETAProviderObserver-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class MKPlaceSectionRowView, NSArray, NSLayoutConstraint, NSString, NSURL, UIImageView, UILayoutGuide, UIView, _MKDataHeaderModel, _MKLocalizedHoursBuilder, _MKTokenAttributedString, _MKUILabel;
@protocol GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate, _MKPlaceItem;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver>
{
    unsigned long long _layout;
    MKPlaceSectionRowView *_titleOnlySectionView;
    MKPlaceSectionRowView *_labelsSectionView;
    UIImageView *_logoImageView;
    _MKUILabel *_titleOnlyLabel;
    _MKUILabel *_firstLabel;
    _MKUILabel *_secondLabel;
    _MKUILabel *_thirdLabel;
    UIView *_thirdDisplayedLabel;
    NSArray *_constraints;
    UILayoutGuide *_leadingGuide;
    NSURL *_logoURL;
    _MKDataHeaderModel *_dataModel;
    _MKTokenAttributedString *_titleToken;
    _MKTokenAttributedString *_distanceToken;
    _MKTokenAttributedString *_ratingsToken;
    _MKTokenAttributedString *_priceToken;
    _MKTokenAttributedString *_categoryToken;
    _MKTokenAttributedString *_openStateToken;
    _MKTokenAttributedString *_hoursToken;
    _MKTokenAttributedString *_userLocationToken;
    _MKTokenAttributedString *_venueToken;
    _MKTokenAttributedString *_verifiedToken;
    NSLayoutConstraint *_titleTrailingConstraint;
    _Bool _isUserLocation;
    _Bool _optionSmallScreen;
    _Bool _constraintsCreated;
    id <_MKPlaceItem> _placeItem;
    id <GEOTransitLineItem> _lineItem;
    id <MKPlaceCardHeaderViewControllerDelegate> _delegate;
    _MKLocalizedHoursBuilder *_localizedHoursBuilder;
}

+ (double)minimalModeHeight;
@property(retain, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder; // @synthesize localizedHoursBuilder=_localizedHoursBuilder;
@property(nonatomic) __weak id <MKPlaceCardHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
- (void).cxx_destruct;
- (void)infoCardThemeChanged:(id)arg1;
- (void)_contentSizeDidChange;
- (void)setConstraints;
- (void)updateViews;
- (void)_createViews;
- (id)newLabel;
- (_Bool)_mapItemShouldDisplayDistance:(id)arg1;
- (void)ETAProviderUpdated:(id)arg1;
- (void)_loadLogo;
- (_Bool)_isLikelyToShowDistance;
- (void)_setupDatas;
- (id)_localizedHours;
- (id)_openStateString;
- (id)_reviewLabelText;
- (id)_verifiedText;
- (id)_currentTitle;
@property(nonatomic) double contentAlpha;
- (void)hideTitle:(_Bool)arg1;
- (void)updateHeaderTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_commonInit;
- (id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)titleFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

