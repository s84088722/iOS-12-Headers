//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVController : NSObject
{
    struct AVControllerPrivate *_priv;
}

+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3;
+ (id)avControllerWithQueue:(id)arg1 error:(id *)arg2;
+ (id)avController;
+ (_Bool)isNetworkSupportedPath:(id)arg1;
+ (_Bool)isSupportedFileExtension:(id)arg1;
+ (_Bool)isSupportedMimeType:(id)arg1;
+ (void)setEnableNetworkMode:(_Bool)arg1;
+ (id)compatibleAudioRouteForRoute:(id)arg1;
- (void)figPlayerNotificationHandler:(id)arg1;
- (void)fpItemNotification:(id)arg1 sender:(id)arg2;
- (void)dequeueDeadItem;
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1;
- (_Bool)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (struct OpaqueFigPlaybackItem *)createItemWithURL:(id)arg1 flags:(unsigned int)arg2 error:(int *)arg3;
- (double)bookmarkTimeForAVItem:(id)arg1;
- (id)bookmarkGroupIDForAVItem:(id)arg1;
- (void)ensurePlaybackQueueImmed;
- (struct OpaqueFigPlaybackItem *)currentFPItem;
- (id)currentItem;
- (void)makeCurrentItemReady;
- (_Bool)isCurrentItemReady;
- (void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2;
- (void)removeObserver:(id)arg1 fromTMOArray:(id)arg2;
- (void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4;
- (void)scheduleUpdateTimeMarkerObservations;
- (void)updateTimeMarkerObservations;
- (void)setQueue:(id)arg1;
- (void)logPerformanceDataForCurrentItem;
- (id)initWithQueue:(id)arg1 fmpType:(unsigned int)arg2 error:(id *)arg3;
- (id)_figPlayerNotifications;
- (_Bool)isValid;
- (id)initWithQueue:(id)arg1 error:(id *)arg2;
- (void)safeSubtitleCommandPosted:(void *)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)itemHasFinishedPlayingNotification:(id)arg1;
- (void)currentItemHasChanged:(id)arg1;
- (void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2;
- (void)applyDesiredRepeatMode;
- (void)rateDidChangeToRate:(float)arg1;
- (void)fmpEffectiveVolumeDidChange;
- (void)cancelAllCGImageRequests;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(long long)arg3 withImageOptions:(id)arg4;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(long long)arg2 withImageOptions:(id)arg3;
- (struct CGImage *)grabCGImageAtTime:(double)arg1 withTimeOptions:(long long)arg2 withImageOptions:(id)arg3 actualTime:(double *)arg4;
- (_Bool)okToNotifyFromThisThread;
- (int)updateActionAtEnd;
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setApplyVideoTrackMatrix;
- (id)attributeForKey:(id)arg1;
- (void)setSubtitleRecipient:(id)arg1;
- (void)setShouldDisplayClosedCaptions:(_Bool)arg1;
- (_Bool)shouldDisplayClosedCaptions;
- (void)setLayer:(id)arg1;
- (id)lkLayer;
- (void)setOutputQTESFilePath:(id)arg1;
- (id)outputQTESFilePath;
- (void)setVisualContext:(struct OpaqueFigVisualContext *)arg1;
- (struct OpaqueFigVisualContext *)visualContext;
- (long long)eqPreset;
- (void)setEQPreset:(long long)arg1;
- (void)setMuted:(_Bool)arg1;
- (_Bool)muted;
- (void)stepByCount:(int)arg1;
- (void)seekToDate:(id)arg1;
- (void)setCurrentTime:(double)arg1 options:(long long)arg2;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)endInterruptionWithStatus:(id)arg1;
- (_Bool)activate:(id *)arg1;
- (_Bool)canBeginInterruption;
- (_Bool)beginInterruption:(id *)arg1;
- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(int)arg3;
- (id)errorWithDescription:(id)arg1 code:(int)arg2;
- (_Bool)resumePlayback:(double)arg1 error:(id *)arg2;
- (_Bool)setRate:(float)arg1 error:(id *)arg2;
- (_Bool)shouldBeginPlayingItem:(id)arg1 error:(id *)arg2;
- (float)rate;
- (_Bool)playNextItem:(id *)arg1;
- (id)addNextFeederItemToQueue;
- (_Bool)setIndexOfCurrentQueueFeederItem:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)indexOfCurrentQueueFeederItem;
- (void)dequeueFirstItem;
- (void)pause;
- (_Bool)play:(id *)arg1;
- (_Bool)beginRepeatGap;
- (void)cancelContinueAfterRepeatGap;
- (void)continueAfterRepeatGap;
- (_Bool)havePlayedCurrentItem;
- (long long)repeatMode;
- (_Bool)setRepeatMode:(long long)arg1;
- (id)queueFeeder;
- (void)setQueueFeeder:(id)arg1;
- (void)setQueueFeeder:(id)arg1 withIndex:(int)arg2;
- (void)feederInvalidatedWithCurrentItemMoved:(id)arg1;
- (void)feederRangeWasRemoved:(id)arg1;
- (void)feederRangeWasInserted:(id)arg1;
- (id)queue;
- (void)checkQueueSpace;
- (void)scheduleQueueSpaceCheck;
- (int)copyImageForTime:(struct __CVBuffer **)arg1 time:(const CDStruct_1b6d18a9 *)arg2;
- (_Bool)isNewImageAvailableForTime:(const CDStruct_1b6d18a9 *)arg1 willNeverBeAvailable:(_Bool *)arg2;
- (struct AVControllerPrivate *)privateStorage;
- (void)dealloc;
- (id)initForStreaming;
- (id)init;
- (void)setAVItemClass:(Class)arg1;
- (id)initWithError:(id *)arg1;
- (id)vibrationPattern;
- (void)setVibrationPattern:(id)arg1;
- (void)setVibrationEnabled:(_Bool)arg1;
- (_Bool)vibrationEnabled;

@end

