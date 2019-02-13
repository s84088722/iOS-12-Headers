//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKUITableViewCell.h>

@class TwoPartTextLabel, UIColor, UILabel;
@protocol EKCellShortener;

@interface PreferencesTwoPartValueCell : EKUITableViewCell
{
    TwoPartTextLabel *_twoPartLabel;
    unsigned int _notifiedShort;
    UILabel *_largePart2TextLabel;
    _Bool _strikeThroughLargeDetailTextLabel;
    _Bool _strikeThroughLargePart2TextLabel;
    id <EKCellShortener> _shortener;
}

@property(nonatomic) _Bool strikeThroughLargePart2TextLabel; // @synthesize strikeThroughLargePart2TextLabel=_strikeThroughLargePart2TextLabel;
@property(nonatomic) _Bool strikeThroughLargeDetailTextLabel; // @synthesize strikeThroughLargeDetailTextLabel=_strikeThroughLargeDetailTextLabel;
@property(nonatomic) __weak id <EKCellShortener> shortener; // @synthesize shortener=_shortener;
- (void).cxx_destruct;
- (void)checkValueWidths;
- (void)shorten;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutSubviewsCore;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
@property(readonly, retain, nonatomic) UIColor *valueColor;
- (id)description;
@property(readonly, retain, nonatomic) UILabel *largePart2TextLabel;
@property(readonly, retain, nonatomic) TwoPartTextLabel *twoPartTextLabel;

@end

