//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MultipeerConnectivity/NSURLSessionTaskDelegate-Protocol.h>

@class NSCachedURLResponse, NSData, NSURLResponse, NSURLSession, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionStreamTask;

@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 willCacheResponse:(NSCachedURLResponse *)arg3 completionHandler:(void (^)(NSCachedURLResponse *))arg4;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeStreamTask:(NSURLSessionStreamTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeDownloadTask:(NSURLSessionDownloadTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;
@end

