//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareDeleteRequest : PBRequest <NSCopying>
{
    NSString *_etag;
    CKDPProtectionInfo *_oBSOLETESelfAddedPcs;
    CKDPShareIdentifier *_shareId;
}

+ (id)options;
@property(retain, nonatomic) CKDPProtectionInfo *oBSOLETESelfAddedPcs; // @synthesize oBSOLETESelfAddedPcs=_oBSOLETESelfAddedPcs;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
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
@property(readonly, nonatomic) _Bool hasOBSOLETESelfAddedPcs;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasShareId;

@end

