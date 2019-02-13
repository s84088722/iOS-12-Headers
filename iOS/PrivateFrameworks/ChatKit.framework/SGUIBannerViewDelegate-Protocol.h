//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNContactViewController, EKEventEditViewController, NSData, SGRealtimeContact, SGRealtimeEvent, SGUIBannerView, UIViewController;

@protocol SGUIBannerViewDelegate <NSObject>
- (UIViewController *)viewControllerForPresentingFromSuggestionsBannerView:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewDidFinish:(SGUIBannerView *)arg1;

@optional
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 wantsToPushMixedSuggestionsViewController:(UIViewController *)arg2;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 didTapAddForEvent:(SGRealtimeEvent *)arg2 wantsToPresentEventViewController:(EKEventEditViewController *)arg3;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 didTapAddForContact:(SGRealtimeContact *)arg2 wantsToPresentContactViewController:(CNContactViewController *)arg3;
- (void)suggestionsBannerViewDidDismiss:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewDidDismissViewController:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewWillDismissViewController:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewDidPresentViewController:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewWillPresentViewController:(SGUIBannerView *)arg1;
- (NSData *)documentForSuggestionsBannerView:(SGUIBannerView *)arg1;
@end

