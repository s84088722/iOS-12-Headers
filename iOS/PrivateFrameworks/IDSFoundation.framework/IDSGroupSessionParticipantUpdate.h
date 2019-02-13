//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface IDSGroupSessionParticipantUpdate : NSObject
{
    NSUUID *_groupUUID;
    _Bool _isInitiator;
    unsigned long long _participantIdentifier;
    NSString *_participantDestinationID;
    unsigned long long _participantUpdateType;
    _Bool _fromServer;
    NSDate *_serverDate;
    NSData *_participantData;
    NSData *_clientContextData;
    NSArray *_members;
    NSDictionary *_participantIDs;
    NSUUID *_relaySessionID;
}

@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDate *serverDate; // @synthesize serverDate=_serverDate;
@property(readonly, nonatomic) _Bool fromServer; // @synthesize fromServer=_fromServer;
@property(readonly, nonatomic) NSUUID *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(readonly, nonatomic) NSDictionary *participantIDs; // @synthesize participantIDs=_participantIDs;
@property(readonly, nonatomic) NSData *clientContextData; // @synthesize clientContextData=_clientContextData;
@property(readonly, nonatomic) NSData *participantData; // @synthesize participantData=_participantData;
@property(readonly, nonatomic) unsigned long long participantUpdateType; // @synthesize participantUpdateType=_participantUpdateType;
@property(readonly, nonatomic) NSString *participantDestinationID; // @synthesize participantDestinationID=_participantDestinationID;
@property(readonly, nonatomic) unsigned long long participantIdentifier; // @synthesize participantIdentifier=_participantIdentifier;
@property(readonly, nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 isInitiator:(_Bool)arg2 participantIdentifier:(unsigned long long)arg3 participantDestinationID:(id)arg4 participantUpdateType:(unsigned long long)arg5 fromServer:(_Bool)arg6 serverDate:(id)arg7 participantData:(id)arg8 clientContextData:(id)arg9 members:(id)arg10 participantIDs:(id)arg11 relaySessionID:(id)arg12;

@end

