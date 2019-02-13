//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@class CAAnimation;

@interface MDLCamera : MDLObject
{
    // Error parsing type: ^{RTCamera=^^?QQffi^f^^@{?=[4]}{?=[4]}^{RTRaySegment}ffffffffff}, name: _camera
    float _worldToMetersConversionScale;
    CAAnimation *_focalDistanceAnimation;
    CAAnimation *_fStopAnimation;
    CAAnimation *_focalLengthAnimation;
    CAAnimation *_apertureAnimation;
    CAAnimation *_apertureAspectAnimation;
    float _barrelDistortion;
    float _fisheyeDistortion;
    float _opticalVignetting;
    float _chromaticAberration;
    float _fStop;
    float _maximumCircleOfConfusion;
    unsigned long long _projection;
    unsigned long long _apertureBladeCount;
    double _shutterOpenInterval;
    // Error parsing type: , name: _flash
}

// Error parsing type for property flash:
// Property attributes: T,N,V_flash

@property(nonatomic) double shutterOpenInterval; // @synthesize shutterOpenInterval=_shutterOpenInterval;
@property(nonatomic) float maximumCircleOfConfusion; // @synthesize maximumCircleOfConfusion=_maximumCircleOfConfusion;
@property(nonatomic) unsigned long long apertureBladeCount; // @synthesize apertureBladeCount=_apertureBladeCount;
@property(nonatomic) float fStop; // @synthesize fStop=_fStop;
@property(nonatomic) float chromaticAberration; // @synthesize chromaticAberration=_chromaticAberration;
@property(nonatomic) float opticalVignetting; // @synthesize opticalVignetting=_opticalVignetting;
@property(nonatomic) float fisheyeDistortion; // @synthesize fisheyeDistortion=_fisheyeDistortion;
@property(nonatomic) float barrelDistortion; // @synthesize barrelDistortion=_barrelDistortion;
@property(nonatomic) unsigned long long projection; // @synthesize projection=_projection;
@property(copy, nonatomic) CAAnimation *apertureAspectAnimation; // @synthesize apertureAspectAnimation=_apertureAspectAnimation;
@property(copy, nonatomic) CAAnimation *apertureAnimation; // @synthesize apertureAnimation=_apertureAnimation;
@property(copy, nonatomic) CAAnimation *focalLengthAnimation; // @synthesize focalLengthAnimation=_focalLengthAnimation;
@property(copy, nonatomic) CAAnimation *fStopAnimation; // @synthesize fStopAnimation=_fStopAnimation;
@property(copy, nonatomic) CAAnimation *focalDistanceAnimation; // @synthesize focalDistanceAnimation=_focalDistanceAnimation;
@property(nonatomic) float worldToMetersConversionScale; // @synthesize worldToMetersConversionScale=_worldToMetersConversionScale;
- (void).cxx_destruct;
- (void)lookAt:from: /* Error: Ran out of types for this method. */;
- (void)lookAt: /* Error: Ran out of types for this method. */;
- (void)frameBoundingBox:(struct)arg1 setNearAndFar:(_Bool)arg2;
// Error parsing type for property exposureCompression:
// Property attributes: T,N

// Error parsing type for property exposure:
// Property attributes: T,N

- (id)bokehKernelWithSize: /* Error: Ran out of types for this method. */;
@property(nonatomic) float farVisibilityDistance;
@property(nonatomic) float nearVisibilityDistance;
- (void)setZFar:(float)arg1;
- (float)zFar;
- (void)setZNear:(float)arg1;
- (float)zNear;
- (float)circleOfConfusionForDistance:(float)arg1;
@property(nonatomic) float sensorAspect;
- (void)setAspect:(float)arg1;
- (float)aspect;
@property(nonatomic) float fieldOfView;
- (void)setFov:(float)arg1;
- (float)fov;
// Error parsing type for property sensorShift:
// Property attributes: T,N

// Error parsing type for property sensorEnlargement:
// Property attributes: T,N

@property(nonatomic) float sensorVerticalAperture;
- (void)setAperture:(float)arg1;
- (float)aperture;
@property(nonatomic) float focusDistance;
@property(nonatomic) float focalLength;
-     // Error parsing type: 32@0:81624, name: rayTo:forViewPort:
-     // Error parsing type: {?=[4]}24@0:8d16, name: getProjectionMatrixAtTime:
// Error parsing type for property projectionMatrix:
// Property attributes: T{?=[4]},R,N

-     // Error parsing type: {?=[4]}24@0:8d16, name: getViewMatrixAtTime:
-     // Error parsing type: ^{RTCamera=^^?QQffi^f^^@{?=[4]}{?=[4]}^{RTRaySegment}ffffffffff}16@0:8, name: rtCamera
- (long long)version;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

