//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHPointFIFO.h>

@class UIView;
@protocol CHPointFIFODrawingTarget;

@interface CHQuadCurvePointFIFO : CHPointFIFO
{
    _Bool _emitInterpolatedPoints;
    float _unitScale;
    CDUnknownBlockType _emissionHandler;
    struct CGPath *_path;
    double _lineWidth;
    id <CHPointFIFODrawingTarget> _drawingTarget;
    UIView *_view;
    // Error parsing type: , name: _lastPoint
    vector_74a7c1d0 _prevPoints;
    vector_74a7c1d0 _points;
    vector_74a7c1d0 _controlPoints;
}

+     // Error parsing type: 68@0:8163248f64, name: interpolateFromPoint:toPoint:controlPoint:time:
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) id <CHPointFIFODrawingTarget> drawingTarget; // @synthesize drawingTarget=_drawingTarget;
// Error parsing type for property lastPoint:
// Property attributes: T,N,V_lastPoint

@property(nonatomic) vector_027a6188 controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) vector_027a6188 points; // @synthesize points=_points;
@property(nonatomic) vector_027a6188 prevPoints; // @synthesize prevPoints=_prevPoints;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(nonatomic) _Bool emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(nonatomic) float unitScale; // @synthesize unitScale=_unitScale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)setUnitScaleForViewSize:(struct CGSize)arg1 normalizedSize:(struct CGSize)arg2 contentScaleFactor:(double)arg3;
- (void)dealloc;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (id)initWithFIFO:(id)arg1 drawingTarget:(id)arg2;
- (id)initWithFIFO:(id)arg1;

@end

