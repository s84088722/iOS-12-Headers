//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSString;

@protocol VSPrivacyServiceProtocol <NSObject>
- (void)requestAccessForAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(NSString *)arg3 identityProviderID:(NSString *)arg4 completionHandler:(void (^)(unsigned long long, VSOptional *))arg5;
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(void (^)(unsigned long long))arg2;
@end

