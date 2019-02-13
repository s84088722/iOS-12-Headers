//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSString, SSURLConnectionResponse, SSVGratisRequestBody;

@interface GratisClaimOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSNumber *_accountID;
    NSString *_authenticationReasonDescription;
    NSData *_clientAuditTokenData;
    NSDictionary *_httpHeaders;
    NSDictionary *_rawOutput;
    SSVGratisRequestBody *_requestBody;
    _Bool _suppressesErrorDialogs;
    SSURLConnectionResponse *_urlResponse;
}

- (void).cxx_destruct;
- (id)_newRetryRequestPropertiesWithURL:(id)arg1;
- (id)_newDefaultRequestProperties;
- (id)_bodyData;
- (id)_authenticationContext;
- (id)_accountID;
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;
- (void)run;
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool suppressesErrorDialogs;
@property(retain, nonatomic) NSData *clientAuditTokenData;
@property(copy) NSString *authenticationReasonDescription;
@property(readonly) NSDictionary *rawOutput;
- (id)initWithRequestBody:(id)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

