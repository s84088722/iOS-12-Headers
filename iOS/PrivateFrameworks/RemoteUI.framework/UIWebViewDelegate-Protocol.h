//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSError, NSURLRequest, UIWebView;

@protocol UIWebViewDelegate <NSObject>

@optional
- (void)webView:(UIWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(UIWebView *)arg1;
- (void)webViewDidStartLoad:(UIWebView *)arg1;
- (_Bool)webView:(UIWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

