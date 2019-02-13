//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView
{
    long long _scaleMode;
}

+ (Class)layerClass;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;
@property(retain, nonatomic) AVPlayer *player;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, retain, nonatomic) AVPlayerLayer *layer; // @dynamic layer;

@end

