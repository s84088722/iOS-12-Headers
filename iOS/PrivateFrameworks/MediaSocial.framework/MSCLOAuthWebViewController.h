//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaSocial/WKNavigationDelegate-Protocol.h>

@class NSString, NSURL, UIActivityIndicatorView, WKWebView;

@interface MSCLOAuthWebViewController : UIViewController <WKNavigationDelegate>
{
    _Bool _authenticating;
    NSURL *_authURL;
    NSURL *_redirectURL;
    CDUnknownBlockType _completionBlock;
    WKWebView *_webView;
    UIActivityIndicatorView *_activityIndicator;
    NSURL *_interceptedRedirectURL;
}

@property(copy, nonatomic) NSURL *interceptedRedirectURL; // @synthesize interceptedRedirectURL=_interceptedRedirectURL;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic, getter=isAuthenticating) _Bool authenticating; // @synthesize authenticating=_authenticating;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, copy, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
- (void).cxx_destruct;
- (void)_endAuthenticationWithError:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)startAuthentication;
- (void)cancelAuthentication;
- (id)initWithAuthURL:(id)arg1 redirectURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

