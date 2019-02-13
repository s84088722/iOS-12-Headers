//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIReflectingView.h>

@class UIImage, UIImageView;

@interface MPReflectionImageView : _UIReflectingView
{
    UIImageView *_imageView;
    _Bool _squareImage;
}

+ (double)defaultReflectionHeight;
@property(nonatomic) _Bool squareImage; // @synthesize squareImage=_squareImage;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setReflectionVisible:(_Bool)arg1 withDuration:(float)arg2;
- (void)setFrame:(struct CGRect)arg1 withReflectionHeight:(double)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)setAlbumVisible:(_Bool)arg1 reflectionVisible:(_Bool)arg2;
- (id)albumArtImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

