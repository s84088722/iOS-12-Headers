//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSMachineDataRequest;

@interface ISMachineDataActionOperation : ISOperation
{
    _Bool _blocksPurchaseRequests;
    _Bool _hidesServerDrivenDialogs;
    SSMachineDataRequest *_request;
    CDUnknownBlockType _resultBlock;
    NSString *_syncState;
    NSString *_userAgent;
}

- (void).cxx_destruct;
- (_Bool)_syncMachineWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldRetryAfterError:(id)arg1;
- (_Bool)_provisionWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_eraseProvisioning;
- (id)uniqueKey;
- (void)run;
@property(copy) NSString *userAgent;
@property(readonly) NSString *syncState;
@property(copy) CDUnknownBlockType resultBlock;
@property _Bool hidesServerDrivenDialogs;
@property _Bool blocksPurchaseRequests;
@property(readonly) SSMachineDataRequest *machineDataRequest;
- (id)initWithMachineDataRequest:(id)arg1;

@end

