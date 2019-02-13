//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel, UIVisualEffectView;

@interface CKMessageEntryWaveformView : UIView
{
    double _duration;
    NSMutableArray *_powerLevels;
    UIImageView *_waveformImageView;
    unsigned long long _maxPowerLevelsCount;
    UIVisualEffectView *_blurView;
    UIImageView *_balloonImageView;
    UILabel *_timeLabel;
    double _minTimeLabelWidth;
}

+ (id)waveformCurveTransform;
@property(nonatomic) double minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *balloonImageView; // @synthesize balloonImageView=_balloonImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) unsigned long long maxPowerLevelsCount; // @synthesize maxPowerLevelsCount=_maxPowerLevelsCount;
@property(retain, nonatomic) UIImageView *waveformImageView; // @synthesize waveformImageView=_waveformImageView;
@property(retain, nonatomic) NSMutableArray *powerLevels; // @synthesize powerLevels=_powerLevels;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)updateWaveform;
- (void)clearPowerLevels;
- (void)appendPowerLevel:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

