//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface AVTUIAnimatingImageView : UIView
{
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_fadeInImageView;
}

@property(readonly, nonatomic) UIImageView *fadeInImageView; // @synthesize fadeInImageView=_fadeInImageView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

