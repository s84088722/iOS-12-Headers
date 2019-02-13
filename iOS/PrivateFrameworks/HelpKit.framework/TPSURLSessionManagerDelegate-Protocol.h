//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/NSObject-Protocol.h>

@class NSOperationQueue, NSURLAuthenticationChallenge, NSURLSessionConfiguration, TPSURLSessionManager, TPSURLSessionTask;

@protocol TPSURLSessionManagerDelegate <NSObject>

@optional
- (void)URLSessionManagerDidReceiveChallenge:(NSURLAuthenticationChallenge *)arg1 completionHandler:(void (^)(long long, NSURLCredential *))arg2;
- (void)URLSessionManagerRequestCompleted:(TPSURLSessionManager *)arg1 sessionTask:(TPSURLSessionTask *)arg2;
- (void)URLSessionManagerRequestResumed:(TPSURLSessionManager *)arg1 sessionTask:(TPSURLSessionTask *)arg2;
- (_Bool)URLSessionManagerHasConnection:(TPSURLSessionManager *)arg1;
- (_Bool)URLSessionManagerShouldCoalesceRequest:(TPSURLSessionManager *)arg1;
- (NSURLSessionConfiguration *)URLSessionManagerSessionConfiguration:(TPSURLSessionManager *)arg1;
- (NSOperationQueue *)URLSessionManagerSessionOperationQueue:(TPSURLSessionManager *)arg1;
@end

