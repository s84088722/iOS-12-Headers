//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer;

@interface AVSecondScreenPlayerLayerView : UIView
{
    AVPlayerLayer *_activeSourcePlayerLayer;
}

+ (Class)layerClass;
@property(nonatomic) __weak AVPlayerLayer *activeSourcePlayerLayer; // @synthesize activeSourcePlayerLayer=_activeSourcePlayerLayer;
- (void).cxx_destruct;
- (void)stopShowingContentFromActiveSourcePlayerLayer;
- (void)startShowingContentFromSourcePlayerLayer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) AVPlayerLayer *layer; // @dynamic layer;

@end
