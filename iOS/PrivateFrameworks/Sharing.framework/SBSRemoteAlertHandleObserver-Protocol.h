//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSError, SBSRemoteAlertHandle;

@protocol SBSRemoteAlertHandleObserver <NSObject>

@optional
- (void)remoteAlertHandle:(SBSRemoteAlertHandle *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidDeactivate:(SBSRemoteAlertHandle *)arg1;
- (void)remoteAlertHandleDidActivate:(SBSRemoteAlertHandle *)arg1;
@end

