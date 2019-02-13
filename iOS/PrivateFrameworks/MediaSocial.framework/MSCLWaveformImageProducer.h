//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MSCLWaveformImageProducer : NSObject
{
    double _powerBarSpacing;
    double _powerBarWidth;
    NSMutableArray *_powerLevels;
    long long _waveformMode;
}

@property(nonatomic) long long waveformMode; // @synthesize waveformMode=_waveformMode;
@property(copy, nonatomic) NSArray *powerLevels; // @synthesize powerLevels=_powerLevels;
@property(nonatomic) double powerBarWidth; // @synthesize powerBarWidth=_powerBarWidth;
@property(nonatomic) double powerBarSpacing; // @synthesize powerBarSpacing=_powerBarSpacing;
- (void).cxx_destruct;
- (id)_averagedPowerLevelsWithCount:(long long)arg1;
- (id)imageWithSize:(struct CGSize)arg1;
- (void)appendPowerLevel:(double)arg1;
- (id)init;

@end

