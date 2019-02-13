//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface RAPPhotoTableViewCell : UITableViewCell
{
    long long _appearance;
    UIButton *_addAPhotoButton;
    UIImageView *_cameraGlyphImageView;
    UIImageView *_imageView;
    NSLayoutConstraint *_preferredHeightConstraint;
    UIImage *_photo;
}

@property(retain, nonatomic) UIImage *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (void)setupTextLabel;
- (id)initWithAppearance:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)photoButtonFont;
- (double)currentHeight;

@end

