//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPCommentContent : PBCodable <NSCopying>
{
    NSData *_comment;
    _Bool _encrypted;
    struct {
        unsigned int encrypted:1;
    } _has;
}

@property(retain, nonatomic) NSData *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasComment;
@property(nonatomic) _Bool hasEncrypted;
@property(nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;

@end

