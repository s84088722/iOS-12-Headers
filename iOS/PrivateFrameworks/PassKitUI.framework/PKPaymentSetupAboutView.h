//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIScrollView;

@interface PKPaymentSetupAboutView : UIView
{
    UILabel *_aboutTextLabel;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithBodyText:(id)arg1 detailButtonText:(id)arg2;
- (id)initWithBodyText:(id)arg1;

@end

