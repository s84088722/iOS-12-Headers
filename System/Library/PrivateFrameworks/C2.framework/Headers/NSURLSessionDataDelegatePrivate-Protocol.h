//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <C2/NSURLSessionDataDelegate-Protocol.h>

@class NSError, NSURLSession, NSURLSessionDataTask;

@protocol NSURLSessionDataDelegatePrivate <NSURLSessionDataDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2 withError:(NSError *)arg3;
@end
