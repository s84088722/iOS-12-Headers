//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPerformActionBackdropView.h>

@class UIImageView, UIView;

@interface PKPerformActionImageView : PKPerformActionBackdropView
{
    UIImageView *_imageView;
    UIView *_roundedBackground;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_resizeImage:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 imageSize:(struct CGSize)arg3;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2;

@end
