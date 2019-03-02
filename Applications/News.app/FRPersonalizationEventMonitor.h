//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCReadingHistoryObserving-Protocol.h"
#import "FREventCenterObserving-Protocol.h"

@class FCReadingHistory, FRPersonalizationDataSource, NSMutableArray, NSString;

@interface FRPersonalizationEventMonitor : NSObject <FCReadingHistoryObserving, FREventCenterObserving>
{
    FRPersonalizationDataSource *_dataSource;
    FCReadingHistory *_readingHistory;
    NSMutableArray *_articleHostViewExposureEvents;
}

+ (id)workQueue;
@property(retain, nonatomic) NSMutableArray *articleHostViewExposureEvents; // @synthesize articleHostViewExposureEvents=_articleHostViewExposureEvents;
@property(retain, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(retain, nonatomic) FRPersonalizationDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(_Bool)arg4 withOnScreenChecker:(CDUnknownBlockType)arg5;
- (void)eventCenter:(id)arg1 eventDidFire:(id)arg2;
- (id)processEventsForFeatures:(id)arg1;
- (id)headlineFeaturesFromArticleHostViewExposureEvents;
- (void)beginMonitoring;
- (id)init;
- (id)initWithPersonalizationDataSource:(id)arg1 readingHistory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
