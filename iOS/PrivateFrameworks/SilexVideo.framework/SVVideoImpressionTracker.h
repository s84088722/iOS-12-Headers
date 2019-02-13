//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoImpressionTracking-Protocol.h>

@class NSMutableArray, NSString, SVTimeBasedAction, SVTimeline;
@protocol SVVideoDurationObserving;

@interface SVVideoImpressionTracker : NSObject <SVVideoImpressionTracking>
{
    _Bool _passedImpressionThreshold;
    CDUnknownBlockType _thresholdImpressionBlock;
    CDUnknownBlockType _quartileImpressionBlock;
    double _impressionThreshold;
    unsigned long long _quartile;
    SVTimeline *_timeline;
    id <SVVideoDurationObserving> _durationObserver;
    SVTimeBasedAction *_impressionAction;
    NSMutableArray *_actions;
}

@property(readonly, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) SVTimeBasedAction *impressionAction; // @synthesize impressionAction=_impressionAction;
@property(readonly, nonatomic) id <SVVideoDurationObserving> durationObserver; // @synthesize durationObserver=_durationObserver;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) unsigned long long quartile; // @synthesize quartile=_quartile;
@property(nonatomic, getter=hasPassedImpressionThreshold, setter=setHasPassedImpressionThreshold:) _Bool passedImpressionThreshold; // @synthesize passedImpressionThreshold=_passedImpressionThreshold;
@property(readonly, nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(copy, nonatomic, setter=uponQuartileImpression:) CDUnknownBlockType quartileImpressionBlock; // @synthesize quartileImpressionBlock=_quartileImpressionBlock;
@property(copy, nonatomic, setter=uponThresholdImpression:) CDUnknownBlockType thresholdImpressionBlock; // @synthesize thresholdImpressionBlock=_thresholdImpressionBlock;
- (void).cxx_destruct;
- (void)configureTimelineForQuartileReportingWithDuration:(double)arg1;
- (void)configureTimelineForImpressionReportingWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithTimeline:(id)arg1 impressionThreshold:(double)arg2 durationObserver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

