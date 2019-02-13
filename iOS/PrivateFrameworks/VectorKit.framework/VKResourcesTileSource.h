//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSource.h>

@class GEOTileKeyMap, NSSet;

__attribute__((visibility("hidden")))
@interface VKResourcesTileSource : VKTileSource
{
    GEOTileKeyMap *_keyToKeysMap;
    NSSet *_scenariosToDownload;
}

- (_Bool)allowPreliminaryTiles;
- (void)cancelDownload:(const struct _GEOTileKey *)arg1;
- (void)performDownload:(const struct _GEOTileKey *)arg1 isPrefetch:(_Bool)arg2 requestPreliminary:(_Bool)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (long long)zEquivalenceClass;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (id)tileLoader;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)dealloc;
- (id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2 sharedResources:(id)arg3 taskContext:(shared_ptr_e963992e)arg4;

@end

