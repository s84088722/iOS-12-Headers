//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>

@class AAUIServerUIHookHandler, FACircleContext, FARequestConfigurator, NSDictionary, NSString, NSURLRequest;
@protocol FACircleRemoteUIDelegateDelegate;

@interface FACircleRemoteUIDelegate : NSObject <RemoteUIControllerDelegate>
{
    FARequestConfigurator *_requestConfigurator;
    NSDictionary *_cachedServerInfo;
    AAUIServerUIHookHandler *_serverHookHandler;
    NSURLRequest *_cachedRequest;
    FACircleContext *_context;
    id <FACircleRemoteUIDelegateDelegate> _delegate;
}

@property __weak id <FACircleRemoteUIDelegateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FACircleContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_broadcastFamilyDidChangeNotification;
- (void)_reportRequestFailureWithResponse:(id)arg1;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)_notifyDelegateOfCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithContext:(id)arg1 serverHookHandler:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

