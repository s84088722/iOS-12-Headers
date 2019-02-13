//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayloadNeedsValue-Protocol.h>

@class NSArray, NSString;

@interface _INPBPayloadNeedsValue : PBCodable <_INPBPayloadNeedsValue, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_promptItems;
}

+ (Class)promptItemsType;
@property(copy, nonatomic) NSArray *promptItems; // @synthesize promptItems=_promptItems;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)promptItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long promptItemsCount;
- (void)addPromptItems:(id)arg1;
- (void)clearPromptItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
