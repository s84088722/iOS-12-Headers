//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying>
{
    unsigned int _rtpSSRC;
    NSMutableArray *_videoPayloadCollections;
    _Bool _allowRTCPFB;
}

+ (Class)videoPayloadCollectionsType;
@property(retain, nonatomic) NSMutableArray *videoPayloadCollections; // @synthesize videoPayloadCollections=_videoPayloadCollections;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
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
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPayloadCollectionsCount;
- (void)addVideoPayloadCollections:(id)arg1;
- (void)clearVideoPayloadCollections;
- (void)dealloc;
- (void)printScreenWithLogFile:(void *)arg1;
- (void)printVideoWithLogFile:(void *)arg1;
- (id)parameterSetStringFromPayloadSettings:(id)arg1;
- (id)newVideoRuleCollectionsForScreen:(_Bool)arg1 isCellular16x9Capable:(_Bool)arg2;
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned int *)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(_Bool)arg9;
- (_Bool)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(_Bool)arg3 isCellular16x9Capable:(_Bool)arg4;
- (id)getPayloadSettingsForPayload:(int)arg1;
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5;
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5;

@end

