//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDTCPConnectionInfo : PBCodable <NSCopying>
{
    unsigned int _dnsResolutionLatency;
    int _interfaceType;
    unsigned int _tcpHandshakeLatency;
    unsigned int _tcpRetransmissions;
    unsigned int _tcpRxBytes;
    unsigned int _tcpTxBytes;
    unsigned int _tlsLatency;
    struct {
        unsigned int dnsResolutionLatency:1;
        unsigned int interfaceType:1;
        unsigned int tcpHandshakeLatency:1;
        unsigned int tcpRetransmissions:1;
        unsigned int tcpRxBytes:1;
        unsigned int tcpTxBytes:1;
        unsigned int tlsLatency:1;
    } _has;
}

@property(nonatomic) unsigned int tcpRxBytes; // @synthesize tcpRxBytes=_tcpRxBytes;
@property(nonatomic) unsigned int tcpTxBytes; // @synthesize tcpTxBytes=_tcpTxBytes;
@property(nonatomic) unsigned int tcpRetransmissions; // @synthesize tcpRetransmissions=_tcpRetransmissions;
@property(nonatomic) unsigned int tlsLatency; // @synthesize tlsLatency=_tlsLatency;
@property(nonatomic) unsigned int tcpHandshakeLatency; // @synthesize tcpHandshakeLatency=_tcpHandshakeLatency;
@property(nonatomic) unsigned int dnsResolutionLatency; // @synthesize dnsResolutionLatency=_dnsResolutionLatency;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTcpRxBytes;
@property(nonatomic) _Bool hasTcpTxBytes;
@property(nonatomic) _Bool hasTcpRetransmissions;
- (int)StringAsInterfaceType:(id)arg1;
- (id)interfaceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasInterfaceType;
@property(nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) _Bool hasTlsLatency;
@property(nonatomic) _Bool hasTcpHandshakeLatency;
@property(nonatomic) _Bool hasDnsResolutionLatency;

@end

