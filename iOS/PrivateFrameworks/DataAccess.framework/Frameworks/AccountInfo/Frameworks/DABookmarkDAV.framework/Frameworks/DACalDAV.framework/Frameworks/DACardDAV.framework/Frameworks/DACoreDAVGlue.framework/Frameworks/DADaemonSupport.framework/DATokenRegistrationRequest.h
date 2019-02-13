//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DADaemonSupport/NSURLSessionDataDelegate-Protocol.h>
#import <DADaemonSupport/NSURLSessionDelegate-Protocol.h>
#import <DADaemonSupport/NSURLSessionTaskDelegate-Protocol.h>

@class AKAppleIDSession, DARefreshWrapper, NSData, NSMutableURLRequest, NSString, NSURLSession, NSURLSessionDataTask;
@protocol DATokenRegistrationDelegate;

@interface DATokenRegistrationRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _finished;
    id <DATokenRegistrationDelegate> _delegate;
    DARefreshWrapper *_wrapper;
    NSString *_onBehalfOfBundleIdentifier;
    NSData *_token;
    NSString *_pushKey;
    NSMutableURLRequest *_request;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    AKAppleIDSession *_hsa2Session;
}

+ (id)requestWithToken:(id)arg1 pushKey:(id)arg2 wrapper:(id)arg3 onBehalfOf:(id)arg4;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) AKAppleIDSession *hsa2Session; // @synthesize hsa2Session=_hsa2Session;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak NSString *pushKey; // @synthesize pushKey=_pushKey;
@property(nonatomic) __weak NSData *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *onBehalfOfBundleIdentifier; // @synthesize onBehalfOfBundleIdentifier=_onBehalfOfBundleIdentifier;
@property(nonatomic) __weak DARefreshWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) __weak id <DATokenRegistrationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendRegistrationRequestForAccount:(id)arg1;
- (void)_reallyHandleAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_canAuthenticateAgainstProtectionSpace:(id)arg1;
- (void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)cancel;
- (id)initWithToken:(id)arg1 pushKey:(id)arg2 wrapper:(id)arg3 onBehalfOf:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

