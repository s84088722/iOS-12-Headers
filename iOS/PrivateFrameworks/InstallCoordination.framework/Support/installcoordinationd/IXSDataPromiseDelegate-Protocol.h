//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IXSDataPromise, NSError;

@protocol IXSDataPromiseDelegate <NSObject>
- (void)promise:(IXSDataPromise *)arg1 didCancelForReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (void)promise:(IXSDataPromise *)arg1 didUpdateProgress:(double)arg2;
- (void)promiseDidReset:(IXSDataPromise *)arg1;
- (void)promiseDidComplete:(IXSDataPromise *)arg1;
- (void)promiseDidBegin:(IXSDataPromise *)arg1;
@end

