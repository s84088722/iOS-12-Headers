//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKPeerPaymentAccountResolutionController, PKPeerPaymentContactResolver, UIActivityIndicatorView, UILabel;

@interface PKPassPeerPaymentAccountResolutionView : UIView
{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    PKContinuousButton *_button;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_bottomRule;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    unsigned long long _peerPaymentAccountResolution;
    PKPeerPaymentContactResolver *_contactResolver;
    _Bool _showSpinner;
}

- (void).cxx_destruct;
- (id)_contactResolver;
- (void)_showSpinner:(_Bool)arg1;
- (id)_bottomRule;
- (id)_activityIndicator;
- (id)_button;
- (id)_bodyLabel;
- (id)_titleLabel;
- (_Bool)_displaysTitleLabel;
- (void)_handleButtonPressed:(id)arg1;
- (id)_buttonText;
- (id)_bodyText;
- (id)_titleText;
- (void)layoutSubviews;
- (id)initWithAccountResolutionController:(id)arg1;

@end

