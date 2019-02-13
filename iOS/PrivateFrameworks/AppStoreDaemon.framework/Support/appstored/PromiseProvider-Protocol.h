//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DataConsumerDefinition, NSError, NSUUID, SSPromise;

@protocol PromiseProvider <NSObject>
- (SSPromise *)truncatePromiseID:(NSUUID *)arg1 withDefinition:(DataConsumerDefinition *)arg2;
- (SSPromise *)resetPromiseID:(NSUUID *)arg1;
- (SSPromise *)fetchPromiseID:(NSUUID *)arg1 orCreateWithDefinition:(DataConsumerDefinition *)arg2;
- (SSPromise *)failPromiseID:(NSUUID *)arg1 withReason:(NSError *)arg2;
@end

