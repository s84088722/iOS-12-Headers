//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransitDirectionsIconCell.h"

@class MKArtworkImageView, MKMultiPartLabel, MapsLargerHitTargetButton, NSLayoutConstraint, _MKUILabel;
@protocol TransitDirectionsInstructionsCellDelegate;

__attribute__((visibility("hidden")))
@interface TransitDirectionsInstructionsCell : TransitDirectionsIconCell
{
    _MKUILabel *_primaryLabel;
    NSLayoutConstraint *_primaryLabelTrailingToContentView;
    MKMultiPartLabel *_secondaryLabel;
    MKMultiPartLabel *_tertiaryLabel;
    NSLayoutConstraint *_topToPrimaryBaselineConstraint;
    NSLayoutConstraint *_primaryBaselineToSecondaryBaselineConstraint;
    NSLayoutConstraint *_platformArtworkBottomToBottomConstraint;
    NSLayoutConstraint *_primaryLabelTrailingToStationArtworkLeadingConstraint;
    NSLayoutConstraint *_primaryLabelLastBaselineToBottomConstraint;
    NSLayoutConstraint *_platformArtworkTrailingToSecondaryLabelLeadingConstraint;
    NSLayoutConstraint *_secondaryLabelLeadingToPrimaryLabelLeadingConstraint;
    NSLayoutConstraint *_secondaryLabelFirstBaselineToPlatformArtworkBottomConstraint;
    NSLayoutConstraint *_secondaryLabelLastBaselineToBottomConstraint;
    NSLayoutConstraint *_secondaryLabelTrailingToStationArtworkLeadingConstraint;
    NSLayoutConstraint *_secondaryLabelTrailingToContentView;
    NSLayoutConstraint *_tertiaryLabelLeadingToSecondaryLabelLeadingConstraint;
    NSLayoutConstraint *_tertiaryLabelTrailingtToSecondaryLabelTrailingConstraint;
    NSLayoutConstraint *_secondaryLabelLastBaselineToTertiaryLabelFirstBaselineConstraint;
    NSLayoutConstraint *_tertiaryLabelLastBaselineToBottomConstraint;
    NSLayoutConstraint *_centeredYIconImageViewConstraint;
    _Bool _createdPostConstraints;
    _Bool _emptySecondaryInstruction;
    MKArtworkImageView *_stationArtworkImageView;
    MKArtworkImageView *_platformArtworkImageView;
    MapsLargerHitTargetButton *_detailButton;
    id <TransitDirectionsInstructionsCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TransitDirectionsInstructionsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MapsLargerHitTargetButton *detailButton; // @synthesize detailButton=_detailButton;
@property(readonly, nonatomic) MKArtworkImageView *platformArtworkImageView; // @synthesize platformArtworkImageView=_platformArtworkImageView;
@property(readonly, nonatomic) MKArtworkImageView *stationArtworkImageView; // @synthesize stationArtworkImageView=_stationArtworkImageView;
@property(readonly, nonatomic) MKMultiPartLabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(readonly, nonatomic) MKMultiPartLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) _MKUILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (void)setNavigationState:(long long)arg1;
- (id)_textAttributesForInstructionType:(long long)arg1;
- (id)_labelForInstructionType:(long long)arg1;
- (id)_fontForInstructionType:(long long)arg1;
- (double)_availableWidthForInstructionType:(long long)arg1;
- (id)_layoutItemForInstructionType:(long long)arg1;
- (void)configureWithItem:(id)arg1;
- (void)_detailButtonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (double)_minPlatformArtworkBottomToBottomDistance;
- (double)_secondaryFirstBaselineToBottomPlatformArtworkDistance;
- (double)_secondaryBaselineToTertiaryBaselineDistance;
- (double)_primaryBaselineToSecondaryBaselineDistance;
- (double)_topToPrimaryBaselineDistance;
- (void)_updateExpandButton;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)_initialConstraints;
- (void)prepareForReuse;
- (void)_createSubviews;

@end

