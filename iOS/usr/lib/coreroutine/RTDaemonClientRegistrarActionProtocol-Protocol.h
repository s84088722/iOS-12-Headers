//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, NSError, RTDaemonClientRegistrarAction;

@protocol RTDaemonClientRegistrarActionProtocol <NSObject>
- (void)actionRegistrar:(RTDaemonClientRegistrarAction *)arg1 didReceiveActionConditions:(NSArray *)arg2 error:(NSError *)arg3;
@end

