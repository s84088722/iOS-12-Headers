//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    _Bool _delegatedPlayback;
    NSString *_assetSourceStorefrontID;
    long long _requestType;
    CDUnknownBlockType _willBeginExecutionHandler;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
    unsigned long long _storeCloudID;
    long long _storeSubscriptionAdamID;
    long long _storePurchasedAdamID;
    NSString *_cloudUniversalLibraryID;
}

@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) CDUnknownBlockType willBeginExecutionHandler; // @synthesize willBeginExecutionHandler=_willBeginExecutionHandler;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic, getter=isDelegatedPlayback) _Bool delegatedPlayback; // @synthesize delegatedPlayback=_delegatedPlayback;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)init;

@end

