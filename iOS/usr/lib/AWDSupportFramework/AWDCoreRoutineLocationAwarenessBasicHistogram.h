//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying>
{
    CDStruct_95bda58d _counts;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setCounts:(int *)arg1 count:(unsigned long long)arg2;
- (int)countAtIndex:(unsigned long long)arg1;
- (void)addCount:(int)arg1;
- (void)clearCounts;
@property(readonly, nonatomic) int *counts;
@property(readonly, nonatomic) unsigned long long countsCount;
- (void)dealloc;

@end
