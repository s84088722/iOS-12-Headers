//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKInteractiveChartAnnotationView, UIView;

@protocol HKInteractiveChartAnnotationViewDataSource <NSObject>
- (UIView *)columnViewForColumnAtIndex:(long long)arg1;
- (long long)numberOfColumnsForAnnotationView:(HKInteractiveChartAnnotationView *)arg1;
@end

