//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying>
{
    long long _maximumPacketSize;
    long long _packetCapacity;
    long long _packetCount;
    NSData *_contents;
    _MRAudioFormatSettingsProtobuf *_formatSettings;
    NSMutableArray *_packetDescriptions;
    struct {
        unsigned int maximumPacketSize:1;
        unsigned int packetCapacity:1;
        unsigned int packetCount:1;
    } _has;
}

+ (Class)packetDescriptionsType;
@property(retain, nonatomic) NSMutableArray *packetDescriptions; // @synthesize packetDescriptions=_packetDescriptions;
@property(retain, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(nonatomic) long long packetCount; // @synthesize packetCount=_packetCount;
@property(nonatomic) long long maximumPacketSize; // @synthesize maximumPacketSize=_maximumPacketSize;
@property(nonatomic) long long packetCapacity; // @synthesize packetCapacity=_packetCapacity;
@property(retain, nonatomic) _MRAudioFormatSettingsProtobuf *formatSettings; // @synthesize formatSettings=_formatSettings;
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
- (id)packetDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packetDescriptionsCount;
- (void)addPacketDescriptions:(id)arg1;
- (void)clearPacketDescriptions;
@property(readonly, nonatomic) _Bool hasContents;
@property(nonatomic) _Bool hasPacketCount;
@property(nonatomic) _Bool hasMaximumPacketSize;
@property(nonatomic) _Bool hasPacketCapacity;
@property(readonly, nonatomic) _Bool hasFormatSettings;

@end

