//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProximityAutoFillBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SVSHighlightButton, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface ProximityAutoFillStartViewController : ProximityAutoFillBaseViewController <UIGestureRecognizerDelegate>
{
    SVSHighlightButton *_acceptButton;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_detailLabel;
    UIView *_progressView;
    UIButton *_reportBugButton;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleReportBugButton:(id)arg1;
- (void)handleMainButtonPressed:(id)arg1;
- (void)handleDismissButtonPressed:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

