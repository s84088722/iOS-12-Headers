//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class NSAttributedString, NSMutableArray, NSString, PKPaymentAuthorizationLayout, UIImage, UIImageView, UILabel, UIView;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell
{
    PKPaymentAuthorizationLayout *_layout;
    UILabel *_labelView;
    NSMutableArray *_valueViews;
    UIView *_separatorView;
    UIImageView *_arrowView;
    UIImageView *_alertView;
    UIImageView *_labelImageView;
    NSMutableArray *_constraints;
    _Bool _constraintsDirty;
    _Bool _showsDisclosure;
    _Bool _showsSeperator;
    NSAttributedString *_label;
    UIImage *_labelImage;
    NSString *_accessibilityLabel;
    NSAttributedString *_value;
}

@property(nonatomic) _Bool showsSeperator; // @synthesize showsSeperator=_showsSeperator;
@property(nonatomic) _Bool showsDisclosure; // @synthesize showsDisclosure=_showsDisclosure;
@property(copy, nonatomic) NSAttributedString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) UIImage *labelImage; // @synthesize labelImage=_labelImage;
@property(copy, nonatomic) NSAttributedString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (id)addValue:(id)arg1 type:(unsigned long long)arg2;
- (id)colorForValueType:(unsigned long long)arg1;
- (id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2;
- (id)_createValueView;
- (void)_createSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;

@end

