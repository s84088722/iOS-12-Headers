//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/VUIRentalExpirationLabelDelegate-Protocol.h>

@class NSArray, NSNumber, NSString, TVFocusableTextView, TVImageProxy, UIImage, UIImageView, UIStackView, VUIContentRating, VUILabel, VUIRentalExpirationLabel, VUIRoundButton, VUISeparatorView, _TVImageView;
@protocol VUILibraryProductLockupViewLayout, VUIProductLockupViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIProductLockupView : UIView <VUIRentalExpirationLabelDelegate>
{
    _Bool _contentDescriptionExpanded;
    _Bool _didSetUpViews;
    id <VUILibraryProductLockupViewLayout> _layout;
    TVImageProxy *_coverArtImageProxy;
    UIImage *_coverArtPlaceholderImage;
    VUIRoundButton *_leftButton;
    UIView *_downloadView;
    NSString *_title;
    NSString *_subtitle;
    NSString *_contentDescription;
    VUIContentRating *_contentRating;
    NSString *_genre;
    NSNumber *_duration;
    NSNumber *_releaseYear;
    NSString *_availabilityText;
    NSArray *_badgeResources;
    id <VUIProductLockupViewDelegate> _delegate;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
    _TVImageView *_coverArtImageView;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    TVFocusableTextView *_descriptionTextView;
    UIImageView *_contentRatingImageView;
    VUILabel *_genreLabel;
    VUILabel *_durationLabel;
    VUILabel *_releaseYearLabel;
    VUILabel *_availabilityLabel;
    VUILabel *_genreReleaseDotSeparator;
    UIStackView *_badgesStackView;
    VUIRentalExpirationLabel *_expirationLabel;
    UIImage *_contentRatingImage;
}

+ (id)productLockupViewWithMedia:(id)arg1;
@property(retain, nonatomic) UIImage *contentRatingImage; // @synthesize contentRatingImage=_contentRatingImage;
@property(retain, nonatomic) VUIRentalExpirationLabel *expirationLabel; // @synthesize expirationLabel=_expirationLabel;
@property(nonatomic) _Bool didSetUpViews; // @synthesize didSetUpViews=_didSetUpViews;
@property(nonatomic) _Bool contentDescriptionExpanded; // @synthesize contentDescriptionExpanded=_contentDescriptionExpanded;
@property(retain, nonatomic) UIStackView *badgesStackView; // @synthesize badgesStackView=_badgesStackView;
@property(retain, nonatomic) VUILabel *genreReleaseDotSeparator; // @synthesize genreReleaseDotSeparator=_genreReleaseDotSeparator;
@property(retain, nonatomic) VUILabel *availabilityLabel; // @synthesize availabilityLabel=_availabilityLabel;
@property(retain, nonatomic) VUILabel *releaseYearLabel; // @synthesize releaseYearLabel=_releaseYearLabel;
@property(retain, nonatomic) VUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) VUILabel *genreLabel; // @synthesize genreLabel=_genreLabel;
@property(retain, nonatomic) UIImageView *contentRatingImageView; // @synthesize contentRatingImageView=_contentRatingImageView;
@property(retain, nonatomic) TVFocusableTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _TVImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) VUISeparatorView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) __weak id <VUIProductLockupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *badgeResources; // @synthesize badgeResources=_badgeResources;
@property(copy, nonatomic) NSString *availabilityText; // @synthesize availabilityText=_availabilityText;
@property(copy, nonatomic) NSNumber *releaseYear; // @synthesize releaseYear=_releaseYear;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) VUIContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(copy, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) VUIRoundButton *leftButton; // @synthesize leftButton=_leftButton;
@property(readonly, nonatomic) UIImage *coverArtPlaceholderImage; // @synthesize coverArtPlaceholderImage=_coverArtPlaceholderImage;
@property(readonly, nonatomic) TVImageProxy *coverArtImageProxy; // @synthesize coverArtImageProxy=_coverArtImageProxy;
@property(retain, nonatomic) id <VUILibraryProductLockupViewLayout> layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (struct CGSize)_layoutForStacked:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutForCompact:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutForCategoryAccessibility:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)_configureDotSeparator;
- (void)_configureBadgeStackView;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;
- (struct CGSize)_sizeOfDescriptionLabel:(double)arg1;
- (id)_contentDescriptionAttributedString;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)_configureViewElementsForAX;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setCoverArtImageProxy:(id)arg1 placeholderImage:(id)arg2;
- (void)updateWithMediaEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

