//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineLocationTypeItem : PBCodable <NSCopying>
{
    int _locationType;
    int _percentage;
    struct {
        unsigned int locationType:1;
        unsigned int percentage:1;
    } _has;
}

@property(nonatomic) int percentage; // @synthesize percentage=_percentage;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPercentage;
@property(nonatomic) _Bool hasLocationType;

@end

