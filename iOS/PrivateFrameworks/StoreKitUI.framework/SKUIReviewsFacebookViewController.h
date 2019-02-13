//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;
@protocol SKUIReviewsFacebookViewControllerDelegate;

@interface SKUIReviewsFacebookViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    id <SKUIReviewsFacebookViewControllerDelegate> _delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIReviewsFacebookView *_facebookView;
}

@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;
@property(nonatomic) __weak id <SKUIReviewsFacebookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadFacebookView;
- (void)_changeStatusToUserLiked:(_Bool)arg1;
- (void)_toggleLike:(id)arg1;
- (void)loadView;
- (void)dealloc;

@end

