//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, SXAVPlayer, SXDocumentController, SXImageResource, SXImageView, SXVideoResource;

@interface SXVideoFillPlayerView : UIView
{
    _Bool _shouldLoop;
    _Bool _hasRequestedPlayback;
    unsigned long long _fillMode;
    SXImageResource *_imageResource;
    SXVideoResource *_videoResource;
    SXDocumentController *_documentController;
    AVPlayerLayer *_playerLayer;
    SXAVPlayer *_player;
    SXImageView *_stillImageView;
}

@property(nonatomic) _Bool hasRequestedPlayback; // @synthesize hasRequestedPlayback=_hasRequestedPlayback;
@property(retain, nonatomic) SXImageView *stillImageView; // @synthesize stillImageView=_stillImageView;
@property(retain, nonatomic) SXAVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property(retain, nonatomic) SXVideoResource *videoResource; // @synthesize videoResource=_videoResource;
@property(retain, nonatomic) SXImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playIfPossible;
- (void)switchToPlayer;
- (void)reset;
- (void)pause;
- (void)play;
- (void)layoutSubviews;
- (id)initWithImageResource:(id)arg1 videoResource:(id)arg2 documentController:(id)arg3 imageViewFactory:(id)arg4;

@end

