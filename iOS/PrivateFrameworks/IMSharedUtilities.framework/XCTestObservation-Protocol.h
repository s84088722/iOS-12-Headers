//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class NSBundle, NSString, XCTestCase, XCTestSuite;

@protocol XCTestObservation <NSObject>

@optional
- (void)testCaseDidFinish:(XCTestCase *)arg1;
- (void)testCase:(XCTestCase *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseWillStart:(XCTestCase *)arg1;
- (void)testSuiteDidFinish:(XCTestSuite *)arg1;
- (void)testSuite:(XCTestSuite *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteWillStart:(XCTestSuite *)arg1;
- (void)testBundleDidFinish:(NSBundle *)arg1;
- (void)testBundleWillStart:(NSBundle *)arg1;
@end

