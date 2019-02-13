//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "C2RequestDelegate-Protocol.h"

@class NSHTTPURLResponse, NSMutableArray, NSMutableURLRequest, NSString, NSURLSessionDataTask;
@protocol OS_dispatch_queue;

@interface SYDServerRequest : NSObject <C2RequestDelegate>
{
    _Bool _allowsCellular;
    _Bool _cancelled;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_fragments;
    NSURLSessionDataTask *_dataTask;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_response;
}

+ (id)newConfigRequestWithURL:(id)arg1 lastModifiedHeaderForConfig:(id)arg2 scheduler:(id)arg3;
+ (id)newRequestWithURL:(id)arg1 body:(id)arg2 scheduler:(id)arg3 error:(id *)arg4;
+ (id)_newURLRequestWithURL:(id)arg1 HTTPMethod:(id)arg2 scheduler:(id)arg3;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSMutableArray *fragments; // @synthesize fragments=_fragments;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)cancel;
- (void)_cancel;
- (void)start;
- (void)_start;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
@property(readonly, nonatomic) NSMutableURLRequest *URLRequest;
- (id)initWithURLRequest:(id)arg1 scheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

