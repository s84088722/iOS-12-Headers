//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/XCTResult.h>

@class NSObject, XCTPromise, XCTWaiter;
@protocol OS_dispatch_queue;

@interface XCTFutureResult : XCTResult
{
    _Bool _hasWaited;
    _Bool _hasFinished;
    double _deadline;
    XCTPromise *_promise;
    XCTWaiter *_waiter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property _Bool hasWaited; // @synthesize hasWaited=_hasWaited;
@property(readonly) XCTWaiter *waiter; // @synthesize waiter=_waiter;
@property(readonly) XCTPromise *promise; // @synthesize promise=_promise;
@property(readonly) double deadline; // @synthesize deadline=_deadline;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setError:(id)arg1;
- (id)error;
- (void)_waitForFulfillment;
- (id)initWithTimeout:(double)arg1 promise:(id)arg2;

@end
