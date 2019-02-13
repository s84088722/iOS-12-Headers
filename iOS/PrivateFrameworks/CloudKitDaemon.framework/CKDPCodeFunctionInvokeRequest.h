//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying>
{
    NSString *_functionName;
    NSData *_serializedParameters;
    NSString *_serviceName;
}

+ (id)options;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSerializedParameters;
@property(readonly, nonatomic) _Bool hasFunctionName;
@property(readonly, nonatomic) _Bool hasServiceName;

@end

