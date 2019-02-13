//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBArticleViewWatch : PBCodable <NSCopying>
{
    int _articleHostViewTypeWatch;
    NSString *_articleId;
    NSString *_articleViewingSessionIdWatch;
    NSString *_sourceChannelId;
    _Bool _didScroll;
    struct {
        unsigned int articleHostViewTypeWatch:1;
        unsigned int didScroll:1;
    } _has;
}

@property(nonatomic) _Bool didScroll; // @synthesize didScroll=_didScroll;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *articleViewingSessionIdWatch; // @synthesize articleViewingSessionIdWatch=_articleViewingSessionIdWatch;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDidScroll;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionIdWatch;
@property(nonatomic) _Bool hasArticleHostViewTypeWatch;
@property(nonatomic) int articleHostViewTypeWatch; // @synthesize articleHostViewTypeWatch=_articleHostViewTypeWatch;

@end

