//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class ICQBannerView, NSDictionary, UIViewController;

@protocol ICQBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(ICQBannerView *)arg1 action:(long long)arg2 parameters:(NSDictionary *)arg3 dismiss:(_Bool)arg4;
- (_Bool)bannerView:(ICQBannerView *)arg1 performAction:(long long)arg2 parameters:(NSDictionary *)arg3;
- (UIViewController *)presentingViewControllerForBannerView:(ICQBannerView *)arg1;
@end

