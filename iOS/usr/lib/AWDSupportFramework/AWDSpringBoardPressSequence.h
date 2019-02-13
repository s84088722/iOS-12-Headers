//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDSpringBoardPressSequence : PBCodable <NSCopying>
{
    unsigned long long _clickMax;
    unsigned long long _timestamp;
    NSMutableArray *_sequences;
    NSString *_type;
    NSString *_uUID;
    _Bool _didTriggerSOS;
    struct {
        unsigned int clickMax:1;
        unsigned int timestamp:1;
        unsigned int didTriggerSOS:1;
    } _has;
}

+ (Class)sequenceType;
@property(retain, nonatomic) NSString *uUID; // @synthesize uUID=_uUID;
@property(nonatomic) unsigned long long clickMax; // @synthesize clickMax=_clickMax;
@property(nonatomic) _Bool didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *sequences; // @synthesize sequences=_sequences;
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
@property(readonly, nonatomic) _Bool hasUUID;
@property(nonatomic) _Bool hasClickMax;
@property(nonatomic) _Bool hasDidTriggerSOS;
@property(readonly, nonatomic) _Bool hasType;
- (id)sequenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)sequencesCount;
- (void)addSequence:(id)arg1;
- (void)clearSequences;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

