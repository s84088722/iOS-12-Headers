//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSWebViewMetadataFetchOperation, WKWebView, WKWebViewConfiguration;

@protocol WBSWebViewMetadataFetchOperationDelegate <NSObject>
- (void)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (WKWebView *)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 webViewOfSize:(struct CGSize)arg2 withConfiguration:(WKWebViewConfiguration *)arg3;
@end

