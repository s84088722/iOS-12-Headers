//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUComposeReviewViewController.h>

#import "SKUIComposeReviewDelegate-Protocol.h"

@class NSString, SKUIComposeReviewViewController;
@protocol ServiceProductPageComposeReviewViewControllerDelegate;

@interface ServiceProductPageComposeReviewViewController : SUComposeReviewViewController <SKUIComposeReviewDelegate>
{
    id <ServiceProductPageComposeReviewViewControllerDelegate> _parentProductPageViewController;
    SKUIComposeReviewViewController *_underlyingViewController;
}

@property(nonatomic) __weak id <ServiceProductPageComposeReviewViewControllerDelegate> parentProductPageViewController; // @synthesize parentProductPageViewController=_parentProductPageViewController;
- (void).cxx_destruct;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)loadView;
- (void)setClientInterface:(id)arg1;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

