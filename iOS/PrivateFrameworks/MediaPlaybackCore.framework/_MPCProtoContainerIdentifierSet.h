//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSString;

@interface _MPCProtoContainerIdentifierSet : PBCodable <NSCopying>
{
    long long _cloudID;
    long long _delegateInfoID;
    long long _storeAdamID;
    NSString *_cloudCollectionID;
    NSString *_cloudUniversalLibraryID;
    NSString *_radioStationID;
    NSString *_storePlaylistGlobalID;
    NSString *_storePlaylistVersionHash;
    struct {
        unsigned int cloudID:1;
        unsigned int delegateInfoID:1;
        unsigned int storeAdamID:1;
    } _has;
}

@property(retain, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(retain, nonatomic) NSString *radioStationID; // @synthesize radioStationID=_radioStationID;
@property(retain, nonatomic) NSString *cloudCollectionID; // @synthesize cloudCollectionID=_cloudCollectionID;
@property(nonatomic) long long cloudID; // @synthesize cloudID=_cloudID;
@property(retain, nonatomic) NSString *storePlaylistVersionHash; // @synthesize storePlaylistVersionHash=_storePlaylistVersionHash;
@property(retain, nonatomic) NSString *storePlaylistGlobalID; // @synthesize storePlaylistGlobalID=_storePlaylistGlobalID;
@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(nonatomic) long long delegateInfoID; // @synthesize delegateInfoID=_delegateInfoID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCloudUniversalLibraryID;
@property(readonly, nonatomic) _Bool hasRadioStationID;
@property(readonly, nonatomic) _Bool hasCloudCollectionID;
@property(nonatomic) _Bool hasCloudID;
@property(readonly, nonatomic) _Bool hasStorePlaylistVersionHash;
@property(readonly, nonatomic) _Bool hasStorePlaylistGlobalID;
@property(nonatomic) _Bool hasStoreAdamID;
@property(nonatomic) _Bool hasDelegateInfoID;

@end

