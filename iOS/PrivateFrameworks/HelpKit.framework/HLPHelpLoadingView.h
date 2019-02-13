//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;
@protocol HLPHelpLoadingViewDelegate;

@interface HLPHelpLoadingView : UIView
{
    UIImageView *_errorImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    id <HLPHelpLoadingViewDelegate> _delegate;
    UILabel *_errorTitleLabel;
    UILabel *_errorMessageLabel;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(nonatomic) __weak id <HLPHelpLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showHelpBookInfo;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)showDefaultErrorMessage;
- (void)showNoConnectionErrorMessage;
- (void)removeErrorView;
- (void)showActivityIndicator:(_Bool)arg1;
- (id)init;

@end

