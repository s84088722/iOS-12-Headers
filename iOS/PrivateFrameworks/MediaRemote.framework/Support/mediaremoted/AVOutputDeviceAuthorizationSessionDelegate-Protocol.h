//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVOutputDeviceAuthorizationRequest, AVOutputDeviceAuthorizationSession, NSString;

@protocol AVOutputDeviceAuthorizationSessionDelegate <NSObject>
- (void)outputDeviceAuthorizationSession:(AVOutputDeviceAuthorizationSession *)arg1 didProvideAuthorizationRequest:(AVOutputDeviceAuthorizationRequest *)arg2;

@optional
- (_Bool)outputDeviceAuthorizationSession:(AVOutputDeviceAuthorizationSession *)arg1 shouldRetryAuthorizationRequest:(AVOutputDeviceAuthorizationRequest *)arg2 reason:(NSString *)arg3;
@end

