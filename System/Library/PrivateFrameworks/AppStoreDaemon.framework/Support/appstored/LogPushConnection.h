//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface LogPushConnection : PBCodable <NSCopying>
{
    NSString *_environment;
    NSMutableArray *_messages;
    NSString *_token;
}

+ (Class)messagesType;
+ (id)connectionWithEnvironment:(id)arg1 token:(id)arg2;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (void)addMessages:(id)arg1;
- (void)clearMessages;
@property(readonly, nonatomic) _Bool hasToken;
@property(readonly, nonatomic) _Bool hasEnvironment;
- (id)formattedText;

@end

