//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMoreMessages : PBCodable <NSCopying>
{
    NSMutableArray *_addedMessages;
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    CDStruct_8d07e858 _has;
}

+ (Class)addedMessageType;
@property(nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSData *dateForRequestingMoreMessages; // @synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages;
@property(retain, nonatomic) NSMutableArray *addedMessages; // @synthesize addedMessages=_addedMessages;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
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
@property(nonatomic) _Bool hasMailboxSyncVersion;
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(readonly, nonatomic) _Bool hasDateForRequestingMoreMessages;
- (id)addedMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)addedMessagesCount;
- (void)addAddedMessage:(id)arg1;
- (void)clearAddedMessages;
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

