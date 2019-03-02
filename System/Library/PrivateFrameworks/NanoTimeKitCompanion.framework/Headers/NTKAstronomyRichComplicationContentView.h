//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NTKAstronomyVistaView, NTKDelayedBlock;

@interface NTKAstronomyRichComplicationContentView : UIView
{
    NTKAstronomyVistaView *_astronomyVistaView;
    NSDate *_date;
    _Bool _paused;
    NTKDelayedBlock *_pauseDelayBlock;
}

- (void).cxx_destruct;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)prepareWristRaiseAnimation;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)applyPausedUpdate:(_Bool)arg1;
- (id)initForDevice:(id)arg1 diameter:(double)arg2;

@end
