//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject
{
    IMRuntimeTestRun *_testRun;
    CDUnknownBlockType _completion;
}

+ (void)testLog:(id)arg1;
+ (id)testName;
+ (id)logHandle;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) IMRuntimeTestRun *testRun; // @synthesize testRun=_testRun;
- (void).cxx_destruct;
- (void)testLog:(id)arg1;
- (void)finishTestAfterInterval:(double)arg1;
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)testName;
- (void)runTest:(CDUnknownBlockType)arg1;
- (Class)testRunClass;
- (void)finishTest;
- (id)logHandle;
- (void)startTest;
- (void)tearDown;
- (void)setUp;

@end

