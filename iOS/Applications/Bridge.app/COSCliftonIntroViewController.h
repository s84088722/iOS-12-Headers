//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COSOptinViewController.h"

@class COSCliftonFeatureView;

@interface COSCliftonIntroViewController : COSOptinViewController
{
    COSCliftonFeatureView *_features;
}

+ (_Bool)controllerNeedsToRun;
+ (_Bool)_supportsLowBPMDetectionForDevice:(id)arg1;
@property(retain, nonatomic) COSCliftonFeatureView *features; // @synthesize features=_features;
- (void).cxx_destruct;
- (double)suggestedChoicePillDetailTextLabelVerticalOffset;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)noHWDetailOffset;
- (double)noHWImageOffset;
- (double)_horizontalPadding;
- (double)alternateButtonDetailTextPaddingWithImage;
- (void)alternateButtonPressed:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (_Bool)legacyButtonStyles;
- (id)alternateButtonString;
- (id)detailTitleString;
- (id)suggestedButtonTitle;
- (id)detailString;
- (id)imageResource;
- (id)titleAttributedString;
- (id)init;

@end

