//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartVideoCallIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBStartVideoCallIntent : PBCodable <_INPBStartVideoCallIntent, NSSecureCoding, NSCopying>
{
    CDStruct_fbf2c6cd _has;
    int _audioRoute;
    NSArray *_contacts;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_targetContacts;
}

+ (Class)targetContactsType;
+ (Class)contactType;
@property(copy, nonatomic) NSArray *targetContacts; // @synthesize targetContacts=_targetContacts;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)targetContactsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long targetContactsCount;
- (void)addTargetContacts:(id)arg1;
- (void)clearTargetContacts;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)contactAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contactsCount;
- (void)addContact:(id)arg1;
- (void)clearContacts;
- (int)StringAsAudioRoute:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
@property(nonatomic) _Bool hasAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

