//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISVitalityFilter.h>

@class ISDynamicValueFilter;

@interface ISVitalityAdaptiveFilter : ISVitalityFilter
{
    _Bool _didVisibilityOffsetCrossCenter;
    double _vitalityRange;
    double _maxRate;
    long long _direction;
    _Bool _previousVisibility;
    double _previousVisibilityOffset;
    ISDynamicValueFilter *__vitalityOffsetValueFilter;
    double __rawVitalityOffset;
}

@property(nonatomic, setter=_setRawVitalityOffset:) double _rawVitalityOffset; // @synthesize _rawVitalityOffset=__rawVitalityOffset;
@property(readonly, nonatomic) ISDynamicValueFilter *_vitalityOffsetValueFilter; // @synthesize _vitalityOffsetValueFilter=__vitalityOffsetValueFilter;
- (void).cxx_destruct;
- (double)_adjustedDuration:(double)arg1;
- (double)_adjustedVisibilityOffset:(double)arg1;
- (void)inputDidChange;
- (id)initWithSettings:(id)arg1;

@end

