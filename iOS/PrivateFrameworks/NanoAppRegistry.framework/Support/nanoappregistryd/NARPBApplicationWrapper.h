//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"
#import "SYChange-Protocol.h"
#import "SYObject-Protocol.h"

@class NARPBApplicationStateWrapper, NSData, NSMutableArray, NSString;

@interface NARPBApplicationWrapper : PBCodable <SYObject, SYChange, NSCopying>
{
    NARPBApplicationStateWrapper *_appState;
    NSMutableArray *_appTags;
    NSMutableArray *_iTunesPlistKeys;
    NSMutableArray *_iTunesPlistValues;
    NSMutableArray *_infoPlistLocalizations;
    NSString *_launchServicesBundleType;
    unsigned int _sequenceNumber;
    NSData *_sparsePlistData;
    NSString *_syncId;
    unsigned int _version;
    _Bool _supportsForegroundApplication;
    struct {
        unsigned int sequenceNumber:1;
        unsigned int version:1;
        unsigned int supportsForegroundApplication:1;
    } _has;
}

+ (Class)appTagsType;
+ (Class)iTunesPlistValuesType;
+ (Class)iTunesPlistKeysType;
+ (Class)infoPlistLocalizationsType;
@property(nonatomic) _Bool supportsForegroundApplication; // @synthesize supportsForegroundApplication=_supportsForegroundApplication;
@property(retain, nonatomic) NSMutableArray *appTags; // @synthesize appTags=_appTags;
@property(retain, nonatomic) NARPBApplicationStateWrapper *appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NSString *launchServicesBundleType; // @synthesize launchServicesBundleType=_launchServicesBundleType;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSMutableArray *iTunesPlistValues; // @synthesize iTunesPlistValues=_iTunesPlistValues;
@property(retain, nonatomic) NSMutableArray *iTunesPlistKeys; // @synthesize iTunesPlistKeys=_iTunesPlistKeys;
@property(retain, nonatomic) NSMutableArray *infoPlistLocalizations; // @synthesize infoPlistLocalizations=_infoPlistLocalizations;
@property(retain, nonatomic) NSData *sparsePlistData; // @synthesize sparsePlistData=_sparsePlistData;
@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSupportsForegroundApplication;
- (id)appTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appTagsCount;
- (void)addAppTags:(id)arg1;
- (void)clearAppTags;
@property(readonly, nonatomic) _Bool hasAppState;
@property(readonly, nonatomic) _Bool hasLaunchServicesBundleType;
@property(nonatomic) _Bool hasSequenceNumber;
- (id)iTunesPlistValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)iTunesPlistValuesCount;
- (void)addITunesPlistValues:(id)arg1;
- (void)clearITunesPlistValues;
- (id)iTunesPlistKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)iTunesPlistKeysCount;
- (void)addITunesPlistKeys:(id)arg1;
- (void)clearITunesPlistKeys;
- (id)infoPlistLocalizationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)infoPlistLocalizationsCount;
- (void)addInfoPlistLocalizations:(id)arg1;
- (void)clearInfoPlistLocalizations;
@property(readonly, nonatomic) _Bool hasSparsePlistData;
@property(readonly, nonatomic) _Bool hasSyncId;
@property(nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

