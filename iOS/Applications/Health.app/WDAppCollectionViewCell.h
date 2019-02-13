//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSDictionary, NSLayoutConstraint, UIImageView, UILabel;

@interface WDAppCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    unsigned long long _displayMode;
    UIImageView *_icon;
    NSLayoutConstraint *_iconTopConstraint;
    NSLayoutConstraint *_priceLabelToBottomConstraint;
    NSDictionary *_storeData;
}

+ (double)_priceToBottomHeightWithDisplayMode:(unsigned long long)arg1;
+ (double)_topToIconHeightWithDisplayMode:(unsigned long long)arg1;
+ (double)heightWithIconSize:(struct CGSize)arg1 displayMode:(unsigned long long)arg2;
+ (id)reuseIdentifier;
@property(retain, nonatomic) NSDictionary *storeData; // @synthesize storeData=_storeData;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

