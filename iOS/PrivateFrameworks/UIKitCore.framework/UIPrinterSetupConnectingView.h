//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupConnectingView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    double _presentationTime;
}

@property(nonatomic) double presentationTime; // @synthesize presentationTime=_presentationTime;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1 active:(_Bool)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)presentView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

