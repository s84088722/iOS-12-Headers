//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DigitalTouchShared/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ETPHeader : PBCodable <NSCopying>
{
    long long _sendDate;
    double _startDelay;
    unsigned int _baseColor;
    NSString *_identifier;
    NSData *_messageData;
    int _messageType;
    _Bool _supportsPlaybackTimeOffsets;
    struct {
        unsigned int sendDate:1;
        unsigned int startDelay:1;
        unsigned int baseColor:1;
        unsigned int messageType:1;
        unsigned int supportsPlaybackTimeOffsets:1;
    } _has;
}

@property(nonatomic) double startDelay; // @synthesize startDelay=_startDelay;
@property(nonatomic) _Bool supportsPlaybackTimeOffsets; // @synthesize supportsPlaybackTimeOffsets=_supportsPlaybackTimeOffsets;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int baseColor; // @synthesize baseColor=_baseColor;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
@property(nonatomic) long long sendDate; // @synthesize sendDate=_sendDate;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasStartDelay;
@property(nonatomic) _Bool hasSupportsPlaybackTimeOffsets;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasBaseColor;
@property(readonly, nonatomic) _Bool hasMessageData;
@property(nonatomic) _Bool hasSendDate;
- (int)StringAsMessageType:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMessageType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;

@end

