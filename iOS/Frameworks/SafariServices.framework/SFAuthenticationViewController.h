//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/SFSafariViewController.h>

#import <SafariServices/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, _UIFallbackPresentationViewController;
@protocol SFAuthenticationViewControllerPresentationDelegate;

__attribute__((visibility("hidden")))
@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate>
{
    _UIFallbackPresentationViewController *_fallbackPresentationViewController;
    NSString *_callbackURLScheme;
    id <SFAuthenticationViewControllerPresentationDelegate> _presentationDelegate;
    CDUnknownBlockType _dismissCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(nonatomic) __weak id <SFAuthenticationViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(_Bool)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)_restartServiceViewController;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentViewController;
- (void)setDefersAddingRemoteViewController:(_Bool)arg1;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

