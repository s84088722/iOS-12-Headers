//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UILabel, UIStackView;
@protocol WDInteractiveChartCurrentValueViewDataSource;

@interface WDInteractiveChartCurrentValueView : UIView
{
    id <WDInteractiveChartCurrentValueViewDataSource> _dataSource;
    UIStackView *_columnStack;
    UIStackView *_containerStack;
    UILabel *_valueLabel;
    UILabel *_secondaryLabel;
    NSTimer *_deferredNoDataTimer;
}

@property(nonatomic) __weak NSTimer *deferredNoDataTimer; // @synthesize deferredNoDataTimer=_deferredNoDataTimer;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UIStackView *containerStack; // @synthesize containerStack=_containerStack;
@property(retain, nonatomic) UIStackView *columnStack; // @synthesize columnStack=_columnStack;
@property(nonatomic) __weak id <WDInteractiveChartCurrentValueViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scheduleDeferredDataReload;
- (void)showNoDataStatus;
- (void)updateCurrentValueTextWithAttributedString:(id)arg1;
- (void)_updateCurrentValueViewWithNumberOfColumns:(long long)arg1;
- (void)reloadData;
- (void)_setupSubviews;
- (id)_fontForType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

