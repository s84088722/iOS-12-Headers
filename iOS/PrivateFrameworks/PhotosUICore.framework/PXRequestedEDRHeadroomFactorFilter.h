//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXNumberFilter.h>

@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter
{
    double _sustainDuration;
    double _highValue;
    double _lastDecreaseTime;
}

@property(nonatomic) double lastDecreaseTime; // @synthesize lastDecreaseTime=_lastDecreaseTime;
@property(nonatomic) double highValue; // @synthesize highValue=_highValue;
@property(nonatomic) double sustainDuration; // @synthesize sustainDuration=_sustainDuration;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (double)updatedOutput;
- (void)setInput:(double)arg1;
- (id)initWithInput:(double)arg1;

@end
