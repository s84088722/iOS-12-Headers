//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSUBasicProgress.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUFakeProgress : TSUBasicProgress
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _currentStage;
    unsigned long long _numberOfStages;
    _Bool _stopped;
}

- (void)p_slowlyAdvanceToNextStage;
- (void)advanceToStage:(unsigned long long)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2;

@end

