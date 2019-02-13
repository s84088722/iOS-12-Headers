//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSURLSession, PKShapeView, UIImageView;

@interface PKContinuityPaymentFaviconView : UIView
{
    NSURLSession *_urlSession;
    UIImageView *_macImageView;
    UIImageView *_imageView;
    UIView *_monogramView;
    UIView *_imageShadowView;
    PKShapeView *_maskView;
    NSString *_modelIdentifier;
    NSString *_merchantName;
}

- (void).cxx_destruct;
- (double)_iconVerticalOffset;
- (void)_loadMacImage;
- (void)_setupMonogram;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 URL:(id)arg2 modelIdentifier:(id)arg3 merchantName:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

