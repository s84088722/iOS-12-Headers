//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExpertInstance : PBCodable <NSCopying>
{
    NSMutableArray *_addons;
    int _confidence;
    int _expertType;
    NSMutableArray *_instances;
    int _modelType;
    int _sampleCounts;
    struct {
        unsigned int confidence:1;
        unsigned int expertType:1;
        unsigned int modelType:1;
        unsigned int sampleCounts:1;
    } _has;
}

+ (Class)addonsType;
+ (Class)instancesType;
@property(retain, nonatomic) NSMutableArray *addons; // @synthesize addons=_addons;
@property(retain, nonatomic) NSMutableArray *instances; // @synthesize instances=_instances;
@property(nonatomic) int sampleCounts; // @synthesize sampleCounts=_sampleCounts;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int expertType; // @synthesize expertType=_expertType;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)addonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)addonsCount;
- (void)addAddons:(id)arg1;
- (void)clearAddons;
- (id)instancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (void)addInstances:(id)arg1;
- (void)clearInstances;
@property(nonatomic) _Bool hasSampleCounts;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasExpertType;
@property(nonatomic) _Bool hasModelType;
- (void)dealloc;

@end

