//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileRequesterDelegate-Protocol.h>

@class GEOVoltaireSimpleTileRequester, NSMutableArray, NSString, NSTimer;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOTileRequesterDelegate, GEOResourceManifestTileGroupObserver>
{
    NSTimer *_activeTileGroupTimeoutTimer;
    NSMutableArray *_errors;
    GEOVoltaireSimpleTileRequester *_simpleRequester;
}

+ (Class)simpleRequesterClass;
+ (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (CDStruct_e4886f83 *)newExpiringTilesets;
+ (unsigned long long)expiringTilesetsCount;
+ (unsigned char)tileProviderIdentifier;
- (void).cxx_destruct;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (void)tryFinish;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)cancel;
- (void)cleanup;
- (void)_startWithTileKeys:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_failedToReceiveActiveTileGroup:(id)arg1;
- (void)start;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

