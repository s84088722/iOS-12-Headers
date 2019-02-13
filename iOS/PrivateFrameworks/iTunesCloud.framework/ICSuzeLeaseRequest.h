//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, NSData, NSString;

@interface ICSuzeLeaseRequest : NSObject <NSCopying>
{
    NSData *_clientData;
    NSString *_leaseID;
    long long _mediaType;
    long long _qualityOfService;
    ICStoreRequestContext *_requestContext;
    long long _requestType;
}

@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *leaseID; // @synthesize leaseID=_leaseID;
@property(readonly, copy, nonatomic) NSData *clientData; // @synthesize clientData=_clientData;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestContext:(id)arg1 requestType:(long long)arg2 leaseID:(id)arg3 mediaType:(long long)arg4 clientData:(id)arg5;

@end

