//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, CAMTorchPattern, CUCaptureController;

@interface CAMTorchPatternController : NSObject
{
    _Bool __performing;
    double _stepInterval;
    CUCaptureController *__captureController;
    CAMTorchPattern *__currentPattern;
    double __startTime;
    CADisplayLink *__displayLink;
}

@property(readonly, nonatomic) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(readonly, nonatomic) double _startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) CAMTorchPattern *_currentPattern; // @synthesize _currentPattern=__currentPattern;
@property(nonatomic, getter=_isPerforming, setter=_setPerforming:) _Bool _performing; // @synthesize _performing=__performing;
@property(readonly, nonatomic) CUCaptureController *_captureController; // @synthesize _captureController=__captureController;
@property(nonatomic) double stepInterval; // @synthesize stepInterval=_stepInterval;
- (void).cxx_destruct;
- (void)displayLinkFired:(id)arg1;
- (void)doubleBlink;
- (void)blink;
- (void)_applyTorchLevel:(float)arg1;
- (void)_resetTorchLevel;
- (void)stopPerformingPattern;
- (void)startPerformingPattern:(id)arg1;
- (id)initWithCaptureController:(id)arg1;

@end

