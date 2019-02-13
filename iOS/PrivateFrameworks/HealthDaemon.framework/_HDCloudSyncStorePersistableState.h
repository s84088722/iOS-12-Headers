//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class CKServerChangeToken, NSDate, NSDictionary, NSString;

@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying>
{
    _Bool _hasEncounteredGapInCurrentEpoch;
    int _syncProtocolVersion;
    NSString *_ownerIdentifier;
    NSString *_containerIdentifier;
    CKServerChangeToken *_serverChangeToken;
    unsigned long long _baselineEpoch;
    NSDate *_rebaseDeadline;
    NSDate *_lastSyncDate;
    NSDictionary *_emptyZoneDateByZoneID;
    NSDate *_lastCheckDate;
}

@property(readonly, nonatomic) int syncProtocolVersion; // @synthesize syncProtocolVersion=_syncProtocolVersion;
@property(readonly, nonatomic) _Bool hasEncounteredGapInCurrentEpoch; // @synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch;
@property(readonly, nonatomic) NSDate *lastCheckDate; // @synthesize lastCheckDate=_lastCheckDate;
@property(readonly, nonatomic) NSDictionary *emptyZoneDateByZoneID; // @synthesize emptyZoneDateByZoneID=_emptyZoneDateByZoneID;
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) NSDate *rebaseDeadline; // @synthesize rebaseDeadline=_rebaseDeadline;
@property(readonly, nonatomic) unsigned long long baselineEpoch; // @synthesize baselineEpoch=_baselineEpoch;
@property(readonly, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void).cxx_destruct;
- (id)stateWithSyncProtocolVersion:(int)arg1;
- (id)stateWithBaselineEpoch:(unsigned long long)arg1;
- (id)stateWithGapEncountered:(_Bool)arg1;
- (id)stateByRecordingLastCheckDate:(id)arg1;
- (id)stateWithEmptyZones:(id)arg1;
- (id)stateByRecordingLastSyncDate:(id)arg1;
- (id)stateByResettingRebaselineDeadline;
- (id)stateWithServerChangeToken:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerChangeToken:(id)arg1 baselineEpoch:(unsigned long long)arg2 rebaseDeadline:(id)arg3 lastSyncDate:(id)arg4 emptyZones:(id)arg5 lastCheckDate:(id)arg6 ownerIdentifier:(id)arg7 containerIdentifier:(id)arg8 syncProtocolVersion:(int)arg9;

@end

