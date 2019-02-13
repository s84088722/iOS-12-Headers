//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFAuthenticationViewControllerPresentationDelegate-Protocol.h>
#import <SafariServices/SFSafariViewControllerDelegateInternal-Protocol.h>

@class NSString, NSURL, SFAuthenticationViewController;
@protocol _SFAuthenticationSessionDelegate;

@interface SFAuthenticationSession : NSObject <SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal>
{
    NSURL *_initialURL;
    CDUnknownBlockType _completionHandler;
    SFAuthenticationViewController *_authViewController;
    NSString *_callbackURLScheme;
    _Bool _isSessionStarted;
    id <_SFAuthenticationSessionDelegate> __delegate;
}

@property(nonatomic) __weak id <_SFAuthenticationSessionDelegate> _delegate; // @synthesize _delegate=__delegate;
- (void).cxx_destruct;
- (void)safariViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(_Bool)arg3;
- (void)safariViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (id)presentingViewControllerForAuthenticationViewController:(id)arg1;
- (void)cancel;
- (_Bool)_startRequestingFromWebAuthenticationSession:(_Bool)arg1;
- (_Bool)startASWebAuthenticationSession;
- (_Bool)start;
- (void)dealloc;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

