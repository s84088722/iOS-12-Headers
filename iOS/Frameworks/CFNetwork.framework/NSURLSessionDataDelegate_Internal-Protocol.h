//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionDataDelegate-Protocol.h>

@class NSData, NSURLSession, NSURLSessionDataTask;

@protocol NSURLSessionDataDelegate_Internal <NSURLSessionDataDelegate>
- (void)_URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3 completionHandler:(void (^)(void))arg4;
@end
