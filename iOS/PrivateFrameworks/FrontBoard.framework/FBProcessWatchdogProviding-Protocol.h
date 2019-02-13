//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBProcess, FBProcessWatchdogEventContext, FBSProcessTerminationRequest, FBSProcessWatchdogPolicy, NSError;

@protocol FBProcessWatchdogProviding <NSObject>
- (FBSProcessWatchdogPolicy *)watchdogPolicyForProcess:(FBProcess *)arg1 eventContext:(FBProcessWatchdogEventContext *)arg2;

@optional
- (FBSProcessTerminationRequest *)watchdogTerminationRequestForProcess:(FBProcess *)arg1 error:(NSError *)arg2;
@end

