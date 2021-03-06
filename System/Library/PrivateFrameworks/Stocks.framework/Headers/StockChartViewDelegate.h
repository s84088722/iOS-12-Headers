/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StockChartViewDelegate <NSObject>
@optional
-(void)stockChartViewFinishedInitialLoad:(id)arg1;

@required
-(void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;
-(BOOL)stockChartViewIsCurrentChartView:(id)arg1;
-(void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;

@end

