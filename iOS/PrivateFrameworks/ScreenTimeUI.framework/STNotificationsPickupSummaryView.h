//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class STUsageReport, UIStackView;

@interface STNotificationsPickupSummaryView : UIView
{
    STUsageReport *_usageReport;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) STUsageReport *usageReport; // @synthesize usageReport=_usageReport;
- (void).cxx_destruct;
- (id)_attributedString:(id)arg1 withFont:(id)arg2;
- (id)_attributedStringForPickUpDetailText;
- (id)_attributedStringForPickUpTitle;
- (id)_attributedStringForNotificationsDetailText;
- (id)_attributedStringForNotificationsTitle;
- (id)initWithUsageReport:(id)arg1;

@end

