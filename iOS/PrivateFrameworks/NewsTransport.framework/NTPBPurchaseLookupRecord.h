//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBRecordBase;

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying>
{
    NSString *_appAdamID;
    NTPBRecordBase *_base;
    NSMutableArray *_channelTagIDs;
}

+ (Class)channelTagIDsType;
@property(retain, nonatomic) NSMutableArray *channelTagIDs; // @synthesize channelTagIDs=_channelTagIDs;
@property(retain, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)channelTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelTagIDsCount;
- (void)addChannelTagIDs:(id)arg1;
- (void)clearChannelTagIDs;
@property(readonly, nonatomic) _Bool hasAppAdamID;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end

