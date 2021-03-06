//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CAMPerformanceTestHarness : NSObject
{
    NSString *_testName;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (void).cxx_destruct;
- (void)stopSubtestWithName:(id)arg1;
- (void)startSubtestWithName:(id)arg1;
- (void)failedTestwithReason:(id)arg1;
- (void)stopTesting;
- (void)startTesting;
@property(readonly, nonatomic, getter=isRunningTest) _Bool runningTest;
- (id)initWithTestName:(id)arg1;

@end

