//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString, NSURLRequest, WKWebView;

@interface _WKDownload : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::DownloadProxy> _download;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) _Bool wasUserInitiated;
@property(readonly, copy, nonatomic) NSArray *redirectChain;
@property(readonly, nonatomic) __weak WKWebView *originatingWebView;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)cancel;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

