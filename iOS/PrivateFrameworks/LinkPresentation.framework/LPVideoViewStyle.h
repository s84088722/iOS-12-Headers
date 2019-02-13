//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, LPImageViewStyle, LPPadding, LPVideoPlayButtonStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPVideoViewStyle : NSObject
{
    LPVideoPlayButtonStyle *_playButton;
    LPImageViewStyle *_muteButton;
    LPPadding *_muteButtonPadding;
    double _muteButtonOpacity;
    double _muteButtonHighlightedOpacity;
    UIColor *_pulsingLoadIndicatorColor;
    double _pulsingLoadIndicatorMaximumOpacity;
    double _pulsingLoadIndicatorDuration;
    CAMediaTimingFunction *_pulsingLoadIndicatorTimingFunction;
    UIColor *_fullScreenBackgroundColor;
}

@property(retain, nonatomic) UIColor *fullScreenBackgroundColor; // @synthesize fullScreenBackgroundColor=_fullScreenBackgroundColor;
@property(retain, nonatomic) CAMediaTimingFunction *pulsingLoadIndicatorTimingFunction; // @synthesize pulsingLoadIndicatorTimingFunction=_pulsingLoadIndicatorTimingFunction;
@property(nonatomic) double pulsingLoadIndicatorDuration; // @synthesize pulsingLoadIndicatorDuration=_pulsingLoadIndicatorDuration;
@property(nonatomic) double pulsingLoadIndicatorMaximumOpacity; // @synthesize pulsingLoadIndicatorMaximumOpacity=_pulsingLoadIndicatorMaximumOpacity;
@property(retain, nonatomic) UIColor *pulsingLoadIndicatorColor; // @synthesize pulsingLoadIndicatorColor=_pulsingLoadIndicatorColor;
@property(nonatomic) double muteButtonHighlightedOpacity; // @synthesize muteButtonHighlightedOpacity=_muteButtonHighlightedOpacity;
@property(nonatomic) double muteButtonOpacity; // @synthesize muteButtonOpacity=_muteButtonOpacity;
@property(readonly, retain, nonatomic) LPPadding *muteButtonPadding; // @synthesize muteButtonPadding=_muteButtonPadding;
@property(readonly, nonatomic) LPImageViewStyle *muteButton; // @synthesize muteButton=_muteButton;
@property(readonly, nonatomic) LPVideoPlayButtonStyle *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (id)init;

@end

