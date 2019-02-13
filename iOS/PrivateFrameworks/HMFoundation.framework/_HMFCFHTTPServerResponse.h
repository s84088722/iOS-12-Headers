//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFHTTPResponseInternal.h>

@class _HMFCFHTTPMessage, _HMFCFHTTPServerRequest;

@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal
{
    struct _CFHTTPServerResponse *_responseRef;
    _HMFCFHTTPServerRequest *_request;
    CDUnknownBlockType _completionHandler;
    _HMFCFHTTPMessage *_response;
}

@property(readonly, nonatomic) _HMFCFHTTPMessage *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) _HMFCFHTTPServerRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _CFHTTPServerResponse *responseRef; // @synthesize responseRef=_responseRef;
- (void)setBody:(id)arg1;
- (id)body;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (id)headerFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 statusCode:(long long)arg2;

@end

