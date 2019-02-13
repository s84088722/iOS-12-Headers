//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDPCItem, MPWeakTimer, NSIndexPath, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCDPCModel : NSObject
{
    _Bool _initiatedActivityInSession;
    _Bool _didFinishInitialLoad;
    _Bool _shouldReloadAgain;
    unsigned int _supportedAPIMask;
    NSString *_bundleID;
    MCDPCItem *_rootItem;
    CDUnknownBlockType _playbackCompletion;
    CDUnknownBlockType _containerCompletion;
    NSIndexPath *_selectedIndexPath;
    NSMutableDictionary *_items;
    NSMutableDictionary *_beginLoadingBlocks;
    MPWeakTimer *_beginLoadingTimeoutTimer;
    MPWeakTimer *_playbackProgressTimeoutTimer;
    MPWeakTimer *_modelSourceInvalidatedTimer;
    NSObject<OS_dispatch_queue> *_mediaRemoteNotificationQueue;
    NSObject<OS_dispatch_queue> *_mediaRemoteItemQueue;
    struct CGSize _imageSize;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteItemQueue; // @synthesize mediaRemoteItemQueue=_mediaRemoteItemQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteNotificationQueue; // @synthesize mediaRemoteNotificationQueue=_mediaRemoteNotificationQueue;
@property(nonatomic) _Bool shouldReloadAgain; // @synthesize shouldReloadAgain=_shouldReloadAgain;
@property(retain, nonatomic) MPWeakTimer *modelSourceInvalidatedTimer; // @synthesize modelSourceInvalidatedTimer=_modelSourceInvalidatedTimer;
@property(retain, nonatomic) MPWeakTimer *playbackProgressTimeoutTimer; // @synthesize playbackProgressTimeoutTimer=_playbackProgressTimeoutTimer;
@property(retain, nonatomic) MPWeakTimer *beginLoadingTimeoutTimer; // @synthesize beginLoadingTimeoutTimer=_beginLoadingTimeoutTimer;
@property(retain, nonatomic) NSMutableDictionary *beginLoadingBlocks; // @synthesize beginLoadingBlocks=_beginLoadingBlocks;
@property(nonatomic) unsigned int supportedAPIMask; // @synthesize supportedAPIMask=_supportedAPIMask;
@property(nonatomic) _Bool didFinishInitialLoad; // @synthesize didFinishInitialLoad=_didFinishInitialLoad;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType containerCompletion; // @synthesize containerCompletion=_containerCompletion;
@property(copy, nonatomic) CDUnknownBlockType playbackCompletion; // @synthesize playbackCompletion=_playbackCompletion;
@property(nonatomic) _Bool initiatedActivityInSession; // @synthesize initiatedActivityInSession=_initiatedActivityInSession;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) MCDPCItem *rootItem; // @synthesize rootItem=_rootItem;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)itemsFromMRContentItems:(id)arg1;
- (void)_invalidatePlaybackProgressTimeoutTimer;
- (void)_setupPlaybackProgressTimeoutTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidateBeginLoadingTimeoutTimer;
- (void)_setupBeginLoadingTimeoutTimerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_errorForNotification:(id)arg1;
- (void)_finishPlaybackNotification:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRemoteAppIsPlaying:(CDUnknownBlockType)arg1;
- (void)getChildrenAtIndexPath:(id)arg1 inRange:(struct _NSRange)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_finishBeginLoadingNotification:(id)arg1;
- (void)beginLoadingItemAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)containerForRoot;
@property(readonly, nonatomic) NSString *appTitle;
- (void)_browsableContentDidRegisterNotification:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (void)reloadAgainIfInvalidationCalled;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_registerNotifications;
- (void)_registerForClientContent;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;

@end

