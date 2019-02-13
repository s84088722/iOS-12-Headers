//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIAlertController;

@interface WebUIAuthenticationManager : NSObject
{
    NSMutableArray *_authenticationChallenges;
    UIAlertController *_alertController;
    _Bool _showingAuthenticationPanel;
    id _delegate;
}

@property(readonly, nonatomic, getter=isShowingAuthenticationPanel) _Bool showingAuthenticationPanel; // @synthesize showingAuthenticationPanel=_showingAuthenticationPanel;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAuthenticationChallenge:(id)arg1;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(_Bool)arg2;
- (void)addAuthenticationChallenge:(id)arg1;
- (void)cancelAuthentication;
- (void)_didResolveChallenge;
- (void)_cancel;
- (void)setShowingAuthentication:(_Bool)arg1;
- (id)authenticationChallenge;

@end

