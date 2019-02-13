//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSData, NSString, NWPBAgentClass;

@interface NWPBAgent : PBCodable <NSCopying>
{
    NWPBAgentClass *_agentClass;
    NSData *_agentData;
    NSString *_agentDescription;
    NSString *_agentIdentifier;
    _Bool _active;
    _Bool _networkProvider;
    _Bool _nexusProvider;
    _Bool _userActivated;
    _Bool _voluntary;
    struct {
        unsigned int active:1;
        unsigned int networkProvider:1;
        unsigned int nexusProvider:1;
        unsigned int userActivated:1;
        unsigned int voluntary:1;
    } _has;
}

@property(retain, nonatomic) NSData *agentData; // @synthesize agentData=_agentData;
@property(nonatomic) _Bool nexusProvider; // @synthesize nexusProvider=_nexusProvider;
@property(nonatomic) _Bool networkProvider; // @synthesize networkProvider=_networkProvider;
@property(nonatomic) _Bool voluntary; // @synthesize voluntary=_voluntary;
@property(nonatomic) _Bool userActivated; // @synthesize userActivated=_userActivated;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *agentDescription; // @synthesize agentDescription=_agentDescription;
@property(retain, nonatomic) NSString *agentIdentifier; // @synthesize agentIdentifier=_agentIdentifier;
@property(retain, nonatomic) NWPBAgentClass *agentClass; // @synthesize agentClass=_agentClass;
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
@property(readonly, nonatomic) _Bool hasAgentData;
@property(nonatomic) _Bool hasNexusProvider;
@property(nonatomic) _Bool hasNetworkProvider;
@property(nonatomic) _Bool hasVoluntary;
@property(nonatomic) _Bool hasUserActivated;
@property(nonatomic) _Bool hasActive;
@property(readonly, nonatomic) _Bool hasAgentDescription;
@property(readonly, nonatomic) _Bool hasAgentIdentifier;
@property(readonly, nonatomic) _Bool hasAgentClass;

@end

