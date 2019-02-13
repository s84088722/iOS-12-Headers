//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UWLMessageHeaders : PBCodable <NSCopying>
{
    NSMutableArray *_cookies;
    NSString *_correlationKey;
    NSString *_userAgent;
    NSString *_xAppleStorefront;
    NSString *_xDsid;
    NSString *_xGuid;
    NSString *_xUseridKey;
    NSString *_xUseridKeyspace;
}

+ (Class)cookiesType;
@property(retain, nonatomic) NSMutableArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSString *xUseridKey; // @synthesize xUseridKey=_xUseridKey;
@property(retain, nonatomic) NSString *xUseridKeyspace; // @synthesize xUseridKeyspace=_xUseridKeyspace;
@property(retain, nonatomic) NSString *correlationKey; // @synthesize correlationKey=_correlationKey;
@property(retain, nonatomic) NSString *xGuid; // @synthesize xGuid=_xGuid;
@property(retain, nonatomic) NSString *xAppleStorefront; // @synthesize xAppleStorefront=_xAppleStorefront;
@property(retain, nonatomic) NSString *xDsid; // @synthesize xDsid=_xDsid;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)cookiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cookiesCount;
- (void)addCookies:(id)arg1;
- (void)clearCookies;
@property(readonly, nonatomic) _Bool hasXUseridKey;
@property(readonly, nonatomic) _Bool hasXUseridKeyspace;
@property(readonly, nonatomic) _Bool hasCorrelationKey;
@property(readonly, nonatomic) _Bool hasXGuid;

@end

