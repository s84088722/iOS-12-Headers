//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/WKNavigationDelegate-Protocol.h>
#import <Silex/WKUIDelegate-Protocol.h>

@class NSString, SXWebContentLoader, WKWebView;
@protocol SXReachabilityProvider, SXWebContentContentRuleManager, SXWebContentDocumentStateReporting, SXWebContentErrorReporting, SXWebContentLogger, SXWebContentMessageHandlerManager, SXWebContentNavigationManager, SXWebContentProcessTerminationManager, SXWebContentScriptsManager, SXWebContentTimeoutManager;

@interface SXWebContentViewController : UIViewController <WKNavigationDelegate, WKUIDelegate>
{
    id <SXWebContentScriptsManager> _scriptsManager;
    id <SXWebContentMessageHandlerManager> _messageHandlerManager;
    id <SXWebContentNavigationManager> _navigationManager;
    WKWebView *_webView;
    id <SXWebContentErrorReporting> _errorReporter;
    id <SXWebContentDocumentStateReporting> _documentStateReporter;
    id <SXWebContentTimeoutManager> _timeoutManager;
    id <SXWebContentProcessTerminationManager> _terminationManager;
    id <SXWebContentContentRuleManager> _contentRuleManager;
    id <SXReachabilityProvider> _reachabilityProvider;
    id <SXWebContentLogger> _logger;
    SXWebContentLoader *_loader;
}

@property(retain, nonatomic) SXWebContentLoader *loader; // @synthesize loader=_loader;
@property(readonly, nonatomic) id <SXWebContentLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) id <SXWebContentContentRuleManager> contentRuleManager; // @synthesize contentRuleManager=_contentRuleManager;
@property(readonly, nonatomic) id <SXWebContentProcessTerminationManager> terminationManager; // @synthesize terminationManager=_terminationManager;
@property(readonly, nonatomic) id <SXWebContentTimeoutManager> timeoutManager; // @synthesize timeoutManager=_timeoutManager;
@property(readonly, nonatomic) id <SXWebContentDocumentStateReporting> documentStateReporter; // @synthesize documentStateReporter=_documentStateReporter;
@property(readonly, nonatomic) id <SXWebContentErrorReporting> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) id <SXWebContentNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) id <SXWebContentMessageHandlerManager> messageHandlerManager; // @synthesize messageHandlerManager=_messageHandlerManager;
@property(readonly, nonatomic) id <SXWebContentScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
- (void).cxx_destruct;
- (void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;
- (id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)initiateLoadingWithLoader:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadURL:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithWebView:(id)arg1 scriptsManager:(id)arg2 messageHandlerManager:(id)arg3 navigationManager:(id)arg4 errorReporter:(id)arg5 documentStateReporter:(id)arg6 timeoutManager:(id)arg7 terminationManager:(id)arg8 contentRuleManager:(id)arg9 reachabilityProvider:(id)arg10 logger:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

