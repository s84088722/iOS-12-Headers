//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/UINavigationControllerDelegate-Protocol.h>

@class ISDialog, SKUIComposeReviewViewController, SKUIReviewMetadata;

@protocol SKUIComposeReviewDelegate <UINavigationControllerDelegate>

@optional
- (void)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 presentDialog:(ISDialog *)arg2;
- (void)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 didSubmitWithEdit:(_Bool)arg2;
- (void)composeReviewViewControllerDidSubmit:(SKUIComposeReviewViewController *)arg1;
- (void)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 didFailWithDialog:(ISDialog *)arg2;
- (void)composeReviewViewControllerDidCancel:(SKUIComposeReviewViewController *)arg1;
- (_Bool)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 shouldSubmitReview:(SKUIReviewMetadata *)arg2;
@end

