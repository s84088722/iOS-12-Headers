//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class NSString, PKContinuousImageView, UIImage, UILabel;

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell
{
    NSString *_postalAddressTitle;
    NSString *_postalAddressString;
    UIImage *_mapSnapshotImage;
    UIImage *_mapPlaceholderImage;
    UILabel *_titleLabel;
    UILabel *_postalAddressLabel;
    PKContinuousImageView *_mapSnapshotImageView;
    struct CGSize _snapshotSize;
}

@property(retain, nonatomic) PKContinuousImageView *mapSnapshotImageView; // @synthesize mapSnapshotImageView=_mapSnapshotImageView;
@property(retain, nonatomic) UILabel *postalAddressLabel; // @synthesize postalAddressLabel=_postalAddressLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize snapshotSize; // @synthesize snapshotSize=_snapshotSize;
@property(retain, nonatomic) UIImage *mapPlaceholderImage; // @synthesize mapPlaceholderImage=_mapPlaceholderImage;
@property(retain, nonatomic) UIImage *mapSnapshotImage; // @synthesize mapSnapshotImage=_mapSnapshotImage;
@property(retain, nonatomic) NSString *postalAddressString; // @synthesize postalAddressString=_postalAddressString;
@property(retain, nonatomic) NSString *postalAddressTitle; // @synthesize postalAddressTitle=_postalAddressTitle;
- (void).cxx_destruct;
- (void)_updateImageViewBoundsOrigin;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

