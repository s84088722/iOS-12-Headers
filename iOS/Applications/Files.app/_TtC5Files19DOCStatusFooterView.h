//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ICQBannerViewDelegate-Protocol.h"
#import "_TtP5Files25CloudStatsTrackerListener_-Protocol.h"

@interface _TtC5Files19DOCStatusFooterView : UIView <_TtP5Files25CloudStatsTrackerListener_, ICQBannerViewDelegate>
{
    // Error parsing type: , name: statsTracker
    // Error parsing type: , name: quotaLabel
    // Error parsing type: , name: updateStatusLabel
    // Error parsing type: , name: appearance
    // Error parsing type: , name: warningViewContainer
    // Error parsing type: , name: currentQuotaWarningBannerView
    // Error parsing type: , name: numberOfItems
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateAppearance:(id)arg1;
- (void)cloudStatsDidChange;
- (id)presentingViewControllerForBannerView:(id)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

