//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDate, NSString;

@protocol PPEventServerProtocol
- (void)sendRTCLogsWithWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
- (void)logEventInteractionForEventWithEventIdentifier:(NSString *)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)eventHighlightsFrom:(NSDate *)arg1 to:(NSDate *)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
- (void)resolveEventNameRecordChanges:(NSArray *)arg1 client:(NSString *)arg2 queryId:(unsigned long long)arg3;
- (void)eventNameRecordsForClient:(NSString *)arg1 queryId:(unsigned long long)arg2;
@end

