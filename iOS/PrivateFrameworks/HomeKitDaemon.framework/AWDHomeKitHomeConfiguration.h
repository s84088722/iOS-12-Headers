//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying>
{
    NSMutableArray *_eventTriggers;
    unsigned int _numAccessories;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _numAdmins;
    unsigned int _numAppleAudioAccessories;
    unsigned int _numAppleMediaAccessories;
    unsigned int _numAppleTVAccessories;
    unsigned int _numBridgedAccessories;
    unsigned int _numBridgedTargetControllers;
    unsigned int _numCameraAccessories;
    unsigned int _numCertifiedAccessories;
    unsigned int _numCertifiedBridgedTargetControllers;
    unsigned int _numCertifiedTargetControllers;
    unsigned int _numEventTriggers;
    unsigned int _numHAPAccessories;
    unsigned int _numMediaSystems;
    unsigned int _numNotCertifiedAccessories;
    unsigned int _numRooms;
    unsigned int _numScenes;
    unsigned int _numServices;
    unsigned int _numTargetControllers;
    unsigned int _numTimerTriggers;
    unsigned int _numTriggers;
    unsigned int _numUsers;
    unsigned int _numWholeHouseAudioAccessories;
    unsigned int _numZones;
    _Bool _isPrimaryResident;
    _Bool _isResidentAvailable;
    struct {
        unsigned int numAccessories:1;
        unsigned int numAccessoryServiceGroups:1;
        unsigned int numAdmins:1;
        unsigned int numAppleAudioAccessories:1;
        unsigned int numAppleMediaAccessories:1;
        unsigned int numAppleTVAccessories:1;
        unsigned int numBridgedAccessories:1;
        unsigned int numBridgedTargetControllers:1;
        unsigned int numCameraAccessories:1;
        unsigned int numCertifiedAccessories:1;
        unsigned int numCertifiedBridgedTargetControllers:1;
        unsigned int numCertifiedTargetControllers:1;
        unsigned int numEventTriggers:1;
        unsigned int numHAPAccessories:1;
        unsigned int numMediaSystems:1;
        unsigned int numNotCertifiedAccessories:1;
        unsigned int numRooms:1;
        unsigned int numScenes:1;
        unsigned int numServices:1;
        unsigned int numTargetControllers:1;
        unsigned int numTimerTriggers:1;
        unsigned int numTriggers:1;
        unsigned int numUsers:1;
        unsigned int numWholeHouseAudioAccessories:1;
        unsigned int numZones:1;
        unsigned int isPrimaryResident:1;
        unsigned int isResidentAvailable:1;
    } _has;
}

+ (Class)eventTriggersType;
@property(nonatomic) unsigned int numCertifiedBridgedTargetControllers; // @synthesize numCertifiedBridgedTargetControllers=_numCertifiedBridgedTargetControllers;
@property(nonatomic) unsigned int numBridgedTargetControllers; // @synthesize numBridgedTargetControllers=_numBridgedTargetControllers;
@property(nonatomic) unsigned int numCertifiedTargetControllers; // @synthesize numCertifiedTargetControllers=_numCertifiedTargetControllers;
@property(nonatomic) unsigned int numTargetControllers; // @synthesize numTargetControllers=_numTargetControllers;
@property(nonatomic) unsigned int numMediaSystems; // @synthesize numMediaSystems=_numMediaSystems;
@property(nonatomic) unsigned int numCameraAccessories; // @synthesize numCameraAccessories=_numCameraAccessories;
@property(nonatomic) unsigned int numAppleTVAccessories; // @synthesize numAppleTVAccessories=_numAppleTVAccessories;
@property(nonatomic) unsigned int numAppleAudioAccessories; // @synthesize numAppleAudioAccessories=_numAppleAudioAccessories;
@property(nonatomic) unsigned int numWholeHouseAudioAccessories; // @synthesize numWholeHouseAudioAccessories=_numWholeHouseAudioAccessories;
@property(nonatomic) unsigned int numAppleMediaAccessories; // @synthesize numAppleMediaAccessories=_numAppleMediaAccessories;
@property(nonatomic) unsigned int numHAPAccessories; // @synthesize numHAPAccessories=_numHAPAccessories;
@property(retain, nonatomic) NSMutableArray *eventTriggers; // @synthesize eventTriggers=_eventTriggers;
@property(nonatomic) unsigned int numCertifiedAccessories; // @synthesize numCertifiedAccessories=_numCertifiedAccessories;
@property(nonatomic) unsigned int numNotCertifiedAccessories; // @synthesize numNotCertifiedAccessories=_numNotCertifiedAccessories;
@property(nonatomic) unsigned int numBridgedAccessories; // @synthesize numBridgedAccessories=_numBridgedAccessories;
@property(nonatomic) _Bool isPrimaryResident; // @synthesize isPrimaryResident=_isPrimaryResident;
@property(nonatomic) _Bool isResidentAvailable; // @synthesize isResidentAvailable=_isResidentAvailable;
@property(nonatomic) unsigned int numZones; // @synthesize numZones=_numZones;
@property(nonatomic) unsigned int numRooms; // @synthesize numRooms=_numRooms;
@property(nonatomic) unsigned int numAccessoryServiceGroups; // @synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups;
@property(nonatomic) unsigned int numTimerTriggers; // @synthesize numTimerTriggers=_numTimerTriggers;
@property(nonatomic) unsigned int numEventTriggers; // @synthesize numEventTriggers=_numEventTriggers;
@property(nonatomic) unsigned int numTriggers; // @synthesize numTriggers=_numTriggers;
@property(nonatomic) unsigned int numScenes; // @synthesize numScenes=_numScenes;
@property(nonatomic) unsigned int numAdmins; // @synthesize numAdmins=_numAdmins;
@property(nonatomic) unsigned int numUsers; // @synthesize numUsers=_numUsers;
@property(nonatomic) unsigned int numServices; // @synthesize numServices=_numServices;
@property(nonatomic) unsigned int numAccessories; // @synthesize numAccessories=_numAccessories;
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
@property(nonatomic) _Bool hasNumCertifiedBridgedTargetControllers;
@property(nonatomic) _Bool hasNumBridgedTargetControllers;
@property(nonatomic) _Bool hasNumCertifiedTargetControllers;
@property(nonatomic) _Bool hasNumTargetControllers;
@property(nonatomic) _Bool hasNumMediaSystems;
@property(nonatomic) _Bool hasNumCameraAccessories;
@property(nonatomic) _Bool hasNumAppleTVAccessories;
@property(nonatomic) _Bool hasNumAppleAudioAccessories;
@property(nonatomic) _Bool hasNumWholeHouseAudioAccessories;
@property(nonatomic) _Bool hasNumAppleMediaAccessories;
@property(nonatomic) _Bool hasNumHAPAccessories;
- (id)eventTriggersAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventTriggersCount;
- (void)addEventTriggers:(id)arg1;
- (void)clearEventTriggers;
@property(nonatomic) _Bool hasNumCertifiedAccessories;
@property(nonatomic) _Bool hasNumNotCertifiedAccessories;
@property(nonatomic) _Bool hasNumBridgedAccessories;
@property(nonatomic) _Bool hasIsPrimaryResident;
@property(nonatomic) _Bool hasIsResidentAvailable;
@property(nonatomic) _Bool hasNumZones;
@property(nonatomic) _Bool hasNumRooms;
@property(nonatomic) _Bool hasNumAccessoryServiceGroups;
@property(nonatomic) _Bool hasNumTimerTriggers;
@property(nonatomic) _Bool hasNumEventTriggers;
@property(nonatomic) _Bool hasNumTriggers;
@property(nonatomic) _Bool hasNumScenes;
@property(nonatomic) _Bool hasNumAdmins;
@property(nonatomic) _Bool hasNumUsers;
@property(nonatomic) _Bool hasNumServices;
@property(nonatomic) _Bool hasNumAccessories;

@end

