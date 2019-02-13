//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings
{
    _Bool _allowSwipeDown;
    double _minimumDimmingOpacity;
    PXSwipeDownSettings *_swipeDownSettings;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(retain, nonatomic) PXSwipeDownSettings *swipeDownSettings; // @synthesize swipeDownSettings=_swipeDownSettings;
@property(nonatomic) double minimumDimmingOpacity; // @synthesize minimumDimmingOpacity=_minimumDimmingOpacity;
@property(nonatomic) _Bool allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end

