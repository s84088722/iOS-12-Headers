//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVMultiCallback, NSArray, NSMutableDictionary, _MRNowPlayingPlayerPathProtobuf;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientCallbacks : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MSVMultiCallback *_createPlaybackQueueForRequestCallbacks;
    MSVMultiCallback *_createItemForOffsetCallbacks;
    MSVMultiCallback *_createChildItemCallbacks;
    MSVMultiCallback *_metadataCallbacks;
    MSVMultiCallback *_languageOptionsCallbacks;
    MSVMultiCallback *_infoCallbacks;
    MSVMultiCallback *_lyricsCallbacks;
    MSVMultiCallback *_artworkCallbacks;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    CDUnknownBlockType _videoThumbnailsCallback;
    CDUnknownBlockType _audioAmplitudeSamplesCallback;
    NSMutableDictionary *_commandHandlerBlocks;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property(readonly, nonatomic) MSVMultiCallback *artworkCallbacks; // @synthesize artworkCallbacks=_artworkCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *lyricsCallbacks; // @synthesize lyricsCallbacks=_lyricsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *infoCallbacks; // @synthesize infoCallbacks=_infoCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *languageOptionsCallbacks; // @synthesize languageOptionsCallbacks=_languageOptionsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *metadataCallbacks; // @synthesize metadataCallbacks=_metadataCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createChildItemCallbacks; // @synthesize createChildItemCallbacks=_createChildItemCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createItemForOffsetCallbacks; // @synthesize createItemForOffsetCallbacks=_createItemForOffsetCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createPlaybackQueueForRequestCallbacks; // @synthesize createPlaybackQueueForRequestCallbacks=_createPlaybackQueueForRequestCallbacks;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1;
- (void)registerNowPlayingInfoLanguageOptionsCallback:(id)arg1;
- (void)registerNowPlayingInfoAssetCallbacks:(id)arg1;
- (void)registerNowPlayingInfoCallbacks:(id)arg1;
- (void)registerCallbacks;
@property(readonly, copy, nonatomic) NSArray *commandHandlerBlocks;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)addCommandHandlerBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
- (unsigned long long)_onQueue_capabilities;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) _Bool hasPlaybackQueueCallbacks;
@property(copy, nonatomic) CDUnknownBlockType audioAmplitudeSamplesCallback;
@property(copy, nonatomic) CDUnknownBlockType videoThumbnailsCallback;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2;

@end

