//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLMediaItemBaseViewController.h>

@class AVQueuePlayer, UIColor;

__attribute__((visibility("hidden")))
@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController
{
    AVQueuePlayer *_queuePlayer;
    _Bool _addedObservers;
    UIColor *_fullscreenBackgroundColor;
}

- (void).cxx_destruct;
- (id)fullscreenBackgroundColor;
- (id)player;
- (void)stopObservingItem;
- (void)startObservingItem;
- (void)setupPlayerWithMediaAsset:(id)arg1;
- (void)pause;
- (void)play;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)previewDidAppear:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

