//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSNumber, NSString, StoreKitClientIdentity;

@interface LoadCompletedMicroPaymentsOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSString *_applicationUsername;
    StoreKitClientIdentity *_clientIdentity;
    _Bool _partialFailure;
    CDUnknownBlockType _paymentBatchBlock;
}

- (void).cxx_destruct;
- (void)_runForIdentity:(id)arg1;
- (id)_newFetchOperationForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3;
- (id)_copyResponseForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3 returningError:(id *)arg4;
- (void)run;
@property(copy) CDUnknownBlockType paymentBatchBlock;
@property(copy) StoreKitClientIdentity *clientIdentity;
@property(copy) NSString *applicationUsername;
@property(readonly, getter=isPartialFailure) _Bool partialFailure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

