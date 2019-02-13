//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVController, MPAVItem, SKUIMediaPlayerItemStatus;

@interface SKUIMediaPlayer : NSObject
{
    _Bool _playing;
    float _rate;
    SKUIMediaPlayerItemStatus *_playerItem;
    MPAVController *_player;
    MPAVItem *_currentItem;
    id _periodicTimeObserver;
}

@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) id periodicTimeObserver; // @synthesize periodicTimeObserver=_periodicTimeObserver;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) __weak MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) SKUIMediaPlayerItemStatus *playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;

@end

