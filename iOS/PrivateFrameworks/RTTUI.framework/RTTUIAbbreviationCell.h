//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIVisualEffectView;

@interface RTTUIAbbreviationCell : UICollectionViewCell
{
    UIVisualEffectView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
    UILabel *_abbreviation;
    UILabel *_hint;
}

@property(retain, nonatomic) UILabel *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) UILabel *abbreviation; // @synthesize abbreviation=_abbreviation;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (id)abbreviationText;
- (void)setAbbreviationData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

