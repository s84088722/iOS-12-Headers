//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WDSleepDetailSection;

@protocol WDChartDetailViewDataSource <NSObject>
- (WDSleepDetailSection *)mainSection;
- (WDSleepDetailSection *)detailSectionForRow:(long long)arg1 column:(long long)arg2;
- (long long)numberOfColumnsForRow:(long long)arg1;
- (long long)numberOfRows;
@end

