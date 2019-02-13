//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/UIWebViewDelegate-Protocol.h>

@class NSString, UIWebView;

__attribute__((visibility("hidden")))
@interface SLURLPreviewGenerator : NSObject <UIWebViewDelegate>
{
    UIWebView *_webView;
    CDUnknownBlockType _completion;
}

@property(readonly) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callCompletionWithPreview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
