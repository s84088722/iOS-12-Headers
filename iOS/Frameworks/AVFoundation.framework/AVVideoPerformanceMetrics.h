//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject
{
    AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}

@property(readonly, nonatomic) double totalFrameDelay;
@property(readonly, nonatomic) unsigned long long numberOfCorruptedVideoFrames;
@property(readonly, nonatomic) unsigned long long numberOfDroppedVideoFrames;
@property(readonly, nonatomic) unsigned long long totalNumberOfVideoFrames;
- (void)dealloc;
- (void)finalize;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

