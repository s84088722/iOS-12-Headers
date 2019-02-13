//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface FCCKPLocale : PBCodable <NSCopying>
{
    NSString *_activeKeyboard;
    NSMutableArray *_enabledKeyboards;
    NSString *_languageCode;
    NSString *_regionCode;
}

@property(retain, nonatomic) NSString *activeKeyboard; // @synthesize activeKeyboard=_activeKeyboard;
@property(retain, nonatomic) NSMutableArray *enabledKeyboards; // @synthesize enabledKeyboards=_enabledKeyboards;
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasActiveKeyboard;
- (id)enabledKeyboardsAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledKeyboardsCount;
- (void)addEnabledKeyboards:(id)arg1;
- (void)clearEnabledKeyboards;
@property(readonly, nonatomic) _Bool hasRegionCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;
- (void)dealloc;

@end

