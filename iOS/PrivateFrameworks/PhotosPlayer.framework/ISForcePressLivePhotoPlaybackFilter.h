//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@interface ISForcePressLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter
{
    struct {
        _Bool respondsToHintWithProgress;
        _Bool respondsToStartPlayback;
        _Bool respondsToStopPlayback;
    } _delegateFlags;
    _Bool _didReachMaxForce;
    _Bool _touchActive;
    _Bool __aboveTimeoutThreshold;
    _Bool __forceAboveThresholdLongEnough;
    _Bool __hasCrossedHintThreshold;
    double _forceProgress;
    long long __currentTimeoutRequestId;
}

@property(nonatomic, setter=_setHasCrossedHintThreshold:) _Bool _hasCrossedHintThreshold; // @synthesize _hasCrossedHintThreshold=__hasCrossedHintThreshold;
@property(nonatomic, setter=_setCurrentTimeoutRequestId:) long long _currentTimeoutRequestId; // @synthesize _currentTimeoutRequestId=__currentTimeoutRequestId;
@property(nonatomic, setter=_setForceAboveThresholdLongEnough:) _Bool _forceAboveThresholdLongEnough; // @synthesize _forceAboveThresholdLongEnough=__forceAboveThresholdLongEnough;
@property(nonatomic, setter=_setAboveTimeoutThreshold:) _Bool _aboveTimeoutThreshold; // @synthesize _aboveTimeoutThreshold=__aboveTimeoutThreshold;
@property(nonatomic, getter=isTouchActive) _Bool touchActive; // @synthesize touchActive=_touchActive;
@property(nonatomic) double forceProgress; // @synthesize forceProgress=_forceProgress;
- (void)setState:(long long)arg1;
- (void)didPerformChanges;

@end

