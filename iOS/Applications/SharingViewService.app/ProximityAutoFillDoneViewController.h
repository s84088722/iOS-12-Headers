//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProximityAutoFillBaseViewController.h"

@class NSError, UIButton, UIImageView, UILabel;

@interface ProximityAutoFillDoneViewController : ProximityAutoFillBaseViewController
{
    _Bool _canceled;
    UILabel *_descriptionLabel;
    UIImageView *_imageView;
    UIButton *_reportBugButton;
    UILabel *_titleLabel;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)handleReportButton:(id)arg1;
- (void)handleDoneButtonPressed:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

