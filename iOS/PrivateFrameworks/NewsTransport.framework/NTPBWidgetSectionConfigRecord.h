//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBRecordBase;

@interface NTPBWidgetSectionConfigRecord : PBCodable <NSCopying>
{
    NSMutableArray *_articleIDs;
    NSMutableArray *_articleIDs2s;
    NSMutableArray *_articleListIDs;
    NSMutableArray *_articleListIDs2s;
    NTPBRecordBase *_base;
    NSString *_configuration;
    NSString *_configuration2;
}

+ (Class)articleIDs2Type;
+ (Class)articleListIDs2Type;
+ (Class)articleIDsType;
+ (Class)articleListIDsType;
@property(retain, nonatomic) NSMutableArray *articleIDs2s; // @synthesize articleIDs2s=_articleIDs2s;
@property(retain, nonatomic) NSMutableArray *articleListIDs2s; // @synthesize articleListIDs2s=_articleListIDs2s;
@property(retain, nonatomic) NSString *configuration2; // @synthesize configuration2=_configuration2;
@property(retain, nonatomic) NSMutableArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(retain, nonatomic) NSMutableArray *articleListIDs; // @synthesize articleListIDs=_articleListIDs;
@property(retain, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)articleIDs2AtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIDs2sCount;
- (void)addArticleIDs2:(id)arg1;
- (void)clearArticleIDs2s;
- (id)articleListIDs2AtIndex:(unsigned long long)arg1;
- (unsigned long long)articleListIDs2sCount;
- (void)addArticleListIDs2:(id)arg1;
- (void)clearArticleListIDs2s;
@property(readonly, nonatomic) _Bool hasConfiguration2;
- (id)articleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIDsCount;
- (void)addArticleIDs:(id)arg1;
- (void)clearArticleIDs;
- (id)articleListIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleListIDsCount;
- (void)addArticleListIDs:(id)arg1;
- (void)clearArticleListIDs;
@property(readonly, nonatomic) _Bool hasConfiguration;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end

