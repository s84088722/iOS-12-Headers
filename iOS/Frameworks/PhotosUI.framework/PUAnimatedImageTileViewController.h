//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUImageTileViewController.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class ISAnimatedImageView, NSString;

__attribute__((visibility("hidden")))
@interface PUAnimatedImageTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver>
{
    ISAnimatedImageView *_animatedImageView;
    long long _interactionState;
    struct {
        _Bool playbackState;
        _Bool animatedImage;
    } _isValid;
}

- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateAnimatedImageIfNeeded;
- (void)_invalidateAnimatedImage;
- (void)_updatePlaybackStateIfNeeded;
- (void)_invalidatePlaybackState;
- (void)assetViewModelDidChange;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

