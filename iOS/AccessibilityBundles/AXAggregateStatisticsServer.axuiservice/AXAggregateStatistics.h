//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXAggregateStatistics : NSObject
{
}

+ (void)runStatistics;
- (void)_resetTTYCallCount:(CDUnknownBlockType)arg1;
- (void)_resetPlatformSwitchingCount:(CDUnknownBlockType)arg1;
- (void)_resetGuidedAccessTimeLimitsUsage:(CDUnknownBlockType)arg1;
- (void)_resetGuidedAccessUsage:(CDUnknownBlockType)arg1;
- (void)_resetMagnifierUsage:(CDUnknownBlockType)arg1;
- (void)_resetTapticTimeUsageCount:(CDUnknownBlockType)arg1;
- (void)_resetBSIUsageCount:(CDUnknownBlockType)arg1;
- (void)_resetHearingAidControlPanelCount:(CDUnknownBlockType)arg1;
- (void)_resetHearingAidHandoffCount:(CDUnknownBlockType)arg1;
- (void)_resetCharacterVoiceUsageCount:(CDUnknownBlockType)arg1;
- (void)_resetAssistiveTouchUsageCounts:(id)arg1 logger:(CDUnknownBlockType)arg2;
- (void)_logStatistics;
- (void)_logiOSStatistics;
- (void)_logWatchStatistics;
- (void)_logTextSizes;
- (void)_logCommonStatistics;
- (void)_startLogging;
- (id)init;

@end

