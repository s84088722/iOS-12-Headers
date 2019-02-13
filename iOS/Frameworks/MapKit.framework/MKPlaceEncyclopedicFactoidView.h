//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView
{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    _MKUILabel *_keyLabel;
    _MKUILabel *_valueLabel;
}

@property(retain, nonatomic) _MKUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) _MKUILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)setUpConstraints;
- (id)_valueLabelWithString:(id)arg1;
- (id)_keyLabelWithString:(id)arg1;
- (id)initWithTextItem:(id)arg1;

@end

