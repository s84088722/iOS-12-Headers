//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIImage, UIImageView, UILabel;

@interface AKBasicLoginContentViewControllerContainerView : UIView
{
    UIImage *_bannerImage;
    NSString *_titleText;
    NSString *_messageText;
    UIImageView *_bannerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSArray *_activeConstraints;
}

@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)_configureMessageLabel;
- (void)_configureBannerImage;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

