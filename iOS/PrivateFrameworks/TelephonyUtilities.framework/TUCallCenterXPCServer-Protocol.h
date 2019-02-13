//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUCallServicesProxyCallActions-Protocol.h>

@class NSDictionary, NSString, TUCallDisplayContext, TUDialRequest, TUJoinConversationRequest;

@protocol TUCallCenterXPCServer <TUCallServicesProxyCallActions>
- (oneway void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(NSDictionary *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (oneway void)joinConversationWithRequest:(TUJoinConversationRequest *)arg1;
- (oneway void)dialWithRequest:(TUDialRequest *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (oneway void)dialWithRequest:(TUDialRequest *)arg1 displayContext:(TUCallDisplayContext *)arg2;
- (oneway void)requestInitialState:(void (^)(NSArray *))arg1;
@end

