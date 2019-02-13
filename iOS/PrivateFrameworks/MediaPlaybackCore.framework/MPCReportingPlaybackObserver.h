//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVController, MPAVItem, MPCReportingController, NSData, NSOperationQueue, NSString;

@interface MPCReportingPlaybackObserver : NSObject
{
    NSData *_currentJingleReportingTimedMetadata;
    _Bool _hasPendingContainerChange;
    _Bool _hasSetLastPlayEventTimeStamp;
    _Bool _isReloadingWithPlaybackContext;
    _Bool _isScrubbing;
    MPAVItem *_itemForCurrentTimeChange;
    NSOperationQueue *_recordEventOperationQueue;
    double _lastPlayEventEndTimeForCurrentItem;
    double _lastPlayEventTimeStamp;
    _Bool _shouldReportAsPlaying;
    double _startTimeForCurrentTimeChange;
    _Bool _offline;
    _Bool _SBEnabled;
    MPAVController *_player;
    MPCReportingController *_reportingController;
    unsigned long long _storeAccountID;
    NSString *_storeFrontID;
}

@property(copy, nonatomic) NSString *storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property(nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(nonatomic, getter=isSBEnabled) _Bool SBEnabled; // @synthesize SBEnabled=_SBEnabled;
@property(readonly, nonatomic) MPCReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (double)_itemStartTimeForItem:(id)arg1;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1;
- (void)_sendPlaybackEndNotification:(double)arg1 endTime:(double)arg2;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (void)willTransitionItemForBan:(id)arg1;
- (void)willHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (void)recordUserSeekFromTime:(double)arg1 toTime:(double)arg2 forItem:(id)arg3;
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;
- (void)didTransitionItemForBan:(id)arg1;
- (void)didHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (id)newPlayActivityEvent;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;

@end

