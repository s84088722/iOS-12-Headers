//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class AVPlayerItem, NSObject, PXVideoScrubberController;
@protocol OS_dispatch_queue;

@protocol PXVideoScrubberControllerTarget <NSObject>
@property(copy, nonatomic) CDUnknownBlockType playerItemChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType durationChangeHandler;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 usingBlock:(void (^)(struct))arg3;
- (void)cancelPendingSeeks;
- (void)videoScrubberController:(PXVideoScrubberController *)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(void (^)(_Bool))arg5;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (float)playRate;
- (long long)playerStatus;
- (AVPlayerItem *)playerItem;

@optional
- (void)videoScrubberControllerDidEndSeeking:(PXVideoScrubberController *)arg1;
- (void)videoScrubberControllerWillBeginSeeking:(PXVideoScrubberController *)arg1;
@end

