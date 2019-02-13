//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SnapshotResponderProtocol-Protocol.h"

@class GEOComposedRouteStep, MKMapSnapshot, MKMapSnapshotter, NSString, Route, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface RouteStepCell : NSObject <SnapshotResponderProtocol>
{
    Route *_route;
    unsigned long long _stepIndex;
    struct CGRect _frame;
    long long _page;
    _Bool _hasSnapshot;
    MKMapSnapshot *_snapshot;
    MKMapSnapshotter *_snapshotter;
    UIColor *_routeCenterPrintColor;
    UIColor *_routeOutlinePrintColor;
    UIColor *_blueTextColor;
    unsigned long long _mapType;
}

+ (id)cellWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 mapType:(unsigned long long)arg3;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(readonly, nonatomic) _Bool hasSnapshot; // @synthesize hasSnapshot=_hasSnapshot;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseSnapshotCreator;
@property(readonly, nonatomic) UIImage *snapshotImage; // @dynamic snapshotImage;
- (CDUnknownBlockType)snapshotBlock;
- (void)drawInRect:(struct CGRect)arg1;
- (id)instructionStringsArray;
- (unsigned long long)numberOfSteps;
- (double)_textLayoutHeightForLines:(id)arg1;
- (void)drawRouteLineInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;
- (struct CGPoint)_cgPointApplyAffineTransform:(struct CGPoint)arg1:(struct CGAffineTransform)arg2:(struct CGAffineTransform)arg3:(struct CGAffineTransform)arg4;
- (CDStruct_c3b9c2ee)_intersectLineWithPoint1:(CDStruct_c3b9c2ee)arg1 point2:(CDStruct_c3b9c2ee)arg2 withRect:(CDStruct_02837cd9)arg3;
- (_Bool)_lineSegmentsIntersectLineAPoint1:(CDStruct_c3b9c2ee)arg1 lineAPoint2:(CDStruct_c3b9c2ee)arg2 lineBPoint1:(CDStruct_c3b9c2ee)arg3 lineBPoint2:(CDStruct_c3b9c2ee)arg4 outIntersectionPoint:(CDStruct_c3b9c2ee *)arg5;
- (void)drawPinInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;
@property(readonly, nonatomic) GEOComposedRouteStep *routeStep; // @dynamic routeStep;
@property(nonatomic) double y; // @dynamic y;
- (id)initWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 mapType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

