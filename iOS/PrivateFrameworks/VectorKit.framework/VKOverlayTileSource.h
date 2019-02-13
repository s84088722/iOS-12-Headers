//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSource.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKOverlayTileSource : VKTileSource
{
    VKTileSource *_tileSourceToMatch;
    NSMutableArray *_overlays;
}

@property(readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 isPrefetch:(_Bool)arg2;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (long long)maximumZoomLevelWithoutOverride;
- (long long)maximumZoomLevel;
- (long long)minimumZoomLevel;
- (long long)zEquivalenceClass;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
- (void)matchTilesFromSource:(id)arg1;
- (void)_overlayBoundingMapRegionChanged:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)dealloc;

@end

