//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetCarLockStatusIntentResponse-Protocol.h>

@class NSString;

@interface _INPBGetCarLockStatusIntentResponse : PBCodable <_INPBGetCarLockStatusIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_b1e20226 _has;
    _Bool _locked;
}

@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

