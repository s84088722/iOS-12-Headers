//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBVoiceCommandDeviceInformation-Protocol.h>

@class NSString;

@interface _INPBVoiceCommandDeviceInformation : PBCodable <_INPBVoiceCommandDeviceInformation, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int deviceIdiom:1;
        unsigned int isHomePodInUltimateMode:1;
    } _has;
    _Bool _isHomePodInUltimateMode;
    int _deviceIdiom;
}

@property(nonatomic) _Bool isHomePodInUltimateMode; // @synthesize isHomePodInUltimateMode=_isHomePodInUltimateMode;
@property(nonatomic) int deviceIdiom; // @synthesize deviceIdiom=_deviceIdiom;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIsHomePodInUltimateMode;
- (int)StringAsDeviceIdiom:(id)arg1;
- (id)deviceIdiomAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceIdiom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

