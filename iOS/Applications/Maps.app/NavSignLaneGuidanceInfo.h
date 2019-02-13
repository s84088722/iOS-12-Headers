//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface NavSignLaneGuidanceInfo : NSObject
{
    _Bool _isForManeuver;
    NSUUID *_laneInfoId;
    NSArray *_lanes;
    NSArray *_textAlternatives;
    NSArray *_midStepTitles;
}

+ (struct _NSRange)highlightedLaneRangeForLanes:(id)arg1;
+ (id)_createFakeLanes;
+ (unsigned long long)_numberOfFakeLanes;
+ (id)fakeInfoForManeuver:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *midStepTitles; // @synthesize midStepTitles=_midStepTitles;
@property(readonly, nonatomic) NSArray *textAlternatives; // @synthesize textAlternatives=_textAlternatives;
@property(readonly, nonatomic) _Bool isForManeuver; // @synthesize isForManeuver=_isForManeuver;
@property(readonly, copy, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(readonly, copy, nonatomic) NSUUID *laneInfoId; // @synthesize laneInfoId=_laneInfoId;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange highlightedLaneRange;
@property(readonly, nonatomic) _Bool isForMidStep;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLaneInfoId:(id)arg1 lanes:(id)arg2 forManeuver:(_Bool)arg3 midStepTitles:(id)arg4 details:(id)arg5;
- (id)initWithLaneInfoId:(id)arg1 lanes:(id)arg2;
- (id)initWithGuidanceLaneInfo:(id)arg1;

@end

