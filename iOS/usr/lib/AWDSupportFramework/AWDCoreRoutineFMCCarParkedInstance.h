//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _horizontalAccuracy;
    int _locationType;
    NSString *_parkingId;
    int _qualityIndicator;
    int _triggerTypes;
    _Bool _userAssistanceRequired;
    struct {
        unsigned int timestamp:1;
        unsigned int horizontalAccuracy:1;
        unsigned int locationType:1;
        unsigned int qualityIndicator:1;
        unsigned int triggerTypes:1;
        unsigned int userAssistanceRequired:1;
    } _has;
}

@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(nonatomic) int qualityIndicator; // @synthesize qualityIndicator=_qualityIndicator;
@property(nonatomic) int horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) _Bool userAssistanceRequired; // @synthesize userAssistanceRequired=_userAssistanceRequired;
@property(nonatomic) int triggerTypes; // @synthesize triggerTypes=_triggerTypes;
@property(retain, nonatomic) NSString *parkingId; // @synthesize parkingId=_parkingId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocationType;
@property(nonatomic) _Bool hasQualityIndicator;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(nonatomic) _Bool hasUserAssistanceRequired;
@property(nonatomic) _Bool hasTriggerTypes;
@property(readonly, nonatomic) _Bool hasParkingId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

