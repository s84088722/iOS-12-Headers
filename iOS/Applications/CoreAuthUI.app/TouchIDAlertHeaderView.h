//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface TouchIDAlertHeaderView : UIView
{
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy) NSString *title;
- (void)shakeTitleView;
@property(copy) NSString *message;
@property(retain) UIImage *image;

@end

