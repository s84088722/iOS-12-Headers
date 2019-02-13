//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry
{
    unsigned int _isPresentationInstance:1;
    unsigned int _usesCustomScaleFactor:1;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    unsigned long long _reflectionCategoryBitMask;
    double _width;
    double _length;
    float _reflectionResolutionScaleFactor;
    unsigned long long _reflectionSampleCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)floor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNFloor:(id)arg1;
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}16@0:8, name: __createCFObject
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setReflectionFallOffEnd:(double)arg1;
- (void)setReflectionFallOffStart:(double)arg1;
- (double)reflectionFallOffEnd;
- (double)reflectionFallOffStart;
@property(nonatomic) double reflectivity;
- (void)setReflectionSampleCount:(unsigned long long)arg1;
- (unsigned long long)reflectionSampleCount;
@property(nonatomic) double reflectionResolutionScaleFactor;
@property(nonatomic) double reflectionFalloffStart;
@property(nonatomic) double reflectionFalloffEnd;
@property(nonatomic) double length;
- (double)height;
- (void)setHeight:(double)arg1;
@property(nonatomic) double width;
@property(nonatomic) unsigned long long reflectionCategoryBitMask;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
-     // Error parsing type: ^{__C3DFloor={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}ffffifffQ}16@0:8, name: floorRef
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__C3DFloor={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}ffffifffQ}16, name: initWithFloorGeometryRef:
- (id)init;
- (void)_syncObjCModel;

@end

