//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDouble-Protocol.h>

@class NSArray, NSString;

@interface _INPBDouble : PBCodable <_INPBDouble, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_values;
}

+ (Class)valueType;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

