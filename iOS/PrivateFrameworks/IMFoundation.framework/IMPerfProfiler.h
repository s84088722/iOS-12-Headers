//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMPerfProfiler : NSObject
{
    NSMutableArray *_sinks;
}

+ (id)instance;
- (void)logMeasurement:(struct IMPerfMeasurement_t *)arg1;
- (void)addSink:(id)arg1 withBehavior:(id)arg2;
- (void)dealloc;
- (id)init;

@end

