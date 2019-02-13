//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying>
{
    unsigned int _audioUnitModel;
    unsigned int _payloadFlags;
    unsigned int _rtpSSRC;
    unsigned int _secondaryFlags;
    unsigned int _supportFlags;
    _Bool _useSBR;
    struct {
        unsigned int audioUnitModel:1;
    } _has;
}

+ (int)payloadFromNegotiationPayload:(int)arg1;
+ (int)negotiationPayloadFromPayload:(int)arg1;
@property(nonatomic) _Bool useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) unsigned int secondaryFlags; // @synthesize secondaryFlags=_secondaryFlags;
@property(nonatomic) unsigned int payloadFlags; // @synthesize payloadFlags=_payloadFlags;
@property(nonatomic) unsigned int supportFlags; // @synthesize supportFlags=_supportFlags;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAudioUnitModel;
- (void)printWithLogFile:(void *)arg1;
- (id)newAudioRuleCollection;
- (void)setAudioRuleCollection:(id)arg1;
@property(readonly, nonatomic) _Bool allowAudioRecording;
- (id)initWithSSRC:(unsigned int)arg1 audioRuleCollection:(id)arg2 allowAudioRecording:(_Bool)arg3 audioUnitNumber:(unsigned int)arg4;

@end

