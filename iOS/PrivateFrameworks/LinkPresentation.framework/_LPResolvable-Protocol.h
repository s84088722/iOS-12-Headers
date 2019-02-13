//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class NSString, NSURL, WKWebView;
@protocol _LPResolver;

@protocol _LPResolvable <NSObject>
- (NSString *)accessibilityText;
- (long long)maximumBytes;
- (_Bool)isValidMIMEType:(NSString *)arg1;
- (NSURL *)URL;
- (id <_LPResolver>)tryToResolveWithWebViewForProcessSharing:(WKWebView *)arg1 completionHandler:(void (^)(id, id <_LPResolvable>))arg2;
@end

