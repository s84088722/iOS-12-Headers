//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying>
{
    unsigned int _receivedSnapshotRequest;
    unsigned int _sentSnapshotRequest;
    unsigned int _sentSnapshotResponse;
    struct {
        unsigned int receivedSnapshotRequest:1;
        unsigned int sentSnapshotRequest:1;
        unsigned int sentSnapshotResponse:1;
    } _has;
}

@property(nonatomic) unsigned int sentSnapshotResponse; // @synthesize sentSnapshotResponse=_sentSnapshotResponse;
@property(nonatomic) unsigned int sentSnapshotRequest; // @synthesize sentSnapshotRequest=_sentSnapshotRequest;
@property(nonatomic) unsigned int receivedSnapshotRequest; // @synthesize receivedSnapshotRequest=_receivedSnapshotRequest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSentSnapshotResponse;
@property(nonatomic) _Bool hasSentSnapshotRequest;
@property(nonatomic) _Bool hasReceivedSnapshotRequest;

@end

