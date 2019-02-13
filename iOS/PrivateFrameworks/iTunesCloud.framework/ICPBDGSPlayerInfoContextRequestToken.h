//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData;

@interface ICPBDGSPlayerInfoContextRequestToken : PBCodable <NSCopying>
{
    unsigned long long _accountID;
    unsigned long long _sessionID;
    NSData *_token;
    struct {
        unsigned int accountID:1;
        unsigned int sessionID:1;
    } _has;
}

@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasToken;
@property(nonatomic) _Bool hasAccountID;

@end

